#include<stdio.h>
int fibo(int x);
int main()
{
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    for(int i=0;i<num;i++)
    {
        printf("%d,",fibo(i));
    }
    return 0;
}
int fibo(int x)
{
    if(x==0)
        return 0;
    else if(x==1)
        return 1;
    else
        return fibo(x-1)+fibo(x-2);
}