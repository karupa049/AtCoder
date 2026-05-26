#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> array(n);
    for(int i = 0; i < n; i++) cin >> array[i];
    // for(int i = 0; i < n; i++) cout << array[i] << " "; cout << endl;

    // int co = 0;
    // for(int i = 0; i < n; i++){
    //     for(int j = i + 1; j < n; j++){
    //         if(array[i] > array[j]){
    //             co = array[i];
    //             array[i] = array[j];
    //             array[j] = co; 
    //         }
    //     }
    // }

    sort(array.begin(), array.end());

    // for(int i = 0; i < n; i++) cout << array[i] << " "; cout << endl;

    int q;
    cin >> q;

    for(int i = 0; i < q; i++){
        int x;
        cin >> x;

        int count = lower_bound(array.begin(), array.end(), x) - array.begin();

        cout << count << endl;
    }

}