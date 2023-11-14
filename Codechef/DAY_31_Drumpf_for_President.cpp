Donald Drumpf has spent the entire summer lobbying to gather votes for the upcoming student
government election. At his University, there are a total of N students. Each student in the university
casts a vote. The size of student government is determined by the number of students that get at least K votes.
Each person that receives at least K votes is given a post in the student government. The Dean noticed
that every year, there are a few students who vote for themselves. He decided to add a rule to
disqualify any such individuals who vote for themselves i.e they cannot be part of the student government.
You are given an array A, where Ai denotes the person who the i-th person voted for. Can you compute
the size of the student government?

Sample 1:
Input:
2
3 2
2 1 2
2 1
1 2
Output:
1
0
Explanation:
In first test case, there are 3 students. A student must receive at least 2 votes to be part of the student
government. Student 1 votes for student 2, student 2 votes for student 1 and student 3 votes for
student 2. Thus, Student 2 receives 2 votes and is the only one eligible for student government.
In second test case, although both students receive the required amount of votes, they are both
disqualified as they had voted for themselves. Thus, size of the student government is O.

Answer:
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int n,k;
	    cin>>n>>k;
	    int arr[n];
	    int count=0;
	    int votes[n]={0};
	    
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	        int p = arr[i];
	        if (p==i+1)
	        votes[p-1]=-1;
	        else {
	            if (votes[p-1]!=-1)
	            votes[p-1]++;
	            
	        }
	        
	    }
	    for(int i=0; i<n;i++){
	        if((votes[i]>k)||(votes[i]==k))
	        count++;
	    }
	    cout<<count<<endl;
	}
	return 0;
}
