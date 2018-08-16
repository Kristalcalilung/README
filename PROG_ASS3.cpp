/*
AUTHOR: Kristal Laquindanum Calilung
DATE: August 15, 2018
NAME: Factoring
DESCRIPTION: This program used to test the users knowledge in factoring binomials and trinomials.
*/
#include <iostream>
using namespace std;
int main ()
{ 
    
   //local Declare viariable
	char cat;
	string menu= "yes";
	
	//title of the program
	cout << " \t\t Simple Factoring \n\n\n ";
	
	while(menu=="yes"||menu=="Yes"||menu=="YES")
	{
		
	//user will choice a category
	cout << " \t Category \n";
	cout << " a. Easy \n b. Medium \n c. Hard \n\n Answer:";
	cin  >> cat;
        cout << " \n\n";
	
//Easy Category	
if (cat=='a')
	{
	  //local Declare viariable
	string A;
	string B;
	string C;
	int score=0;
	string again="yes";
	
	
	while(again=="yes"||again=="Yes"||again=="YES")
	{
		
	//problem number 1
	cout << " Easy \n \n Fill in the blank. Put the correct answer. \n\n ";
	cout << " 1.) Problem:(x^2-2x+1)=(_____)(x-1)? \n";
	cout << " Your answer is: ";
	cin  >> A;
			
			
		if (A=="x-1")
		{
			cout << "\n (x^2-2x+1)=( " << A  << " )(x-1) Correct !!! ";
			score++;
			cout << " \n\n\n";
		
		}
		else 
		{
			cout << "\n (x^2-2x+1)=( " << A  << " )(x-1) InCorrect !!! ";
			cout << " \n\n\n";
		}
		
	//problem number 2	
	cout << " 2.) Problem:(x^2-x-6)=(_____)(x-3)? \n";
	cout << " Your answer is: ";
	cin  >> B;
	
		if (B=="x+2")
		{
			cout <<"\n (x^2-x-6)=( " << B << " )(x-3) Correct !!! ";
			score++;
			cout << " \n\n\n";
		}
		else 
		{
			cout << "\n (x^2-x-6)=( " << B  << " )(x-3) InCorrect !!! ";
			cout << " \n\n\n";
		}
		
	//problem number 3
	cout << " 3.) Problem:(x^2+7x+10)=(_____)(x+2)? \n";
	cout << " Your answer is: ";
   cin  >> C;
	
		if (C=="x+5")
		{
			cout <<"\n (x^2+7x+10)=( " << C << " )(x+2) Correct !!! ";
			score++;
			cout << " \n\n\n";
		}
		else 
		{
			cout << "\n (x^2+7x+10)=( " << C  << " )(x+2) InCorrect !!! ";
			cout << " \n\n\n";
		}
	
	//indicate your score	
	cout << " Your score:" << score ;
	
	//loop to try it again
	cout << "\n\n Do you want to try it again? (yes/no):";
  cin  >> again;
	cout << " \n\n\n";
	}
	
	//loop to go back to the category
	cout << "\n Do you want to go back to the menu?(yes/no):";
	cin  >> menu;
	cout << " \n\n\n";
}

//Meduim Category
else if(cat=='b')
{
	//Local varianle declaration
	string MED;
	string D;
	string E;	
	string ag="yes";
	int score=0;
	
	//problem number 1
 while(ag=="yes"||ag=="Yes"||ag=="YES")
	{
	cout << " Medium \n Fill in the blank. Put the correct answer \n\n ";
	cout << " 1.) Problem:(x^2-4)=(_____)(_____)? \n";
	cout << " Your answer is: ";
	cin  >> MED;
	
		if (MED=="(x-2)(x+2)"||MED=="(x+2)(x-2)")
		{
			cout << "\n (x^2-4)= " << MED  << "  Correct !!! ";
			score++;
			cout << " \n\n\n";
		}
		else 
		{
			cout << "\n (x^2-4)= " << MED << "  InCorrect !!! ";
			cout << " \n\n\n";
  }
		
	//problem number 2
	cout << " 2.) Problem:(x^2-625)=(_____)(_____)? \n";
	cout << " Your answer is: ";
	cin  >> D;
	
		if (D=="(x-25)(x+25)"||D=="(x+25)(x-25)")
		{
			cout <<"\n (x^2-625)= " << D << "  Correct !!! ";
			score++;
			cout << " \n\n\n";
		}
		else 
		{
			cout << "\n (x^2-625)= " << D  << " InCorrect !!! ";
			cout << " \n\n\n";
		}
  //problem number 3
	cout << " 3.) Problem:(x^2-256)=(_____)(_____)? \n";
	cout << " Your answer is: ";
	cin >> E;
	
		if (E=="(x-16)(x+16)"||E=="(x+16)(x-16)")
		{
			cout <<"\n (x^2-256)= " << E << "  Correct !!! ";
			score++;
			cout << " \n\n\n";
		}
		else 
		{
			cout << "\n (x^2-256)= " << E << " InCorrect !!! ";
			cout << " \n\n\n";
		}
	
	//indicate the score
 cout << " Your score:" << score ;
	
	//loop to try it again 
	cout << "\n\n Do you want to try it again? (yes/no):";
	cin  >> ag;
	cout << " \n\n\n";
	}
	
	//loop to go back to the category
	cout << "\n Do you want to go back to the menu?(yes/no):";
    cin  >> menu;
	cout << " \n\n\n";
}


//Hard Category
else if (cat=='c') 
{
	
	//local viariable declaration
	string Hard;
 string x,y;
	int score=0;
	string aga="yes";
	
	//problem 1
	while(aga=="yes"||aga=="Yes"||aga=="YES"){
	cout << " Hard \n Fill in the blank. Put the correct answer \n\n ";
	cout << " (x^3-8)=(_____)(________)\n";
	cout << " Your answer is: ";
	cin  >> Hard;
	
 		if(Hard =="(x-2)(x^2+4x+8)"||Hard =="(x^2+4x+8)(x-2)")
		{
			cout <<"\n (x^3-8)= " << Hard << "  Correct !!! ";
			score++;
			cout << " \n\n\n";
		}
		else
  {
			cout << "\n (x^3-8)= " << Hard << " InCorrect !!! ";
			cout << " \n\n\n";
		}
		
	//indicate the score
	cout << " Your score:" << score ;
	
	cout << "\n\n Do you want to try it again? (yes/no):";
	cin  >> aga;
	cout << " \n\n\n";
	}
	cout << "\n Do you want to go back to the menu?(yes/no):";
	cin  >> menu;
	cout << " \n\n\n";
	}
	else
	{	
	cout << " Invalid!!!";
  cout << "\n Do you want to go back to the menu?(yes/no):";
     cin >> menu;
	cout << " \n\n\n";
	}	
}

	return 0;
}
