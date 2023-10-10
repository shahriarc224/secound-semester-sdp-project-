#include <bits/stdc++.h>
using namespace std;

string name;

void heading();
void mainMenu();
void delay();
void extras();

int main()
{

    heading();

    mainMenu();
    extras();

    getchar();
    return 0;
}

void heading()
{
    system("cls");
    int i;
    string massage = "Welcome To Typing Speed Tester";

    cout << "\n\n\t\t\t\t\t\t";
    for (i = 0; i < massage.length(); i++)
    {
        cout << massage[i];
        delay();
    }

    cout << endl
         << endl
         << endl
         << endl;

    cout << "Enter your name to continue : ";

    cin >> name;
    cout << endl;
    cout << "Hi " << name << ","
         << " Welcome to Typing Speed Tester" << endl
         << endl;
}

void mainMenu()
{
    system("cls");

    int choice;

    string c_massage = "Enter Your Choice : ";

    cout << "                                                            "
         << " MenuList" << endl;
    cout << "                                                         ________________" << endl
         << endl;
    cout << "                                                          1. Test Speed" << endl;
    cout << "                                                          2. User Record\n";
    cout << "                                                          3. Help\n";
    cout << "                                                          4. Exit\n\n\n";

    for (int i = 0; i < c_massage.length(); i++)
    {
        cout << c_massage[i];
        delay();
    }

    fflush(stdin);
    cin >> choice;

    if (choice == 1)
    {
        // Handle choice 1
    }
    else if (choice == 2)
    {
        system("cls");
        string uname;
        int c_choice;
        string footer = "Press 0 To Go Main Menu : ";

        cout << "\n\n\t";
        for (int i = 0; i < footer.length(); i++)
        {
            cout << footer[i];
            delay();
        }
        cin >> c_choice;

        if (c_choice == 0)
            mainMenu();
    }
    else if (choice == 3)
    {
        int c_choice;
        string footer = "Press 0 To Go Main Menu : ";

        cout << "\n\n\t";
        for (int i = 0; i < footer.length(); i++)
        {
            cout << footer[i];
            delay();
        }
        cin >> c_choice;

        if (c_choice == 0)
            mainMenu();
    }
    else if (choice == 4)
    {
        system("cls");
        string lastm = "Thanks for visiting Typing Speed Tester";
        cout << "\n\n\n\n\n\n\t\t\t";
        for (int i = 0; i < lastm.length(); i++)
        {
            cout << lastm[i];
            delay();
        }
        cout << "\n";

        string lastn = "Wait....";
        cout << "\n\n\t\t\t\t\t";
        for (int i = 0; i < 8; i++)
        {
            cout << lastn[i];
            delay();
        }
        cout << "\n\n\n\n\n\n\n";
        for (int i = 1; i < 1e9; i++)
        {
        }
        exit(0);
    }
}

void extras()
{
    cout << endl
         << endl
         << endl
         << endl;
    cout << "                                             "
         << "All rights reserved by Team 'MagPie' 2023";
    cout << endl
         << endl
         << endl;
}
void delay()
{
    for (int i = 0; i < 10099990; i++)
    {
        i++;
        i--;
    }
}
