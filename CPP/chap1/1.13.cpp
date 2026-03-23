#include<bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cin >> N;
    vector<int> vec(N);
    for (int i = 0; i < N; i++){
        cin >> vec.at(i);
    }

    for (int i = 0; i < N; i++){
        cout << vec.at(i) << ",";
    }
    cout << endl;
}