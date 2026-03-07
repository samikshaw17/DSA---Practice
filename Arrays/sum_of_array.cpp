#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {1, 2, 3, 4, 5};   //Array Initialization 
    int sum = 0;

    for(int i = 0; i<5; i++)    //Loop to add the elements
    {
        sum+=arr[i];
    }
    cout<<"Sum Of Array is: "<<sum;     //Display Result

    return 0;
}