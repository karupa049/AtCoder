#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> raw(n + 1);
    for(int i = 1; i <= n; i++) cin >> raw[i];
    // for(int i = 1; i <= n; i++) cout << raw[i] << " "; cout << endl;
    
    map<int, int> zipmap;

    for(int i = 1; i <= n; i++){
        int index = raw[i];

        if(zipmap.count(index) == 0){
            zipmap[index]  = 1;
        }else{
            zipmap[index] = zipmap[index] + 1;
        }
    }

    // for(auto p : zipmap){
    //     cout << "index : " << p.first << ", num : " << p.second <<endl;
    // }

    int rank = 1;
    for(auto p : zipmap){
        zipmap[p.first] = rank;
        rank++;
    }

    // for(auto p : zipmap){
    //     cout << "index : " << p.first << ", num : " << p.second << endl;
    // }

    for(int i = 1; i <= n; i++) cout << zipmap[raw[i]] << " "; cout << endl;


}