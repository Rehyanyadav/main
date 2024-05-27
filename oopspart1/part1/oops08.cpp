/*
Fraction class



*/

/*
we have to create a fraction class to represent 12/5
we have to make two different properties for set it
1) numerator = 12and 2) denominator  = 5



*/
#include<iostream>
#include<algorithm> // Include this header to use the min function
using namespace std;

class fraction
{

private:
    int numerator;
    int denominator;

public:
    fraction(int numerator, int denominator)
    {
        this->numerator = numerator;
        this->denominator = denominator;
        simplify(); // Simplify the fraction when it's created
    }
    void print()
    {
        cout << this->numerator << "/" << denominator << endl;
    }

    void simplify()
    {
        int gcd = gcdCalculator(this->numerator, this->denominator);
        this->numerator = this->numerator / gcd;
        this->denominator = this->denominator / gcd;
    }

    int gcdCalculator(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcdCalculator(b, a % b);
    }

    void add(fraction f2)
    {
        int lcm = (denominator * f2.denominator) / gcdCalculator(denominator, f2.denominator);
        int x = lcm / denominator;
        int y = lcm / f2.denominator;
        int num = x * numerator + (y * f2.numerator);
        numerator = num;
        denominator = lcm;
        simplify();
    }
};

int main()
{

    fraction f1(10,2);
    fraction f2(15,4);
    f1.add(f2);
    f1.print();
    f2.print();

    return 0;
}