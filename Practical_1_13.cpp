// Write a c++ menu driven program to perform operations on strings.
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include<conio.h>

#include<string.h>

#include<stdio.h>

#include<iostream>
using namespace std;

class strings

{

char a[20],b[10],ch;

int c,l1,l2,n;

public:

void input();

void output();

};

void strings::input()

{

cout<<"Enter first string: ";

gets(a);

cout<<"Enter second string: ";

gets(b);

}

void strings::output()

{

ch='y';

while(ch== 'y' || ch=='Y')

{

cout<<"Press 1 to find length of strings\n";

cout<<"Press 2 to copy second string into first string\n";

cout<<"Press 3 to compare the two strings\n";

cout<<"Press 4 to convert strings into upper case\n";

cout<<"Press 5 to convert strings into lower case\n";

cout<<"Press 6 to reverse the given strings\n";

cin>>n;


switch(n)

{

case 1:

l1=strlen(a);

l2=strlen(b);

cout<<"Length of first string is:"<<l1<<endl;

cout<<"Length of second string is:"<<l2<<endl;

break;

case 2:

cout<<"Before copying first string is: ";

puts(a);

cout<<endl;

strcpy(a,b);

cout<<"After copying first string is: ";

puts(a);

cout<<endl;

break;

case 3:

c=strcmp(a,b);

if(c==0)

cout<<"Strings are equal"<<endl;

else if(c<0)

cout<<"First string is larger string than second string"<<endl;

else

cout<<"Second is larger string than first "<<endl;

break;

case 4:

strupr(a);

cout<<"First string in upper case is: ";

puts(a);

cout<<endl;

strupr(b);

cout<<"Second string in upper case is: ";

puts(b);

cout<<endl;

break;

case 5:

strlwr(a);

cout<<"first string in lower case is: ";

puts(a);

cout<<endl;

strlwr(b);

cout<<"Second string in lowercase is: ";

puts(b);

cout<<endl;

break;

case 6:

strrev(a);

cout<<"Reverse of first string is: ";

puts(a);

cout<<endl;

strrev(b);

cout<<"Reverse of second string is: ";

puts(b);

cout<<endl;

break;

default:

cout<<"Wrong choice"<<endl;

}

cout<<"Do u want to perform another operation: ";

cin>>ch;

}

}

int main()

{

strings s1;

s1.input();

s1.output();

getch();
return 0;

}
