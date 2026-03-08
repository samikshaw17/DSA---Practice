#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10,25,8,40,30};
    
    int largest = arr[0];
    
    // Find largest
    for(int i=1;i<5;i++)
    {
        if(arr[i] > largest)
        {
            largest = arr[i];
        }
    }

    int secondLargest = -1;

    // Find second largest
    for(int i=0;i<5;i++)
    {
        if(arr[i] < largest && arr[i] > secondLargest)
        {
            secondLargest = arr[i];
        }
    }

    cout<<"Second Largest : "<<secondLargest;

    return 0;
}