#include<bits/stdc++.h>
using namespace std;

int get(string s){
    if(s == "Ocelot"){
        return 1;
    }else if(s == "Serval"){
        return 2;
    }else if(s == "Lynx"){
        return 3;
    }
    return 0;
}

int main(){
    string x, y;
    cin >> x >> y;

    if(get(x) >= get(y)){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }

}