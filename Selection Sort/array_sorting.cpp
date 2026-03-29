//Ascending Array sorting  
//Program NO: 01

#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {5, 4, 3, 2, 1};
    int n= 5;

    for(int i = 0; i<n-1; i++)
    {
        int index = i;
        for(int j = i+1; j<n; j++)  
        
        {
            if(arr[j]<arr[index])
            index = j;      
             
        }
          
    swap(arr[i], arr[index]);
    }
    for(int i = 0; i<5; i++)
    
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}