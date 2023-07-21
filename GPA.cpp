#include <iostream>

using namespace std;

int main()
{
    bool runtask = 1;

    do
    {
        cout << "Welcome to the GPA Calculator!" << endl;
        cout << "Please look at the options below" << endl;
        cout << "1. CGPA Calculator" << endl;
        cout << "2. SGPA Calculator" << endl;
        cout << "3. Quit Application" << endl;

        int option;
        cout << "Select what best fits your needs > " << flush;
        cin >> option;

        if (option == 1)
        {
            cout << "CGPA Calculator Selected" << endl;
        }
        else if (option == 2)
        {
            cout << "SGPA Calculator Selected" << endl;
        }
        else
        {
            runtask = 0;
        }

    } while (runtask == 1);
    {
        cout << "Quitting the application - enjoy your day!" << endl;
    }
}