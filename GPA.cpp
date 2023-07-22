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
        if (cin.good())
        {

            if (option == 1)
            {
                cout << endl; // Cleaner format in terminal
                int arraylength;

                cout << "CGPA Calculator Selected" << endl;                         // The calculator choosen
                cout << "Please enter how many courses you are taking > " << flush; // Entering amount of courses
                cin >> arraylength;                                                 // Input

                if (cin.good())
                {

                    float grade_point[arraylength]; // Array && size - based on users amount of classes

                    cout << endl; // Cleaner format in terminal
                    cout << "Please enter the grade points acheived for each class" << endl;
                    cout << "For example: 9.5" << endl;

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
                        cout << "This equated to " << (total / arraylength) * 9.5 << "%" << endl;
                        cout << endl;
                    }
                }
            }
            else if (option == 2)
            {
                cout << endl;
                // Expliantion of the process of SGPA calculation
                cout << "SGPA Calculator Selected" << endl;
                cout << "You are fist going to enter the credits of the classes" << endl;
                cout << "Then you are going to enter the grade received" << endl;
                cout << "For example:" << endl;
                cout << "Credits > 5" << endl;
                cout << "Grade > 9.2" << endl;

                cout << endl; // Formatting

                cout << "Lets begin!" << endl;

                cout << endl;

                int classtotal;

                cout << "How many classes? > " << flush;

                cin >> classtotal;

                int i;

                float credittotal = 0; // Will need this for final calculation
                float gradecredittotal = 0;

                for (i = 0; i < classtotal; i++)
                {

                    int credits;
                    float grade;

                    cout << "How many credits was class " << i + 1 << " > " << flush;
                    cin >> credits;

                    cout << "What was the grade recieved? > " << flush;
                    cin >> grade;

                    credittotal = credittotal + credits;

                    gradecredittotal = gradecredittotal + (grade * credits);
                }

                cout << endl;
                cout << "Your SGPA is: " << gradecredittotal / credittotal << endl;
                cout << endl;
                cout << "This eqautes to " << ((gradecredittotal / credittotal) - .75) * 10 << "%" << endl;
                cout << endl;
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