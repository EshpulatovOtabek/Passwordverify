#include <iostream>
#include <string.h>
#include <ctype.h>
#include <windows.h>
using namespace std;

int main ()
{
    bool hasupper=false;
    bool haslower=false;
    bool hasdigit=false;
    bool hasnumber=false;
    bool hasymbol=false;
    string password;
    system("cls");
    cout << "\t\t\t\t\t\tTo create a new password ";

    cout << endl;
    cout << "\t\t\t\t\t\t   You have to include: " << endl;
    Sleep(2000);
    cout << endl;
    cout << "\t\t\t\t\t\tAt least 8 characters " << endl;
    Sleep(2000);
    cout << "\t\t\t\t\t\tAt least one uppercase " << endl;
    Sleep(2000);
    cout << "\t\t\t\t\t\tAt least one lowercase " << endl;
    Sleep(2000);
    cout << "\t\t\t\t\t\tAt least one number " << endl;
    Sleep(2000);
    cout << "\t\t\t\t\t\tThere should not be space between characters! " << endl;
    Sleep(2000);
    cout << endl;
    cout << "\t\t\t\t\t\tEnter your password:";
    cin >> password;
    int num=password.size();

    int count=0;

    if(num>=8)
    {
        hasnumber=true;
    }

    for (int i=0; i<password.size(); i++)
    {

        if (isupper(password[i]))
        {
            hasupper=true;
        }
        if (isdigit(password[i]))
        {
            hasdigit=true;
        }
        if (islower(password[i]))
        {
            haslower=true;
        }
    }

    if (hasupper==true && haslower==true && hasdigit==true && hasnumber==true)
    {   system("cls");
        cout << endl;
        cout << "\t\t\t\t\t\t\tYour password accepted." << endl;
        Sleep(3000);
    }
    else
    {   system("cls");
        cout << endl;
        cout << "\t\t\t\t\t\tPassword denied!" << endl;
        cout << "\t\t\t\t\t\tCheck requirements again! " << endl;
        Sleep(5000);

    return main();
    }


    return 0;
}
