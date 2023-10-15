Given a square matrix, calculate the absolute difference between the sums of its diagonals.

Sample Input

3
11 2 4
4 5 6
10 8 -12
Sample Output

15

Answer:
import java.util.*;
import java.util.*;

class Solution
{
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        int n=sc.nextInt();
        int arr[][] = new int[n][n];
        int d1=0,d2=0;
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                arr[i][j]=sc.nextInt();
        
        for(int i=0;i<n;i++){
            d1+=arr[i][i];
            d2+=arr[i][n-1-i];
        }
        System.out.print(Math.abs(d1-d2));
    }
            
           
    
}
