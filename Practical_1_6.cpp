// Write a c++ function to find whether a given number is prime or not.
// Use the Same to generate prime number less than 100.
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>
using namespace std;

void chkPrime();
int main()
{
    chkPrime();
    return 0;
}
void chkPrime(){
    int int1;
    int j;
    int fla=0;
    cout<<"Enter a number to be checked for Prime: ";

    cin>>int1;

    if (int1==1){
        cout<<"'1' is neither prime nor composite"<<endl;
    }
    else if (int1==2){
        cout<<"'2' is the smallest prime number"<<endl;
    }
    else{
        for (j=2;j<int1;j++){
        if (int1%j==0){
            fla=1;
            break;
        }
    }
    }
    if (fla){
        cout<<"The number "<<int1<<" is not a Prime Number"<<endl;
    }
    else{
        cout<<"The number "<<int1<<" is a Prime Number"<<endl;
    }
    cout<<"Prime Numbers less than 100 are:"<<endl;
    cout<<"2,";
    for (int i=3;i<100;i++){
        int flag=0;
        for (int k=2;k<i;k++){
            if (i%k==0){
                flag=1;
                break;
            }
        }
        if (flag==0){
            cout<<i<<",";
        }
    }

}
