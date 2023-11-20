You are given a sorted array of 'N' integers. You have to generate the power set for this array where each subset of this power set is
individually sorted.A set is a well-defined collection of distinct elements. Power set
P(ARR) of a set 'ARR' is defined as a set of all possible subsets of'ARR.
You have to return the array of subsets. The elements in the subset should be sorted in ascending order. The order of subsets
in the array does not matter. Hence there can be more than 1 possible solution for a given array.
For Example :
If we are given an array ARR=[1,2,3] then the power
set P(ARR) of the set ARR is:
[1,2],
[1,3],
[2,3],
Sample Input 1 :
3
1 2 3    
Sample Output 1 :
1
2
3
1 2
1 3
2 3

1 2 3 


Answer:
#include <bits/stdc++.h>

void Power(vector<int>& v,int index,vector<int>& s,vector<vector<int>>& r)
{
    r.push_back(s);

    for(int i=index;i<v.size();i++)
    {
        s.push_back(v[i]);
        Power(v,i+1,s,r);
        s.pop_back();
    }
}



vector<vector<int>> pwset(vector<int>v)
{
    sort(v.begin(),v.end());

    vector<vector<int>> result;
    vector<int> subset;

    Power(v,0,subset,result);

    return result;
}
