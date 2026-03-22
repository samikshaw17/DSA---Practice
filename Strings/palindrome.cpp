//Program to check palindrome or not
//1 represented as Palindrome(TRUE)
//0 represented as not Palindrome(FALSE)
#include<iostream>
using namespace std;
bool IsPallindrome(string word ,int n)
{
    int s = 0;
    int e = n-1;

    while(s<=e)
    {
        if(word[s]!=word[e])
        {
        return 0;
        }

        else{
            s++;
            e++;
        }
        return 1;
    }
}
int main()
{
    string word;
    int n=word.size();

    cout<<"Enter The String: ";
    cin>>word;

    cout<<"Palindrome or not: "<<(IsPallindrome( word, word.size()));
}