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