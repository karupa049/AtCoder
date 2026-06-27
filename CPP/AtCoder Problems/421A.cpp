#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<string> tower(n + 1);
    for(int i = 1; i <= n; i++) cin >> tower[i];
    // for(int i = 1; i <= n; i++) cout << tower[i] << " ";
    int x;
    string y;
    cin >> x >> y;

    if(tower[x] == y){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}