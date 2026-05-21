#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;

    ll count = 0;
    vector<int> memo(26, 0);

    for(int j = l; j < n; j++){
        memo[s[j - l] - 'a']++;
        if(j - r - 1 >= 0){
            memo[s[j - r - 1] - 'a']--;
        }
        count = count + memo[s[j] - 'a'];
    }

    cout << count << endl;
}