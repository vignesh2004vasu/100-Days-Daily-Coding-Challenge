A number is called a smart number if it has an odd number of factors. Given some
numbers, find whether they are smart numbers or not.

Input Format
The first line of the input contains t, the number of test cases.
The next t lines contain one integer each.
Output Format
The output should consist oft lines. In the line print YES if the ith integer has an
odd number of factors, else print NO.
Sample Input
4
1
2
7
169
Sample Output
YES
NO
NO
YES
Answer:
#include<bits/stdc++.h>
using namespace std;

bool is_smart_number(int num) {
    int val = (int) sqrt(num);
    if(val*val == num)
        return true;
    return false;
}

int main() {
    
    int test_cases;
    cin >> test_cases;
    int num;
    for(int i = 0; i < test_cases; i++) {
        cin >> num;
        bool ans = is_smart_number(num);
        if(ans) {
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
    }
    return 0;
}
