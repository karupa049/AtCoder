#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;

    vector<int> vec(N);

    for (int i = 0; i < N; i++){
        cin >> vec[i];
    }

    int sum = 0;

    for(int i = 0; i < N; i++){
        sum = sum + vec[i];
    }

    int ave = sum / N;

    vector<int> s(N);

    for(int i = 0; i < N; i++){
        s[i] = abs(vec[i] - ave);
        cout << s[i] << endl;
    }


}
