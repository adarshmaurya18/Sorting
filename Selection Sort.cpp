#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n =6;
    int arr[n] = {13,46,24,52,20,9};
    for(int i =0;i<n-1;i++)
    {
        int mini =i;
        for(int j =i+1;j<n;j++)
        {
            if(arr[j]<arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[i],arr[mini]);
    }
    for(int i =0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}
