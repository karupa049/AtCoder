#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n;
    cin >> n;
    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    map<int, int> countMap;

    for(int i = 1; i <= n; i++){
        int index = array[i];
        if(countMap.count(index) == 0){
            countMap[index] = 1;
        }else{
            countMap[index] += 1;
        }
    }

    // for(auto p : countMap){
    //     cout << "index : " << p.first << ", num : " << p.second << endl;
    // }

    ll result = 0;
    for(auto p : countMap){
        if(p.second < 2){
            continue;
        }else{
            result += (ll)p.second * (p.second - 1) / 2 * (n - p.second);
        }
    }

    cout << result << endl;
}