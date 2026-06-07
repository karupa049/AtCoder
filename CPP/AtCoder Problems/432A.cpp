#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> array(3);
    for(int i = 0; i < 3; i++) cin >> array[i];
    sort(array.rbegin(), array.rend());    
    for(int i = 0; i < 3; i++) cout << array[i]; cout << endl;
}

