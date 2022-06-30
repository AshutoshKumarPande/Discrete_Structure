/*
 Create a class length containing feet and inch.
 Include the following functions:
    (a) Input length object
    (b) Overload + operator
    (c) Overload - operator
    (d) Display length Object
Write a program which takes input from user for feet and inch to the class.*/
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>
#include<cstdlib>

using namespace std;
class length{
private:
    int feet,inch;

public:
    length();
    length(length &);
    ~length(){}

    void input();
    void display();

    length operator+(length &);
    length operator-(length &);
};

length::length(){
    feet=inch=0;
}

length::length(length &o){
    feet=o.feet;
    inch=o.inch;
}

void length::input(){
    cout<<"Enter feet: ";
    cin>>feet;
    cout<<"Enter Inch: ";
    cin>>inch;
    if (inch>=12)
    while (inch>=12){
        inch-=12;
        feet++;
    }
    return;
}

void length::display(){
    cout<<"length: "<<feet<<"\' "<<inch<<"\"\n";
    return;
}
length length::operator+(length &o){
    length temp(*this);
    temp.feet +=o.feet;
    temp.inch+=o.inch;
    if (temp.inch>=12)
    while (temp.inch>=12){
        temp.inch-=12;
        temp.feet++;
    }
    return temp;
}

length length::operator-(length &o){
    length temp(*this);
    temp.feet -=o.feet;
    temp.inch-=o.inch;
    if (temp.inch>=12)
    while (temp.inch>=12){
        temp.inch-=12;
        temp.feet++;
    }
    temp.feet=abs(temp.feet);
    temp.inch=abs(temp.inch);
    return temp;
}

int main(){
    length a,b,sum,diff;
    cout<<"length 1\n";
    cout<<"-----------\n";
    a.input();
    a.display();
    cout<<endl;

    cout<<"length 2\n";
    cout<<"-----------\n";
    b.input();
    b.display();
    cout<<endl;

    cout<<"Sum\n";
    cout<<"------\n";
    sum=a+b;
    sum.display();
    cout<<endl;

    cout<<"Difference\n";
    cout<<"--------------\n";
    diff=a-b;
    diff.display();
    cout<<endl;

    return 0;
}
