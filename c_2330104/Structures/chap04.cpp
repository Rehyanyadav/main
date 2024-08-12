/*

WAP  in  c using structures to store n employee’s data such as employee name, gender, designation,
department, basic pay. Calculate the gross pay of each employees as follows:
Gross pay = basic pay + HR + DA
HR=25% of basic and DA=75% of basic. 
*/








#include <stdio.h>

struct Employee {
    char name[50];
    char gender;
    char designation[50];
    char department[50];
    float basicPay;
    float grossPay;
};

void calculateGrossPay(struct Employee* emp) {
    emp->grossPay = emp->basicPay + (0.25 * emp->basicPay) + (0.75 * emp->basicPay);
}

int main() {
    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    struct Employee employees[n];

    for (int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%49s", employees[i].name); // changed to %49s to prevent buffer overflow
        printf("Gender: ");
        scanf(" %c", &employees[i].gender); // removed \n
        printf("Designation: ");
        scanf("%49s", employees[i].designation); // changed to %49s to prevent buffer overflow
        printf("Department: ");
        scanf("%49s", employees[i].department); // changed to %49s to prevent buffer overflow
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basicPay); // removed \n

        calculateGrossPay(&employees[i]);
    }

    printf("\nEmployee Details:\n");
    for (int i = 0; i < n; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("Gender: %c\n", employees[i].gender);
        printf("Designation: %s\n", employees[i].designation);
        printf("Department: %s\n", employees[i].department);
        printf("Basic Pay: %.2f\n", employees[i].basicPay);
        printf("Gross Pay: %.2f\n", employees[i].grossPay);
    }

    return 0;
}