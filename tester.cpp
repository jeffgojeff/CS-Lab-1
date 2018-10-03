#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   
    // This switch statement does the same thing as the above IF-ELSE IF code.

	char letter_grade;
        float GPA;

    cout << "input grade here: " << endl;
    cin >> letter_grade;


	switch (letter_grade)
	{
		case 'A':
			GPA = 4.0;
			break;	// break statements signal to leave the switch statement
		case 'B': 		
			GPA = 3.0;
			break;
		case 'C':
			GPA = 2.0;
			break;
		case 'D':
			GPA = 1.0;
			break;
		default:        // default is like an else statement
			cout << "invalid input" << endl;
			break;
	}

	cout << "Using Switch Statement : "
			<< setprecision(1) << fixed << GPA << endl;

	return 0;
}