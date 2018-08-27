#include <iostream>
using namespace std;
int main ()
{
	int a=9,b=7,c=17,d,e,f;
	d= a*b+c;
	e= b*(a+c);
	f= c*b+a;
	
	if (d>e){
		cout <<"NICE" <<endl;
	}
	else if (d==f){
		cout << "HELL YEAH" <<endl;
	}
	else if ((d>e) && (d==f))
	{
		cout <<"HELL NO" <<endl;
	}
	
	return 0;
	
}

