// Write a c++ program to Compute the sum upto the n terms of the following series:
// S= 1-2+3-4+5-6....+n
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>

using namespace std;

int main()
{
    int n,exp,ex;
    float S;
    S=0;
    ex=-1;
    exp=-1;
    cout<<"Series: 1-2+3-4+5-6....+n"<<endl;
    cout<<"Enter the range of above series"<<"(n): ";
    cin>>n;
    for (float i=1;i<=n;i++){
        ex=ex*exp;
        S=S+(ex)*i;

    }
    cout<<"Sum of the above given series upto "<<n<<" is: "<<S;
    return 0;
}
