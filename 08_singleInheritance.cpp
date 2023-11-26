#include<bits/stdc++.h>
using namespace std;

class Human{
    private:
        int age, height, weight;

    public:
        void setData(int age, int height, int weight){
            this-> age = age;
            this-> height = height;
            this-> weight = weight;
        }
        void displayData(){
             cout << "The age of the man is: " << age << ", his height is: " << height << " and his weight is: " << weight;
        }
};

class Man : private Human{
    public:
        Man(int age, int height, int weight){
            setData(age, height, weight);
        }
        void showData(){
           displayData();
        }
};

int main(){
    Man m1(23, 174, 70);
    m1.showData();
    return 0;
}

/*
    The above example is of single inheritance because here, the derieved class (Man) is inherited from a single base class (Human).
*/

/*

    When we are inheriting the base class privately, private members of the base class can only be accessed through the methods kept public in the base class. Because the the methods kept public in the base class, after inheritation, will be private to the derieved class, which can only be used within the derieved class.

    Template of private derivation can be said like the above method as we can not access them directly inside the derieved class.
*/