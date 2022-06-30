// Write a c++ program to print the triangle of stars
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of lines of stars in triangle: ";
    cin>>n;
    for (int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
