#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;

    cin >> n >> s;

    bool rev = false;
    int L = 0;
    int R = n - 1;
    vector<int> ans(n);

    for(int i = n; i >= 1; i--){
        if (s[i - 1] == 'x') {
            if (rev == false) {
                ans[R] = i;
                R--;
            } else {
                ans[L] = i;
                L++;
            }
        } else if (s[i - 1] == 'o') {
            if (rev == false) {
                ans[L] = i;
                L++;
                rev = true;
            } else {
                ans[R] = i;
                R--;
                rev = false;
                
            }
        }
    }

    for(int i = 0; i < n; i++){
        cout << ans[i] << " ";
    }
    cout << endl;
}