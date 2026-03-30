//Descending array 
//Problem N0:- 03
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5,3,2,4,1};
    int n =5;
     
    for(int i = 0; i<n-1; i++)
    {    
        int index = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]>arr[index])
            index = j;
        }
        swap(arr[i],arr[index]);      
    }
        cout<<"Sorted Array in Descending Order: ";
        for(int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";     
        }
    return 0;
}