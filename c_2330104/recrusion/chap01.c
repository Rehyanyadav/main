#include<stdio.h>
int fun (int n){
    if ( n == 1){
        return 1;
    }
    else 
    return 1+fun(n-1);

}
int main(){   

     int x  = 3;
     printf("%d",fun(x));
     return 0;

}