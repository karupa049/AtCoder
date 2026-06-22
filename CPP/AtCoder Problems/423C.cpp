// #include<bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

int main(){
    int n, r;
    cin >> n >> r;

    vector<int> array(n + 1);
    for(int i = 1; i <= n; i++) cin >> array[i];
    int min_pos = -1;
    int max_pos = -1;

    int count = 0;
    for(int i = 1; i <= n; i++){
        if(array[i] == 0){
            count++;
            if(min_pos == -1) min_pos = i;
            max_pos = i;
        }
    }

    if(count == 0){
        cout << 0 << endl;
        return 0;
    }

    int r_start = abs(r - min_pos) + (max_pos - min_pos);
    int l_start = abs(r - max_pos) + (max_pos - min_pos);
    int distance = min(r_start, l_start);

    cout << count + distance << endl;
}