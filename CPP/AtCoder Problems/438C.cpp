#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    //array.size()が最小になるものは？
    // 10
    // 1 1 1 4 4 4 4 1 2 3
    vector<int> copy;
    for(int i = 1; i <= n; i++){
        copy.push_back(array[i]);
        if(copy.size() >= 4){
            int sz = copy.size();
            if(copy[sz - 1] == copy[sz - 2] and copy[sz - 2] == copy[sz - 3] and copy[sz - 3] == copy[sz - 4]){
                copy.pop_back();
                copy.pop_back();
                copy.pop_back();
                copy.pop_back();
            }
        }
    }

    // for(int i = 0; i < copy.size(); i++){
    //     cout << copy[i] << " ";
    // }cout << endl;

    cout << copy.size() << endl;

}