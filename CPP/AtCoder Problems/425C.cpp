#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;

    vector<int> array(n);
    for(int i = 0; i < n; i++) cin >> array[i];

    int currentPoint = 0;

    for(int i = 1; i <= q; i++){
        int type;
        cin >> type;

        if(type == 1){
            int swapcount;
            cin >> swapcount;

            for(int j = 1; j <= swapcount; j++){
                array.push_back(array[currentPoint]);
                currentPoint++;
            }


        }else{
            int l, r;
            cin >> l >> r;

            int sum = 0;
            for(int j = currentPoint + l - 1; j < currentPoint + r; j++){
                sum = sum + array[j];
            }
            cout << sum << endl; 


        }
    }
}