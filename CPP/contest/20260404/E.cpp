#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    int M;

    cin >> N >> M;

    vector<long long> A;
    for(int i = 0; i < N; i++){
        long long x;
        cin >> x;
        A.push_back(x);
    }

    vector<long long> B;
    for(int j = 0; j < M; j++){
        long long y;
        cin >> y;
        B.push_back(y);
    }

    long long sum = 0;
    for(int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            sum = sum + ((A[i] * B[j] * ((i + 1) % (j + 1))) % 998244353);
        }
    }
    //cout << sum << endl;

    long result = 0;
    result = sum % 998244353;

    cout << result << endl;
}