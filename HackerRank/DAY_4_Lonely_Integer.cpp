Given an array of integers, where all elements but one occur twice, find the unique element.
A=[1,2,3,4,3,2,1]
  The unique element is 4.

Answers:
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int u;
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(i!=j && arr[i]==arr[j]){
                c++;
            }
        }
        if(c==0)
            u=arr[i];
            
            
    }
    
    cout<<u;
}
