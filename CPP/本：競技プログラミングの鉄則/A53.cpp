#include<bits/stdc++.h>
using namespace std;
#include <queue>

int main(){
    int q;
    cin >> q;

    vector<int> array(q + 1);
    vector<int> moji(q + 1);

    for(int i = 1; i <= q; i++){
        cin >> array[i];
        if(array[i] == 1){
            cin >> moji[i];
        }
    }

    // for(int i = 1; i <= q; i++) cout << array[i] << " "; cout << endl;
    // for(int i a= 1; i <= q; i++) cout << moji[i] << " "; cout << endl;

    priority_queue<int , vector<int>, greater<int>> prio;
    int ans;

    for(int i = 1; i <= q; i++){
        if(array[i] == 1){
            prio.push(moji[i]);
        }else if(array[i] == 2){
            ans = prio.top();
            cout << ans << endl;
        }else if(array[i] == 3){
            prio.pop();
        }
    }



}