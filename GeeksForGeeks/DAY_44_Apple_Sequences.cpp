There is a string of size n containing only 'A' and 'O'. 'A' stands for Apple, and 'O' stands for Orange. We have m number of spells, each spell allows us to convert an orange into an apple.
Find the longest subarray of apples you can make, given a string and the value of m.
Example 1:

Input:
N = 5
M = 1
arr[] = 'AAOAO'
Output: 4 
Explanation: Changing the orange at 
3rd position into an apple gives 
us the maximum possible answer.

Example 2:

Input:
N = 5
M = 1
arr = 'AOOAO'
Output: 2
Explanation: Changing any orange into 
an apple will give us a sequence 
of length 2.
Answer:
class Solution{   
public:
    int appleSequences(int n, int m, string arr){
        int left = 0, right = 0;
        int maxApples = 0, numOranges = 0;

        while (right < n) {
            if (arr[right] == 'O') {
                numOranges++;
            }

            
            while (numOranges > m) {
                if (arr[left] == 'O') {
                    numOranges--;
                }
                left++;
            }

            maxApples = std::max(maxApples, right - left + 1);
            right++;
        }

        return maxApples;
    }
};
