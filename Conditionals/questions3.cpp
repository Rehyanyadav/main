#include<iostream>
using namespace std;
int main()
{
    //wap to find the roots of a quadratic equations ax^2+bx+c=0
    float a,b,c,r1,r2,discrim ,ipart,rpart;
    cout<<"Enter the coefficients a,b,c :";
    cin>>a>>b>>c;
    discrim = b*b-4*a*c;
    if(discrim >0){
       r1 = (-b+ sqrt(discrim))/(2*a);
       r2= (b+sqrt(discrim))/(2*a);
       cout<<"Roots are real and different"<<endl;
       cout<<"r1:"<<r1<<endl;
       cout<<"r2:"<<r2<<endl;

    }

    else if (discrim ==0){

        cout<<"Roots are real and same "<<endl;
        r1= -b/(2*a);
        cout<<"r1=r2"<<r1<<endl;
    }
    else{
       cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << rpart << "+" << ipart << "i" << endl;
        cout << "x2 = " << rpart << "-" << ipart << "i" << endl;
    }
    return 0;
}


//steps to solve the question
/*
Step 1: Declare float variables; a, b, c, R1, R2, discrim, ipart,  rpart

Step 2: Print a message to enter coefficients a, b, and c;

Step 3: Read the numbers into the variables a, b, and c.

Step 4: Calculate the discriminant discrim =  b2 - 4ac.

Step 5: if the discrim >0

Then R1=  (-b + sqrt(discrim )/2a and 
R2 =  (-b - sqrt(discrim )/2a
 Print R1 and R2
      Else if discrim = 0

Then R1 = R2
R1 = -b / 2a
      Else if discrim < 0

Real part rpart = -b / 2a;
Imaginary part ipart = i√- sqrt(discrim)/2a
Print rpart and ipart




*/