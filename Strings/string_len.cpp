#include<iostream>
using namespace std;
int getLength(char name[]) //Function to declare name
{
    int count = 0;

    for(int i = 0; name[i]!='\0'; i++)  //Loop to get a name
    {
        count++;
    }
    return count; //Returns a length of String
}
int main(){

char name[20];

cout<<"Enter your String: ";
cin>>name;

cout<<"Length of the String: "<<getLength(name)<<endl;

return 0;
}