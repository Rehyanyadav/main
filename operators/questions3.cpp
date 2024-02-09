#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    // wap to find the  centigrate for a given farenheit temperature
    float celsius;
    float farenheit;
    cout << "enter the temperature :";
    cin >> farenheit;
    celsius = (farenheit - 32) * 0.55;
     
    cout << celsius;
    return 0;
}