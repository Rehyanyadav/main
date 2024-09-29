//wap to check that enter char is vowel or consonant

#include<iostream>
using namespace std;
int main()
{

    char ch;
    cout<<"Enter the character: ";

    cin>>ch;

    cout<<"Enter the alphabet :";
   
    if (ch=='a'|| ch=='e'|| ch=='i'|| ch=='o'|| ch=='u'||ch=='A'|| ch=='E'|| ch=='I'|| ch=='O'|| ch=='U'){
        cout<<"enter alphabet is vowel";

    }
    else{
        cout<<"enter alphabet is consonant";

    }

    return 0;
}