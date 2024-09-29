//* Array Manipulation
//* Find the unique numbr in a given array where all the elements are beign repeated twice except one element

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {2, 3, 1, 2, 4, 4, 1};
    int size = 7;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[i] = arr[j] = -1;
            }
        }
    }


    for(int  i =0; i<size; i++){
        if (arr[i]>0)
        {
cout<< arr[i];

        }
    }

    return 0;
}