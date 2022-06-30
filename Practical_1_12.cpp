// Write a c++ program to generate pay-slip of salaried employee.
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include<iostream>
using namespace std;

class Employee
{
        int eid;
        float basic_pay, hra, da, tax, ta, net_salary,g_salary;

        public:
        void accept_details()
        {
                cout<<" Enter Basic Pay:    ";
                cin>>basic_pay;
                cout<<" Enter HRA ("<<"%):      ";
                cin>>hra;
                cout<<" Enter DA ("<<"%):       ";
                cin>>da;
                cout<<" Enter TA ("<<"%):       ";
                cin>>ta;
                cout<<" Enter Tax ("<<"%):      ";
                cin>>tax;


                da = da/100.00 * basic_pay;
                tax = tax/100.00 * basic_pay;
                hra=hra/100.00 * basic_pay;
                ta=ta/100.00 * basic_pay;
                g_salary=basic_pay + hra + da + ta;
                net_salary = basic_pay + ta + da + hra - tax;
        }
        void display_details()
        {
                cout<<"\n                PAYMENT SLIP                ";
                cout<<"\n ------------------------------------------ ";
                cout<<"\n BASIC PAY                  "<<basic_pay;
                cout<<"\n HRA                       + "<<hra;
                cout<<"\n DA                        +  "<<da;
                cout<<"\n TA                        +  "<<ta;
                cout<<"\n ------------------------------------------ ";
                cout<<"\n GROSS SALARY               "<<g_salary;
                cout<<"\n TAX DEDUCTIONS            - "<<tax;
                cout<<"\n ------------------------------------------ ";
                cout<<"\n NET SALARY                 "<<net_salary;
        }
};
int main()
{
        Employee e;
        e.accept_details();
        e.display_details();
        return 0;
}
