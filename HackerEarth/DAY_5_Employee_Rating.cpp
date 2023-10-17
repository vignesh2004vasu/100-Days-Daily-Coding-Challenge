Problem
You are an IT company's manager. Based on their performance over the last N working days, you must rate your employee. You are given an array of N integers called workload, where workload[i] represents the number of hours an employee worked on an ith day. The employee must be evaluated using the following criteria:

Rating = the maximum number of consecutive working days when the employee has worked more than 6 hours.
You are given an integer N where N represents the number of working days. You are given an integer array workload where workload[i] represents the number of hours an employee worked on an ith day.

Task

Determine the employee rating.

Example

Assumptions

N = 12
workload = [2, 3, 7, 8, 7, 6, 3, 8, 12, 11, 12, 10]
Approach

Workload with consecutive hours > 6 = [2, 3, 7, 8, 7, 6, 3, 8, 12, 11, 12, 10] =>  Longest Interval =  [8,12,11,12,10]

Therefore return 5.

Answer:
  
  int solve (int N, vector<int> workload) {
   int max=0;
   int count=0;
   for(int i=0;i<N;i++)
   {
        if(workload[i]>6)
        {
            count++;
            if(count>max){
                max=count;
            }
        }
        else
        {
            count=0;
        }


   }
   return max;
   
}
