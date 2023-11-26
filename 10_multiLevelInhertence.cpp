/*
    Derivation of a class from another derived class is called "Multilevel Inheritance".
*/

#include<bits/stdc++.h>
using namespace std;

class Person{
    private:
        string name;
        string gender;
        int age;
    
    public:
        void inputData(){
            cout << "Enter the name: ";
            cin >> name;
            cout << "Enter your gender: ";
            cin >> gender;
            cout << "Enter your age: ";
            cin >> age;
        }
        void displayData(){
            cout << "Name: " << name << endl;
            cout << "Gender: " << gender << endl;
            cout << "Age: " << age << endl;
        }
};

class Student : private Person{
    private:
        int rollNo;
        string branch;

    public:
        void inputData(){
            Person :: inputData(); // calling the local member function of class "Person"
            cout << "Enter your Roll mo: ";
            cin  >> rollNo;
            cout << "Enter your branch: ";
            cin >> branch;
        }
        void displayData(){
            Person :: displayData(); // calling the local member function of class "Person"
            cout << "Roll No: " << rollNo << endl;
            cout << "Branch: " << branch << endl;
        }
};

class Exam : private Student{
    private:
        int engMark;
        int mathMark;

    public:
        void inputData(){
            Student :: inputData(); // calling the local member function of class "Student"
            cout << "Enter English Mark: ";
            cin >> engMark;
            cout << "Enter Math Mark: ";
            cin >> mathMark;
        }
        void displayData(){
            Student :: displayData(); // calling the local member function of class "Student"
            cout << "English mark is: " << engMark << endl;
            cout << "Maths mark is: " << mathMark << endl;
        }
};

int main(){
    Exam annual;
    annual.inputData();
    annual.displayData();
    return 0;
}

/*
    -> Taken a class "Person" with data members name, gender and age. Derieved a class from "Person" called "Student" and extended the data members with roll no and branch. Again derieved a class from "Student" named "Exam" extended the members by adding "English mark" and "Math mark"
    -> So now as "Student" is derieved from "Person" "Publicily" so all the data members of "Person" is now in "Student". Also as "Exam" is derieved from "Student" "Publicily", ultimately all the data members of the classes "Person" and "Student" are present and accessible thtough the object of the class "Exam".
*/

/*
    When there are member functions of same name of different classes, and when a child class is derieved according to the "Multiple Inheritance" "Publicily", that time when we need to call the function of same name, the compiler gets confused, whether to invoke the function of class A or B as they have function of same name.

    That time C++ inheritance ambiguity comes to effect. According to the inheritance ambiguity of C++, we can use scope resolution to solve this problem.
    For example, 
        - class A has a function "Fun" which is also present in class B.
        - let class C is derieved from class A and class B.
        - If we want to call the function inside the class C, then we can write, 
            A :: Fun(); --> for invoking the "Fun" of A
            B :: Fun(); --> for invoking the "Fun" of B
        - If we want to call the function outside the class, let it be from the main(), we 1st need to create an object of class C, then only we can call both of them independently, considering the fact that, class A and class B are "Publicily" inherited into the class C.
        - So the syntax for calling the functions independently from the main function will be:-
            C obj;
            obj.A :: Fun(); --> for calling the Fun() of class A.
            obj.B :: fun(); --> for calling the Fun() of class B.
*/