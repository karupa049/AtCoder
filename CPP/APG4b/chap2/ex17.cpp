#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S;
  cin >> N >> S;
  vector<int> A(N), P(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < N; i++) {
    cin >> P[i];
  }

  // リンゴ・パイナップルをそれぞれ1つずつ購入するとき合計S円になるような買い方が何通りあるか
  // ここにプログラムを追記

  int count = 0;
  int sum = 0;

  for (int i = 0; i < A.size(); i++){
    for (int j = 0; j < P.size(); j++){
        sum = A[i] + P[j];
        if (sum == S){
            count++;
        }
    }
  }

  cout << count << endl;
}
