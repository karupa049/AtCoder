#include<bits/stdc++.h>
using namespace std;

int main(){
    // 50 50 50 10
    int n;
    cin >> n;

    vector<string> s(n + 1);
    for(int i = 1; i <= n; i++) cin >> s[i];
    // for(int i = 1; i <= n; i++) cout << s[i] << " "; cout << endl;

    map<string, int> map;

    for(int i = 1; i <= n; i++){
        string index = s[i];

        if(map.count(index) == 0){
            map[index] = 1;
        }else{
            map[index] = map[index] + 1;
        }
    }

    // for(auto p : map){
    //     cout << "index : " << p.first << ", num : " << p.second << endl;
    // }

    cout << map.size() << endl;


}