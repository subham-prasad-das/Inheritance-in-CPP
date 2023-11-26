/*
    -> Virtual base class handles ambiguity caused due to the multipath inheritance. It is achieved by making the common base class as a virtual base class while declaring the direct or intermidiate classes.

    -> Need for Virtual Base Class:--
        - Consider the situation where we have one class A . This class A is inherited by two other classes B and C. Both these class are inherited into another in a new class D.
        - Data members/function of class A are inherited twice to class D. One through class B and second through class C. When any data / function member of class A is accessed by an object of class D, ambiguity arises as to which data/function member would be called? One inherited through B or the other inherited through C. This confuses compiler and it displays error.

    -> To resolve this ambiguity when class A is inherited in both class B and class C, it is declared as virtual base class by placing a keyword virtual.

    -> Now only one copy of data/function member will be copied to class C and class B and class A becomes the virtual base class and thats how virtual base classes offer a way to save space and avoid ambiguities in class hierarchies that use multiple inheritances.

    -> When a base class is specified as a virtual base, it can act as an indirect base more than once without duplication of its data members. A single copy of its data members is shared by all the base classes that use virtual base.
*/

#include <iostream> 
using namespace std; 
  
class A { 
public: 
    int a; 
    A(){ 
        a = 10; // initialized a as 10 inside the constructor 
    } 
}; 
  
class B : public virtual A { // made classs A as virtual to avoid ambuguity
    // some codes to consider
}; 
  
class C : public virtual A { // made classs A as virtual to avoid ambuguity
    // some codes to consider
}; 
  
class D : public B, public C { // made classs A as virtual to avoid ambuguity
    // some codes to consider    
}; 
  
int main() 
{ 
    // as all the classes are inherited publicily, so we can access all the members through the last child class. 
    D object; 
    cout << "a = " << object.a << endl; 
    return 0; 
}