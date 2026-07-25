#include <iostream>
using namespace std;

int main() {
    int h, w;
    cin >> h >> w;

    if (10000 * w >= 25 * h * h){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;;
    }
}