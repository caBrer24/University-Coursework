/*******************************************************
 * Program Name: Corrected Bubble Sort Implementation
 * Author: Carlos Cabrera
 * Date: 02/26/2026
 * Course: COSC-1436 Programming Fundamentals II

*******************************************************/

#include <iostream>
using namespace std;

// Function to swap two elements in the array
void swtch (int i, int data[] )
{
    int tmp = data[i];
    data[i] = data[i+1];
    data[i+1] = tmp;
return ;

}

// Main function to perform bubble sort
int main () {

    // Array to be sorted
    int data[] = { 5, 23, 76, 1, -1, 32, 9} ;

    // Variable to count comparisons
    int compare = 0;

    // Control variable for while loop to determine if another pass is needed
    char change = 'y';

    // Calculate size of the array
    int size = sizeof(data) / sizeof(int);

    // Bubble sort algorithm
    while ( change == 'y') 
    {
    change = 'n';

        // Loop through the array. -1 so it does not go out of bounds
        for ( int i = 0 ; i < size - 1; i++ )
        {
            compare ++ ;
            if ( data[i] > data[i+1] ) // >  Ascending < Descending
            {
                swtch( i, data ) ;
                change = 'y';
        
            }
        }
    }
    // Output the sorted array for visual satisfaction
    cout << "Sorted array: ";
    for (int i = 0; i < size; i++) {
        cout << data[i] << " ";
    }

    return 0;
}