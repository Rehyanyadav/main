/*
Print the sum, difference and product 
of two complex numbers by creating a class
 named 'Complex' with separate functions
  for each operation whose real and imaginary 
  parts are entered by the user


*/



#include<iostream>
using namespace std;


class complex{
    private:
    int real;
    int imaginary;

public:
complex(int r , int i){
    real = r;
    imaginary = i;

}


int get_real(){
    return real;
}

int get_imaginary(){
    return imaginary;
}


void add (complex c1){
    cout<< c1.get_real()+c1.get_imaginary()<<endl;
}
void difference (complex c1){
    cout << c1.get_real()-c1.get_imaginary()<<endl;

}

void multiply (complex c1){
    cout<< c1.get_real()*c1.get_imaginary()<<endl;

}


};



int main (){

    complex c1(4,5);
    complex c2(2,3);

    c1.add(c2);
    c1.difference(c2);
    c1.multiply(c2);
    return 0;
}