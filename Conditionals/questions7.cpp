// wap to show the grade system using if else
#include <iostream>
using namespace std;
int main()
{

    int score;
    cout << "Enter the score (0-100) : ";
    cin >> score;
    if (score > 100 || score < 0)
    {
        cout << "invalid score";
    }
    else if (score < 100 && score > 90)
    {

        cout<<"A grade";

    }
    else if (score <90  && score >80){
        cout<<"B grade";

    }
     else if (score <80 && score > 70){
        cout<<"C grade ";

     }
     else if (score <70 && score >60){
        cout<<" D grade";

     }
    else {
        cout<<" fail";
    }
    return 0;
}