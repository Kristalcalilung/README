#include <iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
int main()
{
int x, y;
char oper;
float ans;
    
cout <<"Enter first number: ";
cin >>x;
cout <<"Enter second number: ";
cin >>y;
cout <<"Enter operation: ";
cin >>oper;

if (oper== '+')ans= x+y;
else if (oper== '-')ans= x-y;
else if (oper== '*')ans= x*y;
else if (oper== '/')ans= x/y;
cout << "The answer is " << ans;

int a= ans;
bool ansisequal0 (int a);
{if (a== 0) 
{ printf ("\n\nTRUE");}
else { printf ("\n\nFALSE");} }
return 0;
}
