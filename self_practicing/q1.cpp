#include<iostream>
using namespace std;


/* 
a school has following rules for grading system 
a. below 25 -f
b. 25 to 44- e
c. 45 to 49- d
d. 50 to 59- c
e. 60 to 79- b
f. 80 to 100- A
ASk user for Enter the marks and print all the corresponding grades

*/
int main()
{

    int marks;     
    cout<<"enter marks";
    
    cin>>marks;

    if ( marks < 25){
        cout<<"f";
    }
    if(marks >= 25 && marks <= 44){
        cout<<"E";
    }

    if(marks >= 45 && marks <=49){
        cout<<"D";

    }

    if(marks >= 50 && marks <=59){
        cout<<"C";
    }
    if (marks >= 60 && marks <=79){
        cout<<"B";
    }
    if (marks >= 80 && marks <=100){
        cout<<"A";
    }
    return 0;
}


