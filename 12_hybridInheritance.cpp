/*
    -> There can happen many situations where more than one form of inheritance is used n designing a class.
    -> Generally hybrid inheritance is a combination of multiple inheritance and multilevel inheritance.
*/

#include<bits/stdc++.h>
using namespace std;

class Salary{
    protected:
        float basic, perks;

    public:
        Salary(float b, float p){
            basic = b;
            perks = p;
        }
};

class TotalIncome : public Salary{
    protected:
        float houseRent;

    public:
        TotalIncome(float b, float p, float h) : Salary(b, p){
            houseRent = h;
        }
};

class Deduction{
    protected:
        float incomeTax, otherTaxes;
    
    public:
        Deduction(float i, float o){
            incomeTax = i;
            otherTaxes = o;
        }
};

class Pay : public TotalIncome, public Deduction{
    public:
        Pay(float b, float p, float h, float i, float o) : TotalIncome(b, p, h), Deduction(i, o){}
        void displayPay(){
            float netPay;
            cout << "Salary Statement:-" << endl << endl;
            cout << "Basic Pay: " << basic << endl;
            cout << "Perks: " << perks << endl;
            cout << "Income from house: " << houseRent << endl;
            cout << "Income Tax: " << incomeTax << endl;
            cout << "Other Taxes: " << otherTaxes << endl;
            netPay = basic + perks + houseRent - incomeTax - otherTaxes;
            cout << "Net Pay: " << netPay << endl;
        }
};

int main(){
    Pay emp(12000, 8000, 4000, 3000, 200);
    emp.displayPay();  
    return 0;
}