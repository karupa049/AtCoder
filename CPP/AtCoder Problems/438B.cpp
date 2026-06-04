#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    string s, t;

    cin >> n >> m >> s >> t;
    // cout << n << m << s << t << endl;

    //文字列をTを変形させて、文字列Sの部分文字列にするのに最小の操作回数は？？


    int mini = 100000000;


    for(int i = 0; i <= n - m; i++){
        int current_sum = 0;
        for(int j = 0; j < m; j++){
            char s_char = s[i + j];
            char t_char = t[j];

            if(s_char> t_char){
                current_sum += s_char - t_char;
            }else if(s_char < t_char){
                current_sum += s_char - t_char + 10;
            }else{
                current_sum += 0;
            }

        }
        if(current_sum < mini){
            mini = current_sum;
        }

    }


    cout << mini << endl;




}