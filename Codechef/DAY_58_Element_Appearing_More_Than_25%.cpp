
Coding ninjas

You are given an array 'ARR' of size 'N' containing each number between 1 and
'N' - 1 at least once. There is a single integer value that is present in the array
twice. Your task is to find the duplicate integer value present in the array.
For example:
Consider ARR [1, 2, 3, 4, 4], the duplicate integer value present in the array is
4. Hence, the answer is 4 in this case.

Answer:
int findDuplicate(vector<int> &arr) {

      int n = arr.size();
    for (int i = 0; i < n; ++i) {
        int index = abs(arr[i]) - 1;
        if (arr[index] < 0) {
            return abs(arr[i]);
        }
        arr[index] = -arr[index];
    }
    return -1;
}

Geeks for k
Given a gold mine called M of (n x m) dimensions. Each field in this mine contains a positive integer which is the amount of gold in tons. Initially the miner can start from any row in the first column. From a given cell, the miner can move

to the cell diagonally up towards the right 
to the right
to the cell diagonally down towards the right
Find out maximum amount of gold which he can collect until he can no longer move.

Example 1:

Input: n = 3, m = 3
M = {{1, 3, 3},
     {2, 1, 4},
     {0, 6, 4}};
Output: 12
Explaination: 
The path is {(1,0) -> (2,1) -> (2,2)}.

Example 2:

Input: n = 4, m = 4
M = {{1, 3, 1, 5},
     {2, 2, 4, 1},
     {5, 0, 2, 3},
     {0, 6, 1, 2}};
Output: 16
Explaination: 
The path is {(2,0) -> (3,1) -> (2,2) 
-> (2,3)} or {(2,0) -> (1,1) -> (1,2) 
-> (0,3)}.


Answer:
class Solution{
public:
    int maxGold(int n, int m, vector<vector<int>> M)
    {
        int dp[n][m];

   
        for (int i = 0; i < n; ++i) {
            dp[i][m - 1] = M[i][m - 1];
        }

    
    for (int j = m - 2; j >= 0; --j) {
        for (int i = 0; i < n; ++i) {
            int right = dp[i][j + 1]; 
            int up = (i > 0) ? dp[i - 1][j + 1] : 0; 
            int down = (i < n - 1) ? dp[i + 1][j + 1] : 0;

          
            dp[i][j] = M[i][j] + max({ right, up, down });
        }
    }


    int maxG = 0;
    for (int i = 0; i < n; ++i) {
        maxG = max(maxG, dp[i][0]);
    }

    return maxG;
        
    }
};

code chef

You are given two positive integers A and B. You need to construct two different binary strings (i.e,
they are strings which consist of only 0s and Is), which satisfy these two conditions:
• Both the strings should be palindromes.
• Each string should have exactly A Os, and exactly B Is in them.
Output Yes if two such different binary strings can be constructed and No otherwise.
Answer:


import java.util.*;
import java.lang.*;
import java.io.*;

class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner in = new Scanner(System.in);
		int t = in.nextInt();
		while(t-->0){
		    int a = in.nextInt();
		    int b = in.nextInt();
		    String possible = "Yes";
		    if(a==1 || b==1 || (a%2!=0 && b%2!=0)){
		        possible = "No";
		    }
		    System.out.println(possible);
		}
	}
}

leet code

Given the array of integers nums, you will choose two different indices i and j of that array. Return the maximum value of (nums[i]-1)*(nums[j]-1).
 

Example 1:

Input: nums = [3,4,5,2]
Output: 12 
Explanation: If you choose the indices i=1 and j=2 (indexed from 0), you will get the maximum value, that is, (nums[1]-1)*(nums[2]-1) = (4-1)*(5-1) = 3*4 = 12. 
Example 2:

Input: nums = [1,5,4,5]
Output: 16
Explanation: Choosing the indices i=1 and j=3 (indexed from 0), you will get the maximum value of (5-1)*(5-1) = 16.
Example 3:

Input: nums = [3,7]
Output: 12
class Solution {
public:
    int maxProduct(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        int n=nums.size();
        return (nums[n-1]-1)*(nums[n-2]-1);
        
    }
};
