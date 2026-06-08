#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    map<string, int> Map;
    for(int i = 0; i <= n - k; i++){
        string t = s.substr(i, k);
        if(Map.count(t) == 0){
            Map[t] = 1;
        }else{
            Map[t] += 1;
        }
    }

    int maxnum = 0;
    for(auto p : Map){
        if(p.second >= maxnum){
            maxnum = p.second;
        }
    }

    cout << maxnum << endl;

    for(auto p : Map){
        if(p.second == maxnum){
            cout << p.first << " ";
        }
    }
    cout << endl;

}