//Sort Even Index Elements Only
//Program N0: 04
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {5, 3, 6, 8, 1};    //Array elements
    int n = 5;
    int temp[10],  k = 0;

    for(int i = 0; i<n; i+=2)       //Loop to Traverse the Even index elements
    temp[k++] = arr[i];
    {        
         for(int i = 0; i<k-1; i++)     //Loop to sort the even index elements
         {
            int index = i;
            for(int j = i+1; j<k; j++)
            {
                if(temp[j] < temp[index])
                index = j;
            }
            swap(temp[i], temp[index]) ;         
         }   
         int x = 0;
         for(int i = 0; i<n; i+=2)
         {
            arr[i] = temp[x++];
         }
         for(int i = 0 ; i<n; i++)
         {
            cout<<arr[i]<<" ";
         }
    }  
    return 0;
}
