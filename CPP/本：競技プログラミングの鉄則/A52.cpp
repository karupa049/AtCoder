#include<bits/stdc++.h>
using namespace std;
#include <queue>

int main(){
    int q;
    cin >> q;

    vector<int> array(q + 1);
    vector<string> moji(q + 1);

    for(int i = 1; i <= q; i++){
        cin >> array[i];
        if(array[i] == 1){
            cin >> moji[i];
        }
    }
    
    // for(int i = 1; i <= q; i++) cout << array[i] << " "; cout << endl;
    // for(int i = 1; i <= q; i++) cout << moji[i] << " "; cout << endl;

    queue<string> sakamoto;
    string answer;
    for(int i = 1; i <= q; i++){
        if(array[i] == 1){
            sakamoto.push(moji[i]);
        }else if(array[i] == 2){
            answer = sakamoto.front();
            cout << answer << endl;
        }else if(array[i] == 3){
            sakamoto.pop();
        }
    }
    
}