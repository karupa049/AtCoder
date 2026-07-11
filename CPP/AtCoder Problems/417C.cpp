#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<long long> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " ";cout << endl;

    long long count = 0;

    map<long long, long long> memo;

    for(int j = 1; j <= n; j++){
        long long target = j - array[j];
        count += memo[target];
        long long val = j + array[j];
        memo[val]++;
    }

    cout << count << endl;
}