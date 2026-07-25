#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<char> a(n);
    vector<char> b(n);
    for(int i = 0; i < n; i++) cin >> a[i] >> b[i];
    // for(int i = 0; i < n; i++) cout << a[i] << b[i] << endl;

    int count = 0;
    for(int i = 0; i < n; i++){
        if(a[i] == 'G' and b[i] == 'C'){
            count++;
        }else if(a[i] == 'C' and b[i] == 'P'){
            count++;
        }else if(a[i] == 'P' and b[i] == 'G'){
            count++;
        }
    }
    cout << count << endl;
}