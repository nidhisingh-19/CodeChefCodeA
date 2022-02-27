#include<iostream>
using namespace std;
int main()
{
    int arr[] = {67,78,45,123,34};
    int max1 = arr[0];
    int max2 = arr[0];

    for(int i=1;i<5;i++)
    {
        if(arr[i]>max1)
        {
            max1 = arr[i];
            max2 = max1;
        }
        else if(arr[i]>max2 && arr[i]<max1)
        {
            max2 = arr[i];
        }
    }
    cout << max2 << endl;

    
    return 0;

}