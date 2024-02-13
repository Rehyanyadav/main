// wap to display grade system  total marks secured by a student in a semester
#include <iostream>
using namespace std;
int main()
{
// here we initialize the variables of entering the score 
    int score;
    char grade;
    cout << "Enter the marks( 0-100) :";
    //taking input
    cin >> score;

//here we define the limit of scores 
    if (score <0 || score >100)
    {
        cout<<"invalid score";
        return 0;

    }
    //driver code
    switch (score/10)
    {
 
    case 10:
    case9:
    grade = 'A';
    break;
    case 8:
    grade ='B';
    break;
    case 7:
    grade ='C';
    break;
    case 6:
    grade ='D';
    case 5:
    break;
   default:
   grade = 'F';

    }
    cout<<"grade"<<grade<<endl;

    return 0;
}