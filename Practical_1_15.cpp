// Write a c++ program to create Matrix Class. Write a menu driven program to perform Matrix Operation.
// Created By :- Ashutosh Kumar Pandey
// Created on :- 23rd January, 2022

#include <iostream>
using namespace std;
class matrix
{
    int row, col;                   // Variables Declared for rest of the Functions {transpose(), large(), swapCol()}.
    int r1, c1, r2, c2;            // Variables Declared for multiply() function, so that two matrix can be mutiplied.
    public:
        void transpose(){
            int i, j;                     // Variables for iteration.
            cout<<"Enter the number of Row for Array: ";
            cin>>row;
            cout<<"Enter the number of Column for Array: ";
            cin>>col;
            int a[row][col];
            int transpose[col][row];
            cout<<"Enter "<<row*col<<" Array Elements: ";
            for( i=0; i<row; i++)
            {
                for( j=0; j<col; j++)
                    cin>>a[i][j];
            }

            // Printing the a matrix
            cout << "\nEntered Matrix: " << endl;
            for ( i = 0; i < row; ++i) {
                for ( j = 0; j < col; ++j) {
                    cout << " " << a[i][j];
                    if (j == col - 1)
                        cout << endl;
                }
            }

            // Computing transpose of the matrix
            for ( i = 0; i < row; ++i)
                for ( j = 0; j < col; ++j) {
                    transpose[j][i] = a[i][j];
                }

            // Printing the transpose
            cout << "\nTranspose of Matrix: " << endl;
            for ( i = 0; i < col; ++i)
                for ( j = 0; j < row; ++j) {
                    cout << " " << transpose[i][j];
                    if (j == row - 1)
                        cout << endl ;
                }
        }


        void multiply(){
            int i,j;
            cout<<"Enter the number of row and column for the first matrix respectively : ";
            cin>>r1>>c1;
            cout<<"Enter the number of row and column for the second matrix respectively : ";
            cin>>r2>>c2;
            int a[r1][c1],b[r2][c2];
            int product[r1][c2];

            if (c1 != r2) {
                cout<<"Multiplication not possible for the above given dimension of the Matrix"<<endl;
                cout<<"Column of first matrix should be equal to row of second matrix"<<endl;
                cout<<"Try Again..!!"<<endl;
            }


            else
            {
                cout<<"Enter "<<r1*c1<<" elements for the first matrix: ";
                for(int p=0; p<r1; p++)
                    {
                        for(int q=0; q<c1; q++)
                            cin>>a[p][q];
                    }
                    cout<<"Enter "<<r2*c2<<" elements for the second matrix: ";
                    for(int x=0; x<r2; x++)
                    {
                        for(int y=0; y<c2; y++)
                            cin>>b[x][y];
                    }


                cout<<"The first matrix is:"<<endl;
                for(i=0; i<r1; ++i)
                {
                    for(j=0; j<c1; ++j)
                    cout<<a[i][j]<<" ";
                    cout<<endl;
                }
                cout<<endl;
                cout<<"The second matrix is:"<<endl;
                for(i=0; i<r2; ++i)
                {
                    for(j=0; j<c2; ++j)
                    cout<<b[i][j]<<" ";
                    cout<<endl;
                }
                cout<<endl;
                for(i=0; i<r1; ++i)
                for(j=0; j<c2; ++j)
                {
                    product[i][j] = 0;
                }
                for(i=0; i<r1; ++i)
                for(j=0; j<c2; ++j)
                for(int k=0; k<c1; ++k)
                {
                    product[i][j]+=a[i][k]*b[k][j];
                }
                cout<<"Product of the two matrices is:"<<endl;
                for(i=0; i<r1; ++i)
                {
                    for(j=0; j<c2; ++j)
                    cout<<product[i][j]<<" ";
                    cout<<endl;
                }
            }
        }

// Function for finding largest and second largest number among the elements of the matrix.
        void large(){
            int i,j,big1=0,big2=0;
            cout<<"Enter the number of Row for Array: ";
            cin>>row;
            cout<<"Enter the number of Column for Array: ";
            cin>>col;
            int arr1[row][col];
            cout<<"Enter "<<row*col<<" Array Elements: ";
            for( i=0; i<row; i++)
            {
                for( j=0; j<col; j++)
                    cin>>arr1[i][j];
            }
// Iteration for finding the largest number among the elements of the Matrix.
            for(i=0;i<row;++i){
                for(j=0;j<col;++j)
                {
                    if(arr1[i][j]>big1)
                        big1=arr1[i][j];
                }
            }

// Iteration for finding second largest element among the element of the Matrix.
            for(i=0;i<row;++i){
                for(j=0;j<col;++j)
                {
                    if(arr1[i][j]>big2&&arr1[i][j]<big1)
                        big2=arr1[i][j];
                }
            }
            cout<<"The elements of the 2D Array you entered are"<<endl;
            for(int r=0; r<row; ++r)
            {
                for(int s=0; s<col; ++s)
                cout<<arr1[r][s]<<" ";
                cout<<endl;
            }

            cout<<"\nLargest number:"<<big1;
            cout<<"\nSecond largest number:"<<big2;
            cout<<endl<<endl;
                }



// This function is for swapping 2nd and 3rd column of the matrix entered by user.
        void swapCol(){
            int i,j;
            cout<<"Enter the number of Row for Array: ";
            cin>>row;
            cout<<"Enter the number of Column for Array: ";
            cin>>col;
            int arr[row][col];
            cout<<"Enter "<<row*col<<" Array Elements: ";
            for( i=0; i<row; i++)
            {
                for( j=0; j<col; j++)
                    cin>>arr[i][j];
            }
            cout<<"\nThe Array is:\n";
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                    cout<<arr[i][j]<<"  ";
                cout<<endl;
            }
            cout<<"\nArray Elements with its Index:\n";
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                    cout<<"arr["<<i+1<<"]["<<j+1<<"] = "<<arr[i][j]<<"  ";
                cout<<endl;
            }
            cout<<endl;

            for (int p=0;p<i;p++){
                int t=arr[p][1];
                arr[p][1]=arr[p][2];
                arr[p][2]=t;
            }
            cout<<"\nThe Array after swapping is:\n";
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                    cout<<arr[i][j]<<"  ";
                cout<<endl;
            }
            cout<<endl;
            cout<<"\nArray Elements with its Index after swapping:\n";
            for(i=0; i<row; i++)
            {
                for(j=0; j<col; j++)
                    cout<<"arr["<<i+1<<"]["<<j+1<<"] = "<<arr[i][j]<<"  ";
                cout<<endl;
            }
            cout<<endl;
            cout<<endl;
                }

};

void printMenu(){
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"Enter 1 for Swapping columns of Matrix"<<endl;
        cout<<"Enter 2 to find largest element of Matrix"<<endl;
        cout<<"Enter 3 to multiply two Matrix"<<endl;
        cout<<"Enter 4 to find the transpose of the Matrix"<<endl;
        cout<<"Enter 5 to Exit"<<endl;
        cout<<"---------------------------------------------------------"<<endl;
        cout<<"---------------------------------------------------------"<<endl<<endl;
    }

int main(){
    int choice;
    matrix e,f,g,h;
    do {
        cout << endl;
        printMenu();
        cout << "Enter your choice: ";
        cin >> choice;
        cout<<endl;

        switch (choice) {
        case 1:
            e.swapCol();
            break;
        case 2:
            f.large();
            break;
        case 3:
            g.multiply();
            break;
        case 4:
            h.transpose();
            break;
        case 5:
            exit(0);
            break;
        default:
            cout << "Invalid Choice.....Try Again..!!"<<endl;
        }

    } while (choice != 5);

    return 0;
}
