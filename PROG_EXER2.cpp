//Problem # 24
#include <iostream>
using namespace std;
int main ()
{
	int ton= 2205;
	float amtRice;
	float bags;
	
	cout << "Enter the amount of rice in pounds: ";
	cin >> amtRice;
	
	bags= ton/ amtRice;
	
	cout << "You only need " << bags << "\n" << "Number of bags to store in one metric ton of rice.";
	
	
	return 0;
}
