/*
A pointer in C++ is used to share a memory address among different contexts (primarily functions). They are used whenever a function needs to modify the content of a variable, but it does not have ownership.

In order to access the memory address of a variable, , prepend it with  sign. For example, &val returns the memory address of .

This memory address is assigned to a pointer and can be shared among functions. For example,  assigns the memory address of  to pointer . To access the content of the memory pointed to, prepend the variable name with a *. For example, *p will return the value stored in  and any modification to it will be performed on .
void increment(int *v) {
    (*v)++;
}

int main() {
    int a;
    scanf("%d", &a);
    increment(&a);
    printf("%d", a);
    return 0;
}  
Function Description
Complete the update function in the editor below.
update has the following parameters:
int *a: an integer
int *b: an integer
Returns
The function is declared with a void return type, so there is no value to return. Modify the values in memory so that  contains their sum and  contains their absoluted difference.


Input Format
Input will contain two integers,  and , separated by a newline.
Sample Input
4
5
Sample Output
9
1




*/



  #include<iostream>
  using namespace std;


  void update (int *a, int *b){


    int sum = *a + * b;
    int diff = abs(*a - *b);

    *a = sum ;
    * b = diff;

  }
  int main(){


    int a;
    int b;
    cout <<"enter the number";
    cin>>a>>b;

    update (&a, &b);

    cout <<a<<endl;
    cout <<b<<endl;

  }