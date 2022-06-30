// Write a c++ program to Compute the sum upto the n terms of the following series:
// S= 1+1/2+1/3+1/4+....
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>

using namespace std;

int main()
{
    int n;
    float S;
    S=1;
    cout<<"Series: 1+1/2+1/3+1/4....+1/n"<<endl;
    cout<<"Enter the range of above series"<<"(n): ";
    cin>>n;
    for (float i=2;i<=n;i++){
        S=S+1/i;
    }
    cout<<"Sum of the above given series upto "<<n<<" is: "<<S;
    return 0;
}
