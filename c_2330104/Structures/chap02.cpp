#include<stdio.h>

#include<string.h>


struct student {

int roll;
float Cgpa;
char name[20];

};



int main(){


struct student s1 = {2330104, 9.2, "rehyan yadav"};
printf("student roll= %d", s1.roll);



//     struct student ECE[100];
//     ECE[0].roll =2330104;
//     ECE[0].Cgpa = 9.5;
//     strcpy(ECE[0].name,"Rahul");
//     printf("name  = %s\n",ECE[0].name);
//    struct student COE[100];
//    struct student IT[100];



}