#include<iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 30, 50, 70, 90};  //Array Initialization
    int key = 50;
    int found = 0;

    for(int i = 0; i < 5; i++)  //Loop to Traverse the Array
    {
        if(arr[i] == key)
        {
            cout << "Element found at index: " << i;
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        cout << "Element not present";
    }

    return 0;
}
