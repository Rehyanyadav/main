#include <iostream>
#include <cmath>

int main() {
    int salary;
    char grade;
    double hra, da, allow, pf;
    int total_salary;

   
    std::cin >> salary;
  
    std::cin >> grade;

    hra = 0.2 * salary;
    da = 0.5 * salary;

    if (grade == 'A') {
        allow = 1700;
    } else if (grade == 'B') {
        allow = 1500;
    } else {
        allow = 1300;
    }

    pf = 0.11*salary;

    total_salary = salary + hra + da + allow - pf;
    total_salary = round(total_salary);
    std::cout<< total_salary;


    return 0;

}

