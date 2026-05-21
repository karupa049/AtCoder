#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<int> ball(n + 1);
    for(int i = 1; i <= n; i++) cin >> ball[i];
    //for(int i = 1; i <= n; i++) cout << ball[i];

    cout << "------------------------------------------" << endl;

    for(int i = 0; i < q; i++){
        int k;
        cin >> k;

        vector<int> b(k);
        for(int j = 0; j < k; j++){
            cin >> b[j];
        }

        vector<int> original = ball;

        for(int i = 1; i <= n; i++){
            for(int j = 0; j < k; j++){
                if(i == b[j]){
                    ball[i] = 0;
                    break;
                }
            }
        }

        for(int i = 1; i <= n; i++) cout << ball[i] << " "; cout << endl;

        int mini = 1000000000;
        for(int i = 1; i <= n; i++){
            if(ball[i] != 0){
                if(mini > ball[i]){
                    mini = ball[i];
                }
            }
        }

        cout << "ans : " << mini << endl;

        for(int i = 0; i < k; i++){
            ball[b[i]] = original[b[i]];
        }

        for(int i = 1; i <= n; i++){
            cout << ball[i] << " ";
        }
        cout << endl;

        cout << "------------------------------------------" << endl;
    }

}