// this question was asked in  ZS asscociates

#include <iostream>
using namespace std;
 
int main() {
    //Write your code here
    int total , basic , allow ;
    float hra , da , pf ;
    char grade ;
    cin >> basic >> grade ;
    hra = 0.2*basic ;
    da = 0.5*basic ;
    pf = 0.11*basic ;
    if(grade == 'A'){
        allow = 1700 ;
        total = (basic + hra + da + allow) - pf ;
    }
    else if(grade == 'B'){
        allow = 1500 ;
        total = (basic + hra + da + allow) - pf ;
    }
    else{
        allow = 1300 ;
        total =round( basic + hra + da + allow - pf) ;
    } 
    
    cout << total ;
    return 0;
}
 