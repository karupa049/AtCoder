#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> A(3), B(3);
  for (int i = 0; i < 3; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < 3; i++) {
    cin >> B[i];
  }

  // 答えを保持する変数
  bool answer = false;

  // ここにプログラムを追記
  for(int i = 0; i < A.size(); i++){
    for (int j = 0; j < B.size(); j++){
        if(A[i] == B[j]){
            answer = true;
        }
    }
  }

  if (answer) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }
}
