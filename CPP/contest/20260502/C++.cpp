#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    string s;
    cin >> s;

    int count = 0;

    for(int i = 0; i < s.length(); i++){
        for(int j = 1; i + j <= s.length(); j++){
            string bunbun = s.substr(i, j);
            
            bool flag = true; 

            for(int k = 0; k < (int)bunbun.length() - 1; k++){
                if(bunbun[k] == bunbun[k + 1]){
                    flag = false;
                    break;
                }
            }
            if (flag == true) {
                count++;
            }
        }
    }
    int ans = 0;

    ans = count % 998244353;
    cout << ans << endl;
}