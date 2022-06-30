// Write a c++ program to reverse a number.
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>

using namespace std;

int main()
{
    long long num,rev,rem,quo,num1;
    cout<<"Enter a number to be reversed: ";
    cin>>num;
    num1=num;
    rev=0;
    while (num1!=0){
        rem=num1%10;
        num1=num1/10;
        rev=rev*10+rem;
    }
    cout<<"The Reverse of integer "<<num<<" is: "<<rev<<endl;
    return 0;
}
