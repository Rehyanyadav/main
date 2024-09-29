//* pointers to Structures 

#include<stdio.h>

#include<stdlib.h>



struct student {

int roll;
float Cgpa;
char name[20];

};


int main(){
struct student s1 ={2330104, 9.3, "rehyan yadav"};

    struct student  *ptr = &s1;
    printf("student roll = %d \n", *ptr);

}
