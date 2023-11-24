/*
    -> This property of OOP allows the creation of hierarchial classifications.
    -> It allows building a class, which is derieved from another class.
    -> A class from which a class is inherited is reffered to as a base class and the class that has been inherited is called the derieved class.
    -> A derieved class inherits both the data members and member functions of its base classes. It may also define additional data members and member functions that support specialized functionlity.
*/

#include<bits/stdc++.h>
using namespace std;

class Animal{
    public:
        string sound;

};

class Dog : public Animal{
    public:
        Dog(string sound){
            this-> sound = sound;
        }

        void print(){
            cout << sound;
        }
};

int main(){
    Dog d1("bark");
    d1.print();
    return 0;
}

/*
    -> Here we have inherited the "Animal" class into "Dog" class.
    -> So, we can say that, "Dog" is inherited from "Animal".
    -> "Dog" is derieved class and "Animal" is base class.
*/