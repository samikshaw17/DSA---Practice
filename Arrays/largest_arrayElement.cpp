#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {10, 29, 54, 36, 61};  //Array Initialization

    int large = arr[0];   //Assume first element is largest

    for(int i = 1; i<5; i++)  //Loop to find the largest element
    {
        if(arr[i]>large) 
        {
            large = arr[i];   //Updating the large value
        } 
    }
     cout<<"Largest Element is: "<<large;   //Display Result

    return 0;
}