#include<stdio.h>
#include<stdlib.h>

int main()
{
//Use of malloc
int *ptr;
ptr = (int *)malloc(10 *sizeof(int));
for (int i = 0; i < 3; i++){
printf("enter the value no %d of this array \n",i);

scanf("%d", &ptr[i]);

}

for (int i = 0; i < 4; i++){
printf("The value of  %d of this array  %d\n",i, ptr[i]);



}

    return 0;
}