/*
    Constructors in Base and Derieved Class
    
    -> The constructor play an important role in initiallizing an object's data members.
    -> They are not inherited in the inheritance process, unlike other fuctions that are inherited.
    -> The derieved class need not have a constructor as long as the base class has a "constructor without argument".
    -> But it is mandatory for the derieved class to have a constructor and pass the argument to the base class constructor, if base class has a constructor with arguments.
    -> When an object of a derived class is created, the constructor of the base class is executed first and then the constructor of the derieved class executed.
*/

#include<bits/stdc++.h>
using namespace std;

class Time{
    protected:
        int minutes;
        int seconds;
        int hours;
    
    public:
        Time(int hrs, int mins, int secs){ // constructor of the base class.
            cout << "Base class(Time) constructor started" << endl;
            hours = hrs;
            minutes = mins;
            seconds = secs;
            cout << "Base class(TIme) constructor ends" << endl;
        }
};

class Clock : private Time{
    private:
        char str[4];

    public:
        // Below syntax is constructor of the base derieved passing values to the constructor of the base class for value initialization of data members of the base class.
        Clock(int hrs, int mins, int secs) : Time(hrs, mins, secs){ 
            cout << "Derieved class(Clock) constructor starts" << endl;
            if (hours > 12) strcpy(str, "PM");
            else strcpy(str, "AM");
            cout << "Derieved class(Clock) constructor ends" << endl;
        }
        void displayClock(){
            cout << hours << " : " << minutes << " : " << seconds << endl;
        }
};

int main(){
    cout << "Declaration of t1 " << endl;
    Clock t1(8, 15, 33);
    cout << "Declaration of t2 " << endl;
    Clock t2(18, 45, 36);
    cout << "Time for t1: ";
    t1.displayClock(); cout << endl;
    cout << "Time for t2: ";
    t2.displayClock(); cout << endl;
    return 0;
}

/*
    The syntax "Clock(int hrs, int mins, int secs) : Time(hrs, mins, secs)" by which the values of the constructor of the base class is passed through the constructor of the derieved class gives the following notes:-

        - It is useful when the base class has a constructor defined with arguments.
        - For passing value, we need to write the constructor of the derieved class as it is but after that we need to use " : " and write the constructor of the base class as if we are calling a function, that is the variables without their datatypes has to be written.
*/


/*
    As we know that, When an object of a derived class is created, the constructor of the base class is executed first and then the constructor of the derieved class executed. So the output of the program is given bellow:-

    Output:-

    Declaration of t1
    // when an object of class "Clock" is created,
    Base class(Time) constructor started
    Base class(TIme) constructor ends
    Derieved class(Clock) constructor starts
    Derieved class(Clock) constructor ends

    Declaration of t2 
    // when another object of class "Clock" is created,
    Base class(Time) constructor started
    Base class(TIme) constructor ends
    Derieved class(Clock) constructor starts
    Derieved class(Clock) constructor ends
    
    Time for t1: 8 : 15 : 33
    Time for t2: 18 : 45 : 36

*/