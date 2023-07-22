#include <iostream>

using namespace std;

int main()
{
    bool runtask = 1; // Determining if the application is running

    do
    {
        cout << "Welcome to the GPA Calculator!" << endl;
        cout << "Please look at the options below" << endl;
        cout << "1. CGPA Calculator" << endl;
        cout << "2. SGPA Calculator" << endl;
        cout << "3. Quit Application" << endl;

        int option; // Users selection
        cout << "Select what best fits your needs > " << flush;
        cin >> option;

        if (cin.good()) // Validating input is 'good'
        {

            if (option == 1)
            {
                cout << endl; // Cleaner format in terminal
                int arraylength;

                cout << "CGPA Calculator Selected" << endl;                         // The calculator choosen
                cout << "Please enter how many courses you are taking > " << flush; // Entering amount of courses
                cin >> arraylength;                                                 // Input

                float grade_point[arraylength]; // Array && size - based on users amount of classes

                cout << endl; // Cleaner format in terminal
                cout << "Please enter the grade points acheived for each class" << endl;
                cout << "For example: 95" << endl;

                float total = 0;

                int i;
                for (i = 0; i < sizeof(grade_point) / sizeof(grade_point[0]); i++)
                {
                    cout << "Class " << i + 1 << " > " << flush;
                    cin >> grade_point[i];

                    if (cin.good())
                    {
                        total = total + grade_point[i];
                    }
                    else
                    {
                        // Quitting application
                        runtask = 0;
                        cout << "Invalid Input -- Quiting Application" << endl;
                        cout << endl;
                        exit(1);
                    }
                }

                if (runtask == 1)
                {
                    // Calculation of CGPA
                    cout << endl
                         << "Your CGPA is: " << total / arraylength << endl;

                    cout << endl; // For formatting
                }
            }
            else if (option == 2)
            {
                cout << "SGPA Calculator Selected" << endl;
            }
            else
            {
                runtask = 0;
            }
        }
        else
        {
            cout << "Invalid Input -- Quitting Application" << endl;
            cout << endl;
            exit(1);
        }

    } while (runtask == 1);
    {
        cout << "Quitting the application - enjoy your day!" << endl;
    }
}