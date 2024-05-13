/*

Print the following pattern for the given N number of rows.
Pattern for N = 4
*
**
***
****
Note : There are no spaces between the stars (*).



*/


#include <iostream>

using namespace std;

int main() {



int n, i, j;



cin>>n;


for(i=1; i<=n; i++) {

for(j=1; j<=i; j++) {


cout<<"*";


}



cout <<endl;


}

return 0;

}