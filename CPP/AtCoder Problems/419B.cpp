#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;

    vector<int> array;

    for(int i = 1; i <= q; i++){
        int type;
        cin >> type;

        if(type == 1){
            int x;
            cin >> x;
            array.push_back(x);
        }else{
            sort(array.begin(), array.end());
            cout << array[0] << endl;
            array.erase(array.begin());
        }
    }
}