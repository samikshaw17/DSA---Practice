#include<iostream>
#include<cstring>
using namespace std;
void reverseString(char name[], int n)  //Function to rreverse a string
{
    int start = 0, end = n-1;

    while(start<end)
    {
        swap(name[start++],name[end--]);
    }
    cout<<"Reverse of a String: "<<name<<endl;  //Display the reverse String
}
int main()
{
    char name[20];

    cout<<"Enter the String: ";
    cin>>name;

    int n = strlen(name);

    reverseString(name ,n);

    return 0;
}