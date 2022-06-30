// Write a c++ function that checks whether a given string is a palindrome
// or not and use it to check whether the string entered by user is palindrome
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>
#include <cstring>

using namespace std;

void chkPalin();
int main()
{
    chkPalin();
    return 0;
}
void chkPalin(){
    char str1[6]="level";
    int i,length;
    int flag=0;
    length=strlen(str1);
    for (i=0;i<length;i++){
        if (str1[i]!=str1[length-i-1]){
            flag=1;
            break;
        }
    }
    if (flag){
        cout<<"The String "<<str1<<" is not a palindrome"<<endl;
    }
    else{
        cout<<"The String "<<str1<<" is a palindrome"<<endl;
    }
    cout<<"Enter a String to be checed for palindrone: ";
    char str2[20];
    cin>>str2;
    int j,len;
    int fla=0;
    len=strlen(str2);
    for (j=0;j<len;j++){
        if (str2[j]!=str2[length-j-1]){
            fla=1;
            break;
        }
    }
    if (fla){
        cout<<"The String "<<str2<<" is not a palindrome"<<endl;
    }
    else{
        cout<<"The String "<<str2<<" is a palindrome"<<endl;
    }

}


