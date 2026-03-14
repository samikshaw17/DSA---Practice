#include<iostream>
using namespace std;
int main()
{
    int arr[5]; //Array Creation

    cout<<"Enter an Array: ";   
    for(int i = 0; i<5; i++)    //Loop to read the Array elements
    cin>>arr[i];

    cout<<"Reverse Array: ";
    for(int i = 4; i>=0; i--)   //2nd Loop to print the reverse Array
    cout<< arr[i]<<" ";
    return 0;
}