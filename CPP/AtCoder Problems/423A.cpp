// #include<bits/stdc++.h>
using namespace std;

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <string>

int main(){
    int x, c;
    cin >> x >> c;

    int result = x / (c + 1000);
    result = result * 1000;

    cout << result << endl;
    
}