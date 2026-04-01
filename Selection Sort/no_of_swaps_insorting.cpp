//NO. OF Swaps + Descending Array Sorting
//Program NO:- 05
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {1, 8, 3, 4, 9};
    int n = 5;
    int swap_num = 0;     
    for(int i = 0; i<n-1; i++)
    {    
        int index = i;
        for(int j = i+1; j<n; j++)
        {
            if(arr[j]<arr[index])
            index = j;
        }
        swap(arr[i],arr[index]);
        swap_num++;
        
    }
        cout<<"Swaps: "<<swap_num<<endl;
        cout<<"Sorted Array in Descending Order: ";
        for(int i = 0; i<n; i++)
        {
            cout<<arr[i]<<" ";     
        }
    return 0;
}