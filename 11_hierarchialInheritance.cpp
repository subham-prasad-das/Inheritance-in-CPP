/*
    -> Hierarchial Inheritance follows a top-down approach by breaking up a complex class into simpler constituent classes.
    -> Here, the base class includes the features that are common to all derieved classes.
    -> A derieved class can be created by inheriting the properties of the base class and adding some of its own features.
*/

#include<bits/stdc++.h>
using namespace std;

class Polygon{
    protected:
        int length, width;

    public:
        void setValue(int length, int width){
            this-> length = length;
            this-> width = width;
        }
};

class Rectangle : public Polygon{
    public:
        int areaCalc(){
            return (length * width);
        }
};

class Triangle : public Polygon{
    public:
        int areaCalc(){
            return (length * width / 2);
        }
};

int main(){
    Rectangle rect1;
    rect1.setValue(3, 4);
    Triangle tri1;
    tri1.setValue(5, 6);
    cout << "The area of the Rectangle having lenght 3m and breadth 4m is: " << rect1.areaCalc() << "mt. sq." <<  endl;
    cout << "The area of the Triangle having base 6m and height 5m is: " << tri1.areaCalc() << "mt. sq." << endl;
    return 0;
}

/*
    -> In hierarchical Inheritance, many child classes can be derived from many one base class. 
    -> All the child classes can somehow access and invoke the data members and member functions of their parent class but there exist no relation between the child classes.
*/