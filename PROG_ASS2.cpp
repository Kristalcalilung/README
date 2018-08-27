/*
AUTHOR: Kristal Laquindanum Calilung
DATE: July 27, 2018
NAME: Loading Machine
DESCRIPTION: This program provides cellular load.
ARGUMENTS:
RETURNS:
NOTES:
CHANGE HISTORY:
*/

#include <iostream>
using namespace std;
int main ()

{
char network;
string G_num, S_num;
int G_load, S_load;
int G_pay, S_pay;

//Title of the program
cout << "Loading Machine" <<endl;

//The network must be globe or smart only
cout << "SELECT NETWORK (G/S)" << endl;
cout << "G - Globe" << endl;
cout << "S - Smart" << endl;
cin >> network;

if (network == 'g' or network == 'G')
{
//Promt the user to give their mobile number
cout << "Enter your 11 digits mobile number: ";
cin >> G_num;

// Prompt the user to give the amount of load
cout << "Enter amount of load: ";
cin >> G_load;

//The payment must be exact corresponding to the amount of load
cout << "Insert your exact payment: " ;
cin >> G_pay;  

cout << "P " << G_load << " prepaid credits was loaded to your mobile number " << G_num;
}

else if (network == 's' or network == 'S')
{
//Prompt the user to give their mobile number
cout << "Enter your 11 digits mobile number: ";
cin >> S_num;

//Prompt the user to give the amount of loaad
cout << "Enter amount of load: ";
cin >> S_load;

//The payment must be exact corresponding to the amount of load
cout << "Insert your exact payment: " ;
cin >> S_pay;

cout << "P " << S_load << " prepaid credits was loaded to your mobile number " << S_num;
}

else
{
cout << "You entered an invalid option.";

}


return 0;
}
