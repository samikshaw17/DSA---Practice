#include<iostream>
using namespace std;
int main()
{
    string str;
    cout<<"Enter The String: ";     
    getline(cin, str);              //Reads the String

    for(int i = 0; i<str.length(); i++)     //Loop to remove the spaces
    {
        if(str[i] == ' ')
        {
        str.erase(i,1);         //str.erase() to remove the spaces
        i--;        
        }  
    }
    cout<<str<<endl; 
    return 0;
}



