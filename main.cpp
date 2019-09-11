#include <iostream>
using namespace std;

// Banuka Knight
// Program: Create dynamic array, enter values and find second largest number in array.

class findsecondlargest // class created
{
private:

public:
// create parametrized constructor to display the values which are passed
    findsecondlargest(int large1, int large2)
    {
// print out largest & second largest number
cout << "\nLargest number in MATRIX is: " <<large1;
    cout << "\nSecond Largest number is: " << large2 <<endl;
    };
};

int main()
{
    int msize =0; //matrix size
    cout << "Welcome to Matrix program by BANUKA. ID: 11917550";
    cout << "\nTASK: Create dynamic array, enter values and find second largest number in array\n\n";
    cout << "Enter Matrix size: ";
    cin >> msize;  //matrix size

    int matrix1[msize][msize]; // dyhnamic 2d array

    cout << "\nPLEASE ENTER VALUES FOR THE MATRIX: \n\n";

    for(int y=0; y<msize; y++)
    {
        for(int x=0; x<msize; x++)
        {
            cout << "Enter value for position: "<< y << ", " << x << ": ";
            cin >> matrix1[y][x];
        }
    }

    //display print matrix
    cout << "\nYOUR MATRIX IS: \n\n";
    for(int y=0; y<msize; y++)
    {
        for(int x=0; x<msize; x++)
        {
            cout << matrix1[y][x] << ", ";
        }
        cout << endl;
    }

    int max1 = 0; //largest number
    int max2 = 0; //second largest number

    // find largest & second largest (max1, max2)
    for(int y=0; y<msize; y++)
    {
        for(int x=0; x<msize; x++)
        {
            if (matrix1[y][x]>max1) //find largest number
            {
                max2 = max1; //pass previous largest number to secondLargest
                max1 = matrix1[y][x];
            }
            else if((matrix1[y][x]>max2)&&(matrix1[y][x]!=max1))
                // check if value from matrix is larger than 2nd largest no & not equal to largest
        {
            max2 = matrix1[y][x]; //change 2nd largest number to new value
            }
        }
    }

findsecondlargest largprog(max1,max2);
// initialize object of class
// which automatically create parametrized constructor to display values

    return 0;
}
