/*
|-----------------------------------------------------------------------------------------|
| Project Name: Typing Speed Tester by MagPie                                             |
|-----------------------------------------------------------------------------------------|
| Author:                                | PROJECT SUBMISSION DATE  : 27.09.2023          |
|                                        | PROJECT ASSIGNED BY      :                     |
| Abdur Rahman Sifat.                    | Humayra Ahmed                                  |
| Sajidul Islam Samin.                   | Assistant Professor                            |
| Mahamudul Hasan.                       | Department of Computer Science and Engineering |
| Shahriar Chowdhury.                    | Bangladesh University of Business & Technology |
| Mehedi Al Mahmud.                      | (BUBT)                                         |
|                                        |                                                |
|                                        |                                                |
|-----------------------------------------------------------------------------------------|
| project description: This project is a typing speed tester.                             |
| It will take a paragraph as input and then it will show the typing speed of the user.   |
| It will also show the accuracy of the user.                                             |
|-----------------------------------------------------------------------------------------|

*/

#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
int duration, wrong = 0, score;
string name;
char uname[30];
FILE *fp;

    const string textColorRed = "\x1B[31m";
    const string textColorGreen = "\x1B[32m";
    const string textColorReset = "\x1B[0m";
    const string backgroundColorYellow = "\x1B[43m";
    const string textColorBlue = "\x1B[34m";
    const string textColorPurple = "\x1B[35m";

void heading();
    void mainMenu();
        void delay(unsigned int microseconds);
            void clearScreen();
                void extras();
                    void Speed_Test();
                        void calculation();
                            void helpSection();

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
    clearScreen();
    string massage = "💻 💻 💻 Welcome To Typing Speed Tester 💻 💻 💻";
    cout << "\n\n\t\t\t\t\t\t";
    cout<<textColorGreen;
    printf("\x1B[1m");
    printf("\x1B[4m");
    for (size_t i = 0; i < massage.length(); i++)
    {
        cout << massage[i];
        fflush(stdout);
        delay(50000);
    }
    printf("\x1B[0m");
    printf("\x1B[0m");
    cout<<textColorReset;
    cout << endl
         << endl
         << endl
         << endl;

    string nameMessage = "Enter your name to continue : ";
    for (size_t i = 0; i < nameMessage.length(); i++)
    {
        cout << nameMessage[i];
        fflush(stdout);
        delay(50000);
    }

    cin >> uname;
    cout << endl;
    cout << "Hi " << uname << ","
         << " Welcome to Typing Speed Tester" << endl
         << endl;
}
void mainMenu()
{
    clearScreen();

    int choice;

    string c_massage = "Enter Your Choice : ";
    cout << "                                                            "
         << " MenuList" << endl;
    cout << "                                                         ________________" << endl
         << endl;
         cout<<textColorGreen;
    cout << "                                                          1. Test Speed" << endl;
    cout<<textColorBlue;
    cout << "                                                          2. User Record\n";
    cout<<textColorGreen;
    cout << "                                                          3. Help\n";
    cout<<textColorRed;
    cout << "                                                          4. Exit\n\n\n";
    cout<<textColorReset;
    for (size_t i = 0; i < c_massage.length(); i++)
    {
        cout << c_massage[i];
        fflush(stdout);
        delay(50000);
    }

    fflush(stdin);
    cin >> choice;

    if (choice == 1)
    {
        extras();
        fflush(stdout);
        delay(300000);
        Speed_Test();
    }
    else if (choice == 2)
    {
        clearScreen();
        char uname[50];
        int c_choice;
        char footer[] = {"Press 0 For Go To Main Menu : "};

        fp = fopen("score.txt", "r");
        printf("\n\nUser Name & Score\n\n");
        while (fgets(uname, 50, fp) != NULL)
        {
            cout<<textColorPurple;
            printf("\t%s", uname);
        }
        cout<<textColorReset;
        fclose(fp);

        printf("\n\n\t");
        for (int i = 0; i < 30; i++)
        {
            cout<<textColorPurple;
            printf("%c", footer[i]);
            fflush(stdout);
            delay(20000);
        }
        cout<<textColorReset;
        scanf("%d", &c_choice);

        if (c_choice == 0)
            mainMenu();
    }
    else if (choice == 3)
    {
        int c_choice;
        helpSection();
        cin >> c_choice;

        if (c_choice == 0)
            mainMenu();
    }
    else if (choice == 4)
    {
        clearScreen();
        string lastm = "\t\t\t\tThanks for visiting Typing Speed Tester 💜💜💜";
        cout << "\n\n\n\n\n\n\t\t\t";
        for (size_t i = 0; i < lastm.length(); i++)
        {
            cout << lastm[i];
            fflush(stdout);
            delay(50000);
        }
        cout << "\n";

        string lastn = "\t\t\t....Wait....";
        cout << "\n\n\t\t\t\t\t";
        for (size_t i = 0; i < lastn.length(); i++)
        {
            cout << lastn[i];
            fflush(stdout);
            delay(50000);
        }
        cout << "\n\n\n\n\n\n\n";
        extras();
        for (size_t i = 1; i < 1e9; i++)
        {
        }
        exit(0);
    }
}

void extras()
{
    cout << endl
         << endl;
    cout << textColorRed;
    cout << ("\t\t\t\t\t\t#######################################################\n");
    cout << ("\t\t\t\t\t\t##                                                   ##\n");
    cout << textColorGreen;
    cout << ("\t\t\t\t\t\t##   All rights reserved by Team 'MagPie' 2023       ##\n");
    cout << textColorRed;
    cout << ("\t\t\t\t\t\t##                                                   ##\n");
    cout << ("\t\t\t\t\t\t#######################################################\n");
    cout << textColorReset;
    cout << endl
         << endl
         << endl;
    fflush(stdout);
    delay(1000000);
}

void Speed_Test()
{
    int chk[10];
    srand(time(0));
    for (int i = 0; i < 3; i++)
    {
        chk[i] = rand() % 10;
        fflush(stdout);
        delay(50000);
    }

    clearScreen();

    time_t start, end;
    start = time(NULL);
    char line1[] = {"The quick brown fox jumps over the lazy dog."};
    char line2[] = {"The quick brown fox jumps over the lazy dog."};
    char line3[] = {"tHe qUiCk bRoWn fOx jUmPs oVeR tHe lAzY dOg."};
    char line4[] = {"tHE QUICK BROWN FOX JUMPS OVER THE LAZY DOG."};
    char line5[] = {"THe qUIck BroWN fOX jUMps oVeR thE lAzY dOG."};
    char line6[] = {"tHE QUICK BROWN FOX JUMPS OVER THE LAZY DOG."};
    char line7[] = {"the Quick Brown Fox Jumps Over The Lazy Dog."};
    char line8[] = {"tHe qUiCk bRoWn fOx jUmPs oVeR tHe lAzY dOg."};
    char line9[] = {"tHe qUiCk bRoWn fOx jUmPs oVeR tHe lAzY dOg."};
    char line10[] = {"tHe qUiCk bRoWn fOx jUmPs oVeR tHe lAzY dOg."};
    for (int i = 0; i < 3; i++)
    {
        if (chk[i] == 0)
        {
            printf("\n\n");

            printf("\t\t\t");
            cout<<textColorGreen;
            printf("%s", line1);
        }
        else if (chk[i] == 1)
        {
            printf("\n\n");

            printf("\t\t\t");
            cout<<textColorGreen;
            printf("%s", line2);
        }
        else if (chk[i] == 2)
        {
            printf("\n\n");

            printf("\t\t\t");
            cout<<textColorGreen;
            printf("%s", line3);
        }
        else if (chk[i] == 3)
        {
            printf("\n\n");

            printf("\t\t\t");
            cout<<textColorGreen;
            printf("%s", line4);
        }
        else if (chk[i] == 4)
        {
            printf("\n\n");

            printf("\t\t\t");
            cout<<textColorGreen;
            printf("%s", line5);
        }
        else if (chk[i] == 5)
        {
            printf("\n\n");

            printf("\t\t\t");
            cout<<textColorGreen;
            printf("%s", line6);
        }
        else if (chk[i] == 6)
        {
            printf("\n\n");

            printf("\t\t\t");
            cout<<textColorGreen;
            printf("%s", line7);
        }
        else if (chk[i] == 7)
        {
            printf("\n\n");

            printf("\t\t\t");
            cout<<textColorGreen;
            printf("%s", line8);
        }
        else if (chk[i] == 8)
        {
            printf("\n\n");

            printf("\t\t\t");
            cout<<textColorGreen;
            printf("%s", line9);
        }
        else if (chk[i] == 9)
        {
            printf("\n\n");

            printf("\t\t\t");
            cout<<textColorGreen;
            printf("%s", line10);
            fflush(stdout);
        }
    }
    cout<<textColorReset;

    // printf("\nType Here..\n\n");
    cout<<textColorRed;
    string TypeCommand = "\nType Here..\n\n\n\n";
    for (size_t i = 0; i < TypeCommand.length(); i++)
    {
        cout << TypeCommand[i];
        fflush(stdout);
        delay(50000);
    }
    cout<<textColorReset;

    char testL1[32];
    char testL2[32];
    char testL3[32];
    // cout<<backgroundColorYellow;
    cout<<textColorPurple;
    if (chk[0] == 0)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL1[i]);
            if (testL1[i] != line1[i])
                wrong++;
        }
    }
    else if (chk[0] == 1)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL1[i]);
            if (testL1[i] != line2[i])
                wrong++;
        }
    }
    else if (chk[0] == 2)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL1[i]);
            if (testL1[i] != line3[i])
                wrong++;
        }
    }
    else if (chk[0] == 3)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL1[i]);
            if (testL1[i] != line4[i])
                wrong++;
        }
    }
    else if (chk[0] == 4)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL1[i]);
            if (testL1[i] != line5[i])
                wrong++;
        }
    }
    else if (chk[0] == 5)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL1[i]);
            if (testL1[i] != line6[i])
                wrong++;
        }
    }
    else if (chk[0] == 6)
    {
        fflush(stdin);
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL1[i]);
            if (testL1[i] != line7[i])
                wrong++;
        }
    }
    else if (chk[0] == 7)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL1[i]);
            if (testL1[i] != line8[i])
                wrong++;
        }
    }
    else if (chk[0] == 8)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL1[i]);
            if (testL1[i] != line9[i])
                wrong++;
        }
    }
    else if (chk[0] == 9)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL1[i]);
            if (testL1[i] != line10[i])
                wrong++;
        }
    }

    if (chk[1] == 0)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL2[i]);
            if (testL2[i] != line1[i])
                wrong++;
        }
    }
    else if (chk[1] == 1)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL2[i]);
            if (testL2[i] != line2[i])
                wrong++;
        }
    }
    else if (chk[1] == 2)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL2[i]);
            if (testL2[i] != line3[i])
                wrong++;
        }
    }
    else if (chk[1] == 3)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL2[i]);
            if (testL2[i] != line4[i])
                wrong++;
        }
    }
    else if (chk[1] == 4)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL2[i]);
            if (testL2[i] != line5[i])
                wrong++;
        }
    }
    else if (chk[1] == 5)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL2[i]);
            if (testL2[i] != line6[i])
                wrong++;
        }
    }
    else if (chk[1] == 6)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL2[i]);
            if (testL2[i] != line7[i])
                wrong++;
        }
    }
    else if (chk[1] == 7)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL2[i]);
            if (testL2[i] != line8[i])
                wrong++;
        }
    }
    else if (chk[1] == 8)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL2[i]);
            if (testL2[i] != line9[i])
                wrong++;
        }
    }
    else if (chk[1] == 9)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL2[i]);
            if (testL2[i] != line10[i])
                wrong++;
        }
    }

    if (chk[2] == 0)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL3[i]);
            if (testL3[i] != line1[i])
                wrong++;
        }
    }
    else if (chk[2] == 1)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL3[i]);
            if (testL3[i] != line2[i])
                wrong++;
        }
    }
    else if (chk[2] == 2)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL3[i]);
            if (testL3[i] != line3[i])
                wrong++;
        }
    }
    else if (chk[2] == 3)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL3[i]);
            if (testL3[i] != line4[i])
                wrong++;
        }
    }
    else if (chk[2] == 4)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL3[i]);
            if (testL3[i] != line5[i])
                wrong++;
        }
    }
    else if (chk[2] == 5)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL3[i]);
            if (testL3[i] != line6[i])
                wrong++;
        }
    }
    else if (chk[2] == 6)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL3[i]);
            if (testL3[i] != line7[i])
                wrong++;
        }
    }
    else if (chk[2] == 7)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL3[i]);
            if (testL3[i] != line8[i])
                wrong++;
        }
    }
    else if (chk[2] == 8)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL3[i]);
            if (testL3[i] != line9[i])
                wrong++;
        }
    }
    else if (chk[2] == 9)
    {
        fflush(stdin);
        printf("\t\t\t");
        for (size_t i = 0; i < sizeof(line1) - 1; i++)
        {
            scanf("%c", &testL3[i]);
            if (testL3[i] != line10[i])
                wrong++;
        }
    }

    cout<<textColorReset;
    end = time(NULL);
    duration = difftime(end, start);

    calculation();
}

void calculation()
{
    int total_words_in_lines = 10 * 16;
    int total_letters_in_lines = 48 * 10; // 48 letters in each line, 10 lines in total
    int average_letters_per_word = total_letters_in_lines / total_words_in_lines;
    double percent, right;
    int LPM, a_choice;
    char s_ch = '%';

    right = 48 - wrong;
    percent = (100.0 * right) / 48;

    if (100 >= percent && percent >= 90)
        score = 100;
    else if (90 > percent && percent >= 80)
        score = 90;
    else if (80 > percent && percent >= 70)
        score = 80;
    else if (70 > percent && percent >= 60)
        score = 70;
    else if (60 > percent && percent >= 50)
        score = 60;
    else if (50 > percent && percent >= 40)
        score = 50;
    else if (40 > percent && percent >= 30)
        score = 40;
    else if (30 > percent && percent >= 20)
        score = 30;
    else if (20 > percent && percent >= 10)
        score = 20;
    else if (10 > percent && percent >= 1)
        score = 10;
    else
        score = 0;

    LPM = (48 * 60) / duration;
    double WPM = LPM / average_letters_per_word;

    // printing users result...
    //  system("cls");
    clearScreen();
    char s_massage[] = {"Mr. "};
    char r_massage[] = {" Here is your Result: "};

    printf("\n\n\t\t");
    cout<<"🥳 🥳 ";
    for (int i = 0; i < 4; i++)
    {
        cout<<textColorBlue;
        printf("%c", s_massage[i]);
        fflush(stdout);
        delay(100000);
    }
    cout<<textColorReset;
    printf("\x1B[1m");
    for (size_t i = 0; i < strlen(uname); i++)
    {
        cout<<textColorGreen;
        printf("%c", uname[i]);
        fflush(stdout);
        delay(100000);
    }
    printf("\x1B[0m");
    cout<<textColorReset;
    for (int i = 0; i < 22; i++)
    {
        cout<<textColorBlue;
        printf("%c", r_massage[i]);
        fflush(stdout);
        delay(100000);
    }
    cout<<"🥳 🥳 ";
    cout<<textColorReset;
    cout<<textColorGreen;
    // printf("\n\n\tPercentage Of Right is  : %.2lf%c", percent, s_ch);
    // printf("\n\tLetter Per Minute is    : %d", LPM);
    // printf("\n\tTotal Score of Yours is : %d\n", score);
     printf("\n\tWord Per Minute is      : %.2lf", WPM);
    printf("\n\n\tPercentage Of Right is  : %.2lf%c", percent, s_ch);
    printf("\n\tTotal Score of Yours is : %d\n", score);
    cout<<textColorReset;
    fp = fopen("score.txt", "a");
    fprintf(fp, "Name: %s\tLetter Per Minutes: %d\tScore: %d\n", uname, LPM, score);
    fclose(fp);

    char footer[] = {"If Test Again Press 1If go to Main Menu Press 2Enter Your Choice :"};
    printf("\n\n\t");
    cout<<textColorGreen;
    for (int i = 0; i < 21; i++)
    {
        printf("%c", footer[i]);
        fflush(stdout);
        delay(20000);
    }
    printf("\n\t");
    cout<<textColorReset;
    cout<<textColorRed;
    for (int i = 21; i < 47; i++)
    {
        printf("%c", footer[i]);
        fflush(stdout);
        delay(20000);
    }
    printf("\n\n\t");
    cout<<textColorReset;
    cout<<textColorPurple;
    for (int i = 47; i < 66; i++)
    {
        printf("%c", footer[i]);
        fflush(stdout);
        delay(20000);
    }
    cout<<textColorReset;
    cout<<textColorPurple;
    scanf("%d", &a_choice);
    if (a_choice == 1)
    {
        wrong = 0;
        Speed_Test();
    }

    else if (a_choice == 2)
        mainMenu();
        cout<<textColorReset;
}
void delay(unsigned int microseconds)
{
    usleep(microseconds);
}
void clearScreen()
{
    printf("\033[H\033[J");
}
void helpSection()
{
    int c_choice;
    char footer[] = {"Press 0 For Go To Main Menu : "};
    string HelpMessage = "\n\n * If you want to test your speed test, this is the best place for you.\n\n * If you want to test at first you need to to Input the value of 1, 1 is the function which takes you to the test page \n\n   where you can type some letter and test your LPM(Letter Per Minutes),  and accuracy as well as score \n\n * If you want more information you can contact us: \n\n\n \t\t\t\tMobile: 01521788920,\n\n\t\t\t\t\tEmail:  \n\n\t\t\t\tSifat: mdabdurrahmansifat@gmail.com\n\n\t\t\t\tSajid: sajkhan0098@gmail.com\n\n\t\t\t\tMithun: mhmmithun1@gmail.com\n\n\t\t\t\tShahriar: shahriarc224@gmail.com\n\n\t\t\t\tMehedi: mahdialmahmud248@gmail.com";

    for (size_t i = 0; i < HelpMessage.length(); i++)
    {
        cout<<textColorGreen;
        cout << HelpMessage[i];
        fflush(stdout);
        delay(20000);
    }
    cout<<textColorReset;
    printf("\n\n\t");
        for (int i = 0; i < 30; i++)
        {
            cout<<textColorPurple;
            printf("%c", footer[i]);
            fflush(stdout);
            delay(20000);
        }
        cout<<textColorReset;
        scanf("%d", &c_choice);

        if (c_choice == 0)
            mainMenu();


}

CompleteProject.cpp
Displaying CompleteProject.cpp.
