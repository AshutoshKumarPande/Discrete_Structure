// Write a c++ program to print the sum and product of digits of an integer
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>

using namespace std;

int main()
{
    int integer, sum , prod,rem,quo;
    cout<<"Enter an integer to do operation on it:";
    cin>>integer;
    sum=0;
    prod=1;
    quo=integer;
    while (quo>0)
    {
        rem=quo%10;
        quo=quo/10;
        sum=sum+rem;
        prod=prod*rem;
    }
    cout<<"Sum of the digits of integer "<<integer<<" is: "<<sum<<endl;
    cout<<"Product of the digits of integer "<<integer<<" is: "<<prod<<endl;
    return 0;
}
