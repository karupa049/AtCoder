#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> head(n + 1);
    vector<int> body(m + 1);
    for(int i = 1; i <= n; i++) cin >> head[i];
    for(int i = 1; i <= m; i++) cin >> body[i];

    sort(head.begin() + 1, head.end());
    sort(body.begin() + 1, body.end());

    vector<bool> used(m + 1, false);
    
    int count = 0;
    bool flag = false;

    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(head[i] <= body[j] && !used[j]){
                count++;            
                used[j] = true;     
                break;              
            }
        }

        if(count == k){
            flag = true;
            break;
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }

}