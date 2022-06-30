// Write a c++ program using iteration to display the Fibonacci series,Calculate
// factorial of a number and calculate GCD of two numbers.
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>
using namespace std;
void fib() {
   int num;
   cout << "Enter the number : ";
   cin >> num;
   cout << "\nThe fibonacci series : " ;
   int x = 0, y = 1, z = 0;
   for (int i = 0; i < num; i++) {
      cout << x << " ";
      z = x + y;
      x = y;
      y = z;
   }
}



void fact() {
   int n;
   cout<<"Enter the number whose factorial is to be find: ";
   cin>>n;
   int fact = 1, i;
   for(i=1; i<=n; i++)
   fact = fact * i;
   cout<<"Factorial of "<< n <<" is "<<fact;
}



void gcdhcf() {
  int n1, n2, gcd;
  cout << "Enter two numbers: ";
  cin >> n1 >> n2;

  // swapping variables n1 and n2 if n2 is greater than n1.
  if ( n2 > n1) {
    int temp = n2;
    n2 = n1;
    n1 = temp;
  }

  for (int i = 1; i <=  n2; ++i) {
    if (n1 % i == 0 && n2 % i ==0) {
      gcd = i;
    }
  }

  cout << "GCD of "<<n1<<" and "<<n2<<" is " << gcd;
}





int main() {
   int choice;
   cout<<"Enter 1 for Fibonacci series "<<endl;
   cout<<"Enter 2 for Factorial "<<endl;
   cout<<"Enter 3 for GCD "<<endl;
   cout<<"Enter 4 to Exit "<<endl;
   cin>>choice;
    while(choice!=4){
        if (choice==1){
            fib();
        }
        else if(choice==2){
            fact();
        }

        else if (choice==3){
            gcdhcf();
        }
        cout<<endl;
        cout<<"Enter your choice again: ";
        cin>>choice;
   }


   return 0;
}
