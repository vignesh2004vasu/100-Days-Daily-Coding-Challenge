The road has N checkpoints. Each checkpoint has a beauty value denoted as an array A in order from the
start of the road to the end of the road. The beauty value of a checkpoint consists of the beauty of the
places near the checkpoint. You are planning to travel by road. As it is a long road, you will stop at one of the checkpoints
for a little rest and after this rest, continue your journey.
So its journey in two nearby sub-arrays,S1 being thecheckpoints before your rest (including the one you will
stop at) and S2 being the checkpoints after your rest,such that tamanho(S1) + tamanho(S2) =  N
(ie every checkpoint belongs to an exact sub-array).
The total beauty of the journey is defined by soma(S1)*soma(S2) where soma(S) is the sum
total of the beauty value in the sub- array S. Do you want to maximize the value ofsoma(S1) * soma(S2).

Sample Input
5
1 2 3 4 5
Sample Output
54
Explaination:
soma(sl) * soma(s2) will be the best when Sl=[1, 2, 3] it is s2 = [4, 5].soma (Sl) = 6 .1t is
soma(s2)= 9, then soma(sl) * soma(s2) =  54


#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N;
    cin >> N; 
    vector<int> beauty(N);
    vector<long long> left_cumulative_sum(N), right_cumulative_sum(N);

    for (int i = 0; i < N; i++) {
        cin >> beauty[i]; 
    }
    left_cumulative_sum[0] = beauty[0];
    for (int i = 1; i < N; i++) {
        left_cumulative_sum[i] = left_cumulative_sum[i - 1] + beauty[i];
    }

    right_cumulative_sum[N - 1] = beauty[N - 1];
    for (int i = N - 2; i >= 0; i--) {
        right_cumulative_sum[i] = right_cumulative_sum[i + 1] + beauty[i];
    }

    long long max_soma = 0;
    for (int i = 0; i < N - 1; i++) {
        long long soma = left_cumulative_sum[i] * right_cumulative_sum[i + 1];
        max_soma = max(max_soma, soma);
    }

    cout << max_soma << endl;

    return 0;
}
