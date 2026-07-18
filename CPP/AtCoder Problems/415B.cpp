#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> array;

    for(int i = 0; i < s.size(); i++){
        if(s[i] == '#'){
            array.push_back(i + 1);
        }
    }

    for(int i = 0; i < array.size(); i++){
        if(i % 2 == 0){
            cout << array[i] << ",";
        }else{
            cout << array[i] << endl;
        }
    }
}