#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;

    vector<int> centerC;

    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'C'){
            centerC.push_back(i);
        }
    }

    long long result = 0;
    for(int i = 0; i < centerC.size(); i++){
        int left = centerC[i];
        int right = (s.length() - 1) - centerC[i];
        int count = min(left, right);

        result = result + count + 1;
    }
    cout <<  result << endl;

    /*
    for(int i : centerC){
        cout << i << " ";
    }
    cout << endl;
    */



}