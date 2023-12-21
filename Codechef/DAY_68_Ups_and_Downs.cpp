You will be given a zero-indexed array A You need to rearrange its elements in such a way that the
following conditions are satisfied:
• Ali] A[i+ll if i is even.
• Ali] 2 A[i+ll if i is odd.
In other words the following inequality should hold: A[O] All] A[2] A13] 2 A[4], and so on. Operations
and 2 should alter.

Answer:
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        cin>>a[i];
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                if(a[i]>a[i+1])
                swap(a[i],a[i+1]);
            }
            else
            {
                if(a[i]<a[i+1])
                swap(a[i+1],a[i]);
            }
        }
        for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
        cout<<endl;
    }

    return 0;
}