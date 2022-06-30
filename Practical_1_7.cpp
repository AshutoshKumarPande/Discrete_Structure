// Write a c++ function to compute the factors of a given number
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>
using namespace std;

void factor();
int main()
{
    factor();
    return 0;
}
void factor(){
    int int1;
    int j;
    int fla=0;
    cout<<"Enter a number to compute its factor: ";

    cin>>int1;

    if (int1==1){
        cout<<"factor of '1' is '1'"<<endl;
    }
    else {
            cout<<"factors of "<<int1<<" are: ";
        for (j=1;j<=int1;j++){
        if (int1%j==0){
                cout<<j<<"   ";
    }
        }
    }

}
