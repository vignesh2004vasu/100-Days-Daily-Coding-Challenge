You are given an array of integers 'ARR' containing N elements. Each integer is
in the range [1, N- 1], with exactly one element repeated in the array.
Your task is to find the duplicate element. The duplicate element may be
repeated more than twice in the error, but there will be exactly one element that
is repeated in the array.
Note :
All the integers in the array appear only once except for precisely one integer
which appears two or more times.
Sample Input 1:
1
3
1 1 2
Sample Output 1:
1
Explanation of Sample Input 1:
1 is repeated in the array, hence function returns 1.
Sample Input 2:
3
5
1 3 4 2 2
5
3 1 3 4 2
3
1 1 1
Sample Output 2:
2
3
1
Answer:
import java.util.ArrayList;
import java.util.HashSet;

public class Solution {
    public static int findDuplicate(ArrayList<Integer> arr, int n){
        HashSet<Integer> set = new HashSet<>();

        for (int num : arr) {
           
            if (set.contains(num)) {
                return num;
            }
            
            set.add(num);
        }

        
        return -1; 
    }
}
