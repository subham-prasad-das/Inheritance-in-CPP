/*
    If the derievd class has derieved "private" visibility mode from the base class, then both protected and public members of the base class become private members to the derieved class. Hence they can be accessed by the members of the derived class and not from outside the derieved class.
*/

#include<bits/stdc++.h>
using namespace std;

class Time{
    private:
        int minutes;
        int seconds;
    
    public:
        int hours;
        void setTime(int hrs, int mins, int secs){
            hours = hrs;
            minutes = mins;
            seconds = secs;
        }
        void displayTime(){
            cout << hours << ": " << minutes << ": " << seconds << " ";
        }
        // As the data members "minutes" and "seconds" are "private", so only member of the same class i.e. "setTime()" and "displayTime()" have the access to it.
};

class Clock : private Time{
    // As "Time" is derived "private", so its "public" member become "private" and as its "private" members become "inaccessible", so we can use its "private" members through its members which are "public" and are accessing them.
    private:
        char str[4];
    
    public:
        void setClock(int hrs, int mins, int secs){
            setTime(hrs, mins, secs); // Here we are accessing the private members of Time through "setTime()".
        }
        void displayClock(){
            displayTime(); // Here we are accessing the private members of Time through "displayTime()".
            cout << str <<endl;
        }
        void setAMPM(){
            if(hours > 12) strcpy(str, "PM");
            else strcpy(str, "PM");
        }
};

int main(){
    Clock t1, t2;
    t1.setClock(10, 15, 37);
    t2.setClock(22, 18, 57);
    cout << "Time for t1: " << endl;
    t1.setAMPM();
    t1.displayClock();
    cout << "Time for t2: " << endl;
    t2.setAMPM();
    t2.displayClock();
    return 0;
}

/*
    The main idea behind making of "displayClock()" and "setClock()" is:
        - When inheriting the base class "privately", we cannot access its "private" members directly, but we can access its "public" members which are accessing its private members direclty.
        - As we know that when we inherit a base class "privately", the base class's "public" members become "private" to the derieved class and so we can access them directly inside the derieved class.

        - "displayTime()" and "setTime()" are the members of the base class, which are accessing the private members of that class.
        - when we inherited "Time" privately to "Clock", its private members become unasseccible. But we had its public members "setTime()" and "displayTime()" which had access to the "private" members of "Time".
        - After inheritence, "setTime()" and "displayTime()", which were public to "Time", became private to " Clock".

        - Here "displayClock()" and "setClock()" are just calling "Clock's" private member functions "displayTime()" and "setTime()" respectively, which has the access to the "private" members of "Time".
        - Through making "displayClock()" and "setClock()", we are just accessing the private members of "Time" indirecltly.
        - Also as "displayClock()" and "setClock()" are public to "Clock", we can access the private all of them through making an object of "Clock".
 
*/