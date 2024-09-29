/*


Syntax of creating structures

struct structure_name
{
    data_type member1;
    data_type member2;
    .
    .
    .
    data_type memberN;
};


To access the members of a structure,
 we use the member access operator (.) 
 which is also known as the dot operator.



    struct structure_name variable_name;

*/



#include<stdio.h>
#include<string.h>



//user defined data type 
struct student {
int roll;
float Cgpa;
char name[20];

};

int  main(){

struct student s1;

s1.roll = 1;
s1.Cgpa = 9.5;
strcpy(s1.name, "John");

printf("student name = %s",s1.name);
printf("\nstudent roll = %d",s1.roll);
printf("\nstudent Cgpa = %f",s1.Cgpa);  





struct  student s2;

s2.roll = 2;
s2.Cgpa = 9.5;
strcpy(s2.name, "rehyan");

printf("student name = %s",s1.name);
printf("\nstudent roll = %d",s1.roll);
printf("\nstudent Cgpa = %f",s1.Cgpa);  


    return 0;
}