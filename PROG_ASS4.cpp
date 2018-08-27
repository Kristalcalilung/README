#include <iostream>
using namespace std;

int main() {
    
    int a = 75, b = 1000, c = 60, d = 1;
    int e = 75000;
    
    float B = (a*b/d);
    float C = (e*d/c);
    
    
    cout << " \nProblem Solving " << endl;
    
    cout << " A car traveling 75 kilometers per hour . How many meters does the car travel in one minute " << endl;
    
    cout << "Answer in km/hr? : ";
    cin >> B;
    if (B != 75000){
    cout << " Answer is incorrect. " << endl;
}
    if (B == 75000){
    cout << " Answer is correct. " << endl;
}
    cout << " What is the Final answer in m/min?: ";
    cin >> C;
    if (C != 1250){
    cout << " Answer is incorrect." << endl;
}
    if (C == 1250){
    cout << " Answer is correct." << endl;
}
    
    return 0;

}