#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;

    map<string, int> Map;

    for(int i = 0; i < q; i++){
        int type;
        cin >> type; 

        if(type == 1){
            string x;
            int y;
            cin >> x >> y; 
            Map[x] = y; 

        }else if(type == 2){
            string x;
            cin >> x; 
            cout << Map[x] << endl;
        }
    }
}