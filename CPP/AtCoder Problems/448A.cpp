#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;

    vector<int> array(n);
    for(int i = 0; i < n; i++) cin >> array[i];
    //for(int i = 0; i < n; i++) cout << array[i] << " "; cout << endl;

    for(int i = 0; i < n; i++){
        if(array[i] < x){
            x = array[i];
            cout << 1 << endl;
        }else{
            cout << 0 << endl;
        }
    }


}