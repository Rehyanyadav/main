#include <iostream>
using namespace std;
int main()
{
// &x it shows the address of x 
// *p it store the adress of x 
    int x = 3;
    // to store the pointer we can do this
    int* p = &x;
    cout << &x << endl;
    cout << p << endl;
    cout<<x<<endl;
    cout<< *p <<endl;
   

//same same but different 


//pointers access the value of the variables whose 
//address is in the pointer using derefrence /operator 

    return 0;
}
