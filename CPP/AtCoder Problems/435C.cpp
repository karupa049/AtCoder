#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> domino(n + 1);
    for(int i = 1; i <= n; i++) cin >> domino[i];
    // for(int i = 1; i <= n; i++) cout << domino[i] << " "; cout << endl;


    int max_reach = 0;
    int reach = 0;
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(i == 1){
            max_reach = i + domino[i];
            count++;
        }else if(i < max_reach){
            reach = i + domino[i];
            count++;
            if(reach > max_reach){
                max_reach = reach;
            }
        }else if(i >= max_reach){
            break;
        }
    }
    cout << count << endl;
}