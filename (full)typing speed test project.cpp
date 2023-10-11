
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
int duration, wrong=0, score;
string name;
char uname[30];
FILE *fp;

void heading();
    void mainMenu();
        void delay(unsigned int microseconds);
            void clearScreen();
                void extras();
                    void Speed_Test();
                        void calculation();

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
    string massage = "Welcome To Typing Speed Tester";
    cout << "\n\n\t\t\t\t\t\t";
    for (size_t i = 0; i < massage.length(); i++)
    {
        cout << massage[i];
        fflush(stdout);
        delay(50000);
    }
    cout << endl
         << endl
         << endl
         << endl;

    string nameMessage="Enter your name to continue : ";
    for(size_t i=0; i<nameMessage.length(); i++)
    {
            cout<<nameMessage[i];
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
    cout << "                                                          1. Test Speed" << endl;
    cout << "                                                          2. User Record\n";
    cout << "                                                          3. Help\n";
    cout << "                                                          4. Exit\n\n\n";

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
        char footer[]={"Press 0 For Go To Main Menu : "};

        fp=fopen("score.txt","r");
        printf("\n\nUser Name & Score\n\n");
        while(fgets(uname,50,fp)!= NULL){
            printf("\t%s",uname);
        }
        fclose(fp);

        printf("\n\n\t");
        for(int i=0; i<30; i++){
            printf("%c", footer[i]);
            for(int j=0; j<7099990; j++){
                j++;j--;
            }
        }
        scanf("%d", &c_choice);

        if(c_choice == 0)
            mainMenu();
    }
    else if (choice == 3)
    {
        int c_choice;
        string footer = "Press 0 To Go Main Menu : ";

        cout << "\n\n\t";
        for (size_t i = 0; i < footer.length(); i++)
        {
            cout << footer[i];
            fflush(stdout);
            delay(50000);
        }
        cin >> c_choice;

        if (c_choice == 0)
            mainMenu();
    }
    else if (choice == 4)
    {
        clearScreen();
        string lastm = "Thanks for visiting Typing Speed Tester";
        cout << "\n\n\n\n\n\n\t\t\t";
        for (size_t i = 0; i < lastm.length(); i++)
        {
            cout << lastm[i];
            fflush(stdout);
            delay(50000);
        }
        cout << "\n";

        string lastn = "Wait....";
        cout << "\n\n\t\t\t\t\t";
        for (int i = 0; i < 8; i++)
        {
            cout << lastn[i];
            fflush(stdout);
            delay(50000);
        }
        cout << "\n\n\n\n\n\n\n";
        extras();
        for (int i = 1; i < 1e9; i++)
        {
        }
        exit(0);
    }
}

void extras()
{
    cout << endl
         << endl;
    // cout << "                                             "
    //      << "All rights reserved by Team 'MagPie' 2023";
    // cout << endl
    //      << endl
    //      << endl;




             cout<<("\t\t\t\t\t\t#######################################################\n");
             cout<<("\t\t\t\t\t\t##                                                   ##\n");
             cout<<("\t\t\t\t\t\t##   All rights reserved by Team 'MagPie' 2023       ##\n");
             cout<<("\t\t\t\t\t\t##                                                   ##\n");
             cout<<("\t\t\t\t\t\t#######################################################\n");
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
    for(int i=0; i<3; i++){
        chk[i] = rand()%10;
        fflush(stdout);
        delay(50000);
    }

    clearScreen();
    
    time_t start, end;
    start = time(NULL);

    char line1[] = {"A B C D E F G H I J K L M N O P"};
    char line2[] = {"A b C d E f G h I j K l M n O p"};
    char line3[] = {"a b C d e F g h I j k L m n O p"};
    char line4[] = {"a b c D E F g h i J K L m n o P"};
    char line5[] = {"P o N m L k J i H g F e D c B a"};
    char line6[] = {"P O N m L k J I H g F E D c B a"};
    char line7[] = {"a B C d e g F h I j k l m P n O"};
    char line8[] = {"h i J K L m a B C d a e D c B F"};
    char line9[] = {"g h i d e h i J K L m L m n O p"};
    char line10[] = {"m L k J i H g h I j k F g h I j"};
    for(int i=0; i<3; i++){
        if(chk[i]==0){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line1);
        }
        else if(chk[i]==1){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line2);
        }
        else if(chk[i]==2){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line3);
        }
        else if(chk[i]==3){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line4);
        }
        else if(chk[i]==4){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line5);
        }
        else if(chk[i]==5){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line6);
        }
        else if(chk[i]==6){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line7);
        }
        else if(chk[i]==7){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line8);
        }
        else if(chk[i]==8){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line9);
        }
        else if(chk[i]==9){
            printf("\n\n");

            printf("\t\t\t");
            printf("%s", line10);
            fflush(stdout);
        }
    }

    // printf("\nType Here..\n\n");
    string TypeCommand="\nType Here..\n\n\n\n";
    for(size_t i=0; i<TypeCommand.length(); i++)
    {
            cout<<TypeCommand[i];
            fflush(stdout);
            delay(50000);
    }

    char testL1[32];
    char testL2[32];
    char testL3[32];

    if(chk[0]==0){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line1[i])
                wrong++;
        }
    }
    else if(chk[0]==1){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line2[i])
                wrong++;
        }
    }
    else if(chk[0]==2){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line3[i])
                wrong++;
        }
    }
    else if(chk[0]==3){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line4[i])
                wrong++;
        }
    }
    else if(chk[0]==4){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line5[i])
                wrong++;
        }
    }
    else if(chk[0]==5){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line6[i])
                wrong++;
        }
    }
    else if(chk[0]==6){
        fflush(stdin);
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line7[i])
                wrong++;
        }
    }
    else if(chk[0]==7){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line8[i])
                wrong++;
        }
    }
    else if(chk[0]==8){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line9[i])
                wrong++;
        }
    }
    else if(chk[0]==9){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL1[i]);
            if(testL1[i]!=line10[i])
                wrong++;
        }
    }

    if(chk[1]==0){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line1[i])
                wrong++;
        }
    }
    else if(chk[1]==1){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line2[i])
                wrong++;
        }
    }
    else if(chk[1]==2){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line3[i])
                wrong++;
        }
    }
    else if(chk[1]==3){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line4[i])
                wrong++;
        }
    }
    else if(chk[1]==4){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line5[i])
                wrong++;
        }
    }
    else if(chk[1]==5){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line6[i])
                wrong++;
        }
    }
    else if(chk[1]==6){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line7[i])
                wrong++;
        }
    }
    else if(chk[1]==7){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line8[i])
                wrong++;
        }
    }
    else if(chk[1]==8){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line9[i])
                wrong++;
        }
    }
    else if(chk[1]==9){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL2[i]);
            if(testL2[i]!=line10[i])
                wrong++;
        }
    }

    if(chk[2]==0){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line1[i])
                wrong++;
        }
    }
    else if(chk[2]==1){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line2[i])
                wrong++;
        }
    }
    else if(chk[2]==2){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line3[i])
                wrong++;
        }
    }
    else if(chk[2]==3){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line4[i])
                wrong++;
        }
    }
    else if(chk[2]==4){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line5[i])
                wrong++;
        }
    }
    else if(chk[2]==5){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line6[i])
                wrong++;
        }
    }
    else if(chk[2]==6){
        fflush(stdin);
        printf("\t\t\t");
        for(size_t i=0; i<sizeof(line1)-1; i++){
            scanf("%c", &testL3[i]);
            if(testL3[i]!=line7[i])
                

	
