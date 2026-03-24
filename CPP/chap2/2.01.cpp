#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    cin >> a;

    vector<int> vec(5);
    for(int i = 0; i < vec.size(); i++){
        cin >> vec[i];
    }

    int count = 0;
    for(int i = 0; i < vec.size(); i++){
        if(a == vec[i]){
            count++;
        }
    }

    cout << count << endl;

    for(int i = 0; i < vec.size(); i++){
        cout << vec[i] << " ";
    }
    cout << endl;
    
}