Chef recently started working at ABC corporation. Let's number weekdays (Monday through Friday) by
integers 1 through 5. For each valid i, the number of hours Chef spent working at the office on
weekday iwas Ai.
Unfortunately, due to the COVID-19 pandemic, Chef started working from home and his productivity
decreased by a considerable amount. As per Chefs analysis, 1 hour of work done at the office is
equivalent to P hours of work done at home.
Now, in order to complete his work properly, Chef has to spend more hours working from home,
possibly at the cost of other things like sleep. However, he does not have to do the same work on each
day as he would have in the office — for each weekday, he can start the work for this day on an earlier
day and/or complete it on a later day. The only requirement is that his work does not pile up
indefinitely, i.e. he can complete his work for each week during the same week. One day has 24 hours.
If Chef is unable to complete his work for a week during those five weekdays, then he has to work
during the weekend too. Chef wishes to know whether he has to work on weekends or if he can
complete his work by working only on weekdays. Help him answer that question. (It is possible that
Chef would be unable to finish his work even if he worked all the time, but he does not want to know
about that.)
  #include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--) {
        int p, ele, sum=0;
        for(int i=0; i<5; i++) {
            cin>>ele;
            sum+=ele;
        }
        cin>>p;
        sum*=p;
        if(sum<=120) {
            cout<<"No"<<endl;
        }
        else {
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}
