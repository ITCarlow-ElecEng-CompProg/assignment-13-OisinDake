// Oisin Dake
//   Lab 13
//    Prime Number Calculations

// Preprocessor directives
#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

int main()
{
    long int checkPrime, x, z;

    // ofstream object called pNum created
	ofstream pNum( "pNum.txt", ios::out );

	if ( !pNum )
	{
		cerr << "File couldnt be opened!" << endl;
		exit( 1 );
	}

    cout << "Check if a Number is Prime\n\n" << endl;;
    pNum << "Check if a Number is Prime\n\n" << endl;;

    cout << "List of prime numbers :\t" << endl;
    cin >> checkPrime;

    // for  Loop to show every prime number between 2 and the number entered
    for(x=2; x<=checkPrime; x++)
    {
           //check for prime numberr
            for (z = 2; z <= x; z++)
                {
                    if (x % z == 0)
                    break;
                }

            if (z == x)
                {
                    cout << "\n" << x << " is a Prime number.\n" ;
                    pNum << "\n" << x << " is a Prime number.\n" ;
                }
    }


   	//close the ofstream
	pNum.close();

    return 0;
}
