#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 6;
    int arr[n] = {13,46,24,52,20,9};
    for(int i =0;i<n-1;i++)
    {
        int noswap = 0;
        for(int j = 0;j<n-1-i;j++)
          {
              if(arr[j]>arr[j+1])
              {  swap(arr[j],arr[j+1]);
                 noswap = 1;
              }
          }
      if(noswap ==0)
         break;
    }
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}
