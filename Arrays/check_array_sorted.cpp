#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1,4,3,2};
    int n= 4;

    for(int i = 0; i<n; i++)
    {

    for(int j = i+1; j<n; j++)
    {
        if(arr[i]>arr[j])
        
        swap(arr[i],arr[j]);
    }
}
    for(int i = 0; i<n; i++)
    cout<<arr[i]<<" ";

    return 0;
}