// Program to count vowels and Consonants in string
#include<iostream>
using namespace std;
int main()
{
    string s ; 
    int vowel = 0;
    int consonant = 0;

    cout<<"Enter the String: ";
    cin>>s;
    for(int i = 0; i<s.size(); i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
        vowel++;
        }

        else
        {
        consonant++;
        }
    }
        cout<<"Vowel: "<<vowel<<endl;
        cout<<"Consonant: "<<consonant<<endl;
return 0;
}