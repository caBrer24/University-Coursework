#include <iostream>
void
swtch (int data[], int i)
{
    int tmp = data[i];
    data[i] = data[i+1];
    data[i+1] = tmp;
    return ;
}

int main ()
{
    using namespace std;
    int data[] = {8, 9 ,5, 7, 47, 926, 32, 64, 128, 3, 4, 6, 1, 20, 85};
    //int data[] = {8, 9 ,10, 11, 12, 13};
    char change = 'y';
    int compare = 0;
    while ( change == 'y') {
        change = 'n';

        for ( int i = 0 ; i < sizeof (data)/sizeof(int) ; i++ ) {
            compare ++ ;

            if ( data[i] > data[i+1] ) // > - Ascending < Descending
            {    
                swtch(data,i);
                change = 'y';
                // Deleted break; break makes the loop exit and restart "i" from 0
            }
        }
    }
    cout << "Number of comparisons after change: " << compare << endl;
    return 0;
}