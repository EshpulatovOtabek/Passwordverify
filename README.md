// Eshpo'latov Otabek 
// 8 April 2022

# Passwordverify
// This is done with C++ which checks wheather your entered password matches certain requirements.They are:

// At least 8 characters
// At least one uppercase
// At least one lowercase
// At least one number



-------------------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream>
#include <string.h>
#include <ctype.h>
using namespace std;

    int main ()
{
    bool hasupper=false;
    bool haslower=false;
    bool hasdigit=false;
    bool hasnumber=false;
    bool hasymbol=false;
    string password;
    
    cout << "Password: ";
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
    {
        cout << "Password accepted" << endl;
    }
    else
    {
        cout << "Password denied!" << endl;
    }


    return main();
}
                                          
                                          
                                          
                                          
                                          
                                          
// Sorry if i have made mistakes above but it worked properly. You can check it out right now.                                           
                                          
