#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;

    vector<int> array(q + 1);
    for(int i = 1; i <= q; i++) cin >> array[i];
    // for(int i = 1; i <= q; i++) cout << array[i] << " "; cout << endl;

    bool onof = false;
    int volume = 0;

    for(int i = 1; i <= q; i++){
        if(array[i] == 1){
            volume = volume + 1;
        }else if(array[i] == 2){
            if(volume >= 1){
                volume = volume - 1;
            }
        }else if(array[i] == 3){
            if(onof == true){
                onof = false;
            }else{
                onof = true;
            }
        }

        if(volume >= 3 and onof == true){
            cout << "Yes" << endl;
        }else{
            cout << "No" << endl;
        }
    }
}
