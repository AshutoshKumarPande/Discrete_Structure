// write a c++ program that swaps two numbers using pointers.
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>
using namespace std;

void swap(int *first, int *second)
{
    int temp;

    temp = *first;
    *first = *second;
    *second = temp;
}

int main()
{
    int a, b;

    cout << "Enter the numbers : " << endl;
    cin >> a;
    cin >> b;

    cout << "Before swap, a = " << a << ", b = " << b << endl;
    swap(&a, &b);
    cout << "After swap, a = " << a << ", b = " << b << endl;
    return 0;
}
