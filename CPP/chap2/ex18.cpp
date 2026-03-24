#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    vector<int> A(M), B(M);
    for (int i = 0; i < M; i++)
    {
        cin >> A[i] >> B[i];
    }

    // vector<vector<int>> data(3, vector<int>(4));
    vector<vector<char>> table(N, vector<char>(N, '-'));
    for (int i = 0; i < M; i++)
    {
        // 1〜N → 0〜N-1 に変換
        A[i]--;
        B[i]--;
        // A[i] は B[i] に勝った ('o')
        table[A[i]][B[i]] = 'o';
        // B[i] は A[i] に負けた ('x')
        table[B[i]][A[i]] = 'x';
    }

    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            cout << table[i][j];

            if (j == N - 1){
                cout << endl; // 行末なら改行
            }else{
                cout << " "; // それ以外は空白
            }
        }
    }
}