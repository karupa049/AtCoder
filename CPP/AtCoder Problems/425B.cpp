#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n + 1);
    vector<bool> used(n + 1, false);
    bool possible = true;

    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(a[i] != -1){
            if(used[a[i]] == true){
                possible = false;
            }
            used[a[i]] = true;
        }
    }

    if(possible == false){
        cout << "No" << endl;
    } else {
        cout << "Yes" << endl;
        vector<int> missing;
        for(int i = 1; i <= n; i++){
            if(used[i] == false) missing.push_back(i);
        }

        int m_idx = 0;
        for(int i = 1; i <= n; i++){
            if(a[i] == -1){
                a[i] = missing[m_idx];
                m_idx++;
            }
        }

        for(int i = 1; i <= n; i++){
            cout << a[i] << (i == n ? "" : " ");
        }
        cout << endl;
    }
}