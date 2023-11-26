/*
    In the derieved class, the function members of the derieved class can access the protected and public members of the base class. The members, which are accessible to the derived class, retain the original protected and public status.
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
            cout << hours << " : " << minutes << " : " << seconds << " ";
        }
    // As "minutes and seconds" are private, so only "setTime()" and "displayTime()" can access them.
};

class Clock : public Time{
    private:
        char str[4];
    
    public:
        void setAMPM(){
            if(hours > 12) strcpy(str, "PM");
            else strcpy(str, "PM");
            cout << str << endl;
        }
    // As we have inherited "Time" publicly, so "setTime()" and "displayTime()" can be accessed "publicily" inside the derieved class. Also as they are public members of the class "Clock", so they can also be accessed in the main() just through the object of "Clock". 
};

int main(){
    Clock t1, t2;
    t1.setTime(10, 15, 37);
    t2.setTime(22, 18, 57);
    cout << "Time for t1=\t";
    t1.displayTime();
    t1.setAMPM();
    cout << "Time for t2=\t";
    t2.displayTime();
    t2.setAMPM();
    return 0;
}