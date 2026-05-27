#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    // for(int i = 1; i <= n; i++) cout << array[i] << " "; cout << endl;

    map<int, int> Map;

    for(int i = 1; i <= n; i++){
        int index = array[i];

        if(Map.count(index) == 0){
            Map[index] = i;
        }
    }

    int count = 0;
    for(auto p : Map){
        if(count == 3){
            break;
        }
        cout << p.second << " ";
        count++;
    }
    cout << endl;

   


}