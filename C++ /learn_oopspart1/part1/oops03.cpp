
/*

HERE WE SET VALUES OF THE PROPERTIES
OF CLASS
*/

#include <iostream>

using namespace std;
//* class STUDENTS WITH THEIR PROPERTIES 
class students
{
public:
    int name;
    int age;
};


//*  this file creating objects
int main()
{
    //* creating objects statically

    students s1;
    students s2;
    s1.age = 20;
    s1.name = 101;
    cout << s1.age<<endl;
    cout << s1.name<<endl;

    //* creating objects dynamically

    students *S6 = new students;
    (*S6).age = 10;
    (*S6).name = 101;
    // shortcut of the adding properties

    // s1->age = 20;
    // s2->name = 101;

    return 0;
}
