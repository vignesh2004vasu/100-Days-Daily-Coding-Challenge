There are N children standing in a line. Each child is assigned a rating value given in the integer array ratings.
You are giving candies to these children subjected to the following requirements:

Each child must have atleast one candy.
Children with a higher rating than its neighbors get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute.

Example 1:

Input:
N = 3
ratings = [1, 0, 2]
Output: 
5
Explanation: 
You can allocate to the first, second and third child with 2, 1, 2 candies respectively.

Answer:
class Solution {
  public:
    int minCandy(int N, vector<int> &ratings) {
        if (N <= 1) return N;

        vector<int> candies(N, 1);

        for (int i = 1; i < N; ++i) {
            if (ratings[i] > ratings[i - 1]) {
                candies[i] = candies[i - 1] + 1;
            }
        }

        for (int i = N - 2; i >= 0; --i) {
            if (ratings[i] > ratings[i + 1]) {
                candies[i] = std::max(candies[i], candies[i + 1] + 1);
            }
        }

       
        int totalCandies = 0;
        for (int candy : candies) {
            totalCandies += candy;
        }

        return totalCandies;
    }
};