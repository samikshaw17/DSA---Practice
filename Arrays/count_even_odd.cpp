#include<iostream>
using namespace std;
int main()
{
    int arr[10];    //Create an Array
    int even = 0, odd = 0;

    cout<<"Enter arrAY: ";
    for(int i = 0; i<10;i++)    //Loop to read an Array Element
    {
        cin>>arr[i];
    }
    for(int i = 0; i<10; i++){  //Loop to count EVEN and ODD Numbers

      if(arr[i]%2==0)
            even++;
      else
            odd++;
    }
    
    cout<<"Even Number: "<<even<<endl; //Print Even Numbers
    cout<<"Odd Number: "<<odd;  //Print Odd Numbers

    
        return 0;
    }

