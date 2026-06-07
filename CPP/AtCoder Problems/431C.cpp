#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> head(n + 1);
    vector<int> body(m + 1);
    for(int i = 1; i <= n; i++) cin >> head[i];
    for(int i = 1; i <= m; i++) cin >> body[i];
    // for(int i = 1; i <= n; i++) cout << head[i] << " "; cout << endl;
    // for(int i = 1; i <= m; i++) cout << body[i] << " "; cout << endl;
    sort(head.begin(), head.end());
    sort(body.begin(), body.end());
    // for(int i = 1; i <= n; i++) cout << head[i] << " "; cout << endl;
    // for(int i = 1; i <= m; i++) cout << body[i] << " "; cout << endl;

    queue<int> headqueue;
    queue<int> bodyqueue;

    for(int i = 1; i <= n; i++) headqueue.push(head[i]);
    for(int i = 1; i <= m; i++) bodyqueue.push(body[i]);
    
    bool flag = false;
    int count = 0;

    while(true){
        if(headqueue.empty() || bodyqueue.empty()){
            break;
        }
        if(headqueue.front() <= bodyqueue.front()){
            count++;
            if(count == k){
                flag = true;
                break;
            }
            headqueue.pop();
            bodyqueue.pop();
        }else{
            bodyqueue.pop();
        }
    }

    if(flag == true){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }



}