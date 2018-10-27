#include <iostream>

using namespace std;
string time(int x);
int main() {
int all[5];
//all[0]= energy
all[1]=4;
all[0]=37;
all[2]=00;
int i=1;
char doing[37] [100];
while (true) {
if (all[2]==60) {
all[2]=00;
all[1]=all[1]+1;
} 
cout<<"by " <<all[1]<<":"<<time(all[2])<<endl;
cout<<"I am (enter):";
cin.getline(doing[i],100);
all[0]= all[0]-1;
all[2]=all[2]+30;
i++;

cout<<"22:30 , sleeping "<<endl;
break;
}
}
return 0;
}

string time(int x) {
if (x==0) {
return "00";
}
else {
return "30";
}
}
