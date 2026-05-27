#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;
    
    vector<int> query(q + 1);
    vector<string> moji(q + 1);

    for(int i = 1; i <= q; i++){
        cin >> query[i];
        if(query[i] == 1){
            cin >> moji[i];
        }
    }

    // for(int i = 1; i <= q; i++) cout << query[i] << " "; cout << endl;
    // for(int i = 1; i <= q; i++) cout << moji[i] << " "; cout << endl;

    stack<string> s;
    string answer;

    for(int i = 1; i <= q; i++){
        if(query[i] == 1){
            s.push(moji[i]);
        }else if(query[i] == 2){
            answer = s.top();
        cout << answer << endl;
        }else if(query[i] == 3){
            s.pop();
        }
    }
}
