#include <iostream>
using namespace std;
int main()
{

    int n, i = 1, sum = 0;

    cin >> n;
    if (n <= 0)
    {
        return 0;
    }

    do
    {
        if (n % i == 0)
        {
            if (i != n)
            {
                sum += i;
            }
        }
        i++;
    }
     while (i <= n / 2);

   if(sum ==n) {
        cout << n << "perfect number" << endl;
    }
    else{
        cout<<n<<" not perfect number "<<endl;

    }
    
    return 0;     

}
