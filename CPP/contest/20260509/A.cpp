#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> array(n);
    for(int i = 0; i < array.size(); i++) cin >> array[i];

    int x;
    cin >> x;

    cout << array[x - 1] << endl;


}