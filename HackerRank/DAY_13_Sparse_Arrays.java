There is a collection of input strings and a collection of query strings. For each query
string, determine how many times it occurs in the list of input strings. Return an
array of the results.
Example
stringList =['ab','ab','abc']
queries ['ab','abd','bc']
There are 2 instances of 'ab', 1 of 'abc' and 0 of 'bc'. For each query, add an element
to the return array. results —[2,1,0].

Answer:

import java.io.*;
import java.util.*;

class Solution {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        String list[] = new String[n];
        sc.nextLine(); 
        for (int i = 0; i < n; i++) {
            list[i] = sc.next(); 
        }
        int m = sc.nextInt();
        String qry[] = new String[m];
        sc.nextLine(); 
        for (int i = 0; i < m; i++) {
            qry[i] = sc.next(); 
        }

        int count[] = new int[m];
        for (int i = 0; i < m; i++) {
            count[i] = 0;
        }

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (qry[i].equals(list[j])) {
                    count[i]++;
                }
            }
        }

        for (int i = 0; i < m; i++) {
            System.out.println(count[i]);
        }
    }
}

