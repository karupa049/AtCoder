#include<bits/stdc++.h>
using namespace std;

bool has(vector<int> a){
    set<int> s;
    for(int x : a){
        if(s.count(x) > 0){
            return true;
        }
        s.insert(x);
    }
    return false;
}

int main(){
    int n;
    cin >> n;
    vector<int> array(n + 1);

    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;
    vector<int> tekitou;

    for(int i = 1; i <= n; i++){
        if(array[i] == -1){
            continue;
        }
        tekitou.push_back(array[i]);
    }

    // for(int i = 0; i < tekitou.size(); i++) cout << tekitou[i] << " "; cout << endl;

    int size = tekitou.size();
    if(has(tekitou)){
        cout << "No" << endl;
    }else{
        cout << "Yes" << endl;
        vector<int> missing;
        vector<bool> exists(n + 1, false); 

        for(int x : tekitou) {
            if(x != -1) exists[x] = true;
        }

        for(int i = 1; i <= n; i++) {
            if(!exists[i]) {
                missing.push_back(i); 
            }
        }

        for(int x : missing) {
            tekitou.push_back(x);
        }

        for(int i = 0; i < tekitou.size(); i++){
            cout << tekitou[i] << " ";
        }
        cout << endl;
    }
}