//Program No.02: Last Occurence

#include<iostream>
using namespace std;
   int lastOccur(int arr[], int n, int key)
   {
        int start = 0, end = n-1, mid, ans;

        while(start <= end)
        {
            mid = end-start/2;

            if(arr[mid] == key){
            ans = mid;
            start = mid+1;
            }

            else if(arr[mid]<key)
            start = mid+1;

            else
            end = mid - 1;

        }
        return ans;
   }
int main()
{
  int arr[] = {1, 2, 4, 4, 4, 5, 7};
  int n = 7;
  int key = 7;

  cout<<lastOccur(arr, n, key);

  return 0;
}

