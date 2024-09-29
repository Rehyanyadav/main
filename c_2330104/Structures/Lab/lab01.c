/*
WAP in c to store n employee’s data such as employee name, gender, designation,
department, basic pay. Calculate the gross pay of each employees as follows:
Gross pay = basic pay + HR + DA
HR=25% of basic and DA=75% of basic.


*/
#include <stdio.h>
#include <string.h>

typedef struct
{
    char name[50];
    char gender;
    char designation[50];
    char department[50];
    float basic_pay;
    float gross_pay;
} Employee;

void calculate_gross_pay(Employee *employee)
{
    float hr = 0.25 * employee->basic_pay;
    float da = 0.75 * employee->basic_pay;
    employee->gross_pay = employee->basic_pay + hr + da;
}

void print_employee_data(Employee employee)
{
    printf("Name: %s\n", employee.name);
    printf("Gender: %c\n", employee.gender);
    printf("Designation: %s\n", employee.designation);
    printf("Department: %s\n", employee.department);
    printf("Basic Pay: %.2f\n", employee.basic_pay);
    printf("Gross Pay: %.2f\n\n", employee.gross_pay);
}

int main()
{
    printf("Name: Rehyan yadav\n");
    printf("Roll No: 2330104\n\n");

    int n;
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    Employee employees[100];
    for (int i = 0; i < n; i++)
    {
        printf("Enter employee %d's data:\n", i + 1);
        printf("Name: ");
        scanf("%49s", employees[i].name);
        printf("Gender (M/F): ");
        scanf(" %c", &employees[i].gender); 
        printf("Designation: ");
        scanf("%49s", employees[i].designation);
        printf("Department: ");
        scanf("%49s", employees[i].department);
        printf("Basic Pay: ");
        scanf("%f", &employees[i].basic_pay);

        calculate_gross_pay(&employees[i]);
    }

    printf("Employee Data:\n");
    for (int i = 0; i < n; i++)
    {
        print_employee_data(employees[i]);
    }

    return 0;
}