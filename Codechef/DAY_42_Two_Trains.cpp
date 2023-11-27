There are 2 trains A and B and N stations in a line from 1 to N in order. There is also an array P of
length N — 1 such that Pi (1 i < N) denotes the amount of time any train takes to go from the i-th
station to the (i + l)-th station.
Initially, both trains are at station 1. Train A departs from station 1 and stops directly at station N. For
safety purposes, it is maintained that train B cannot depart from station i unless train A has already
reached station (i+ 1) (1 i < N).
Find the minimum time after which train B reaches station N, once train A departs from station 1.

Sample 1:
Input
3
2
4
3
3 5
4
5 2 6
Output
8
13
19
Answer:
#include<bits//stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for (int i = 1;i<= t;i++){
        int n;
        cin>>n;
        int arr[n];
        for (int j = 0;j<n-1;j++){
            cin>>arr[j];


        }
        int t1 = arr[0];
        int t2 = arr[0];
        for (int k =1;k<n-1;k++){
            t1 += arr[k-1];
           
            t2 += arr[k];
            if (t1<t2){
                t1 += t2 -t1;

            }

        }
        t1 += arr[n-2];
        cout<<t1<<endl;
    }
}
