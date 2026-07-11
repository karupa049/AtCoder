#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    double rate = 0;
    int tcount = 0;
    double maxrate = 0;


    for(int i = 0; i < s.length(); i++){
        for(int j = 1; j <= s.length() - i; j++){
            string sub = s.substr(i, j);
            // cout << sub << endl;

            if(sub.length() >= 3){
                if(sub[0] == 't' and sub[sub.length() - 1] == 't'){
                    // cout << "hint : " << sub << endl;
                    for(int k = 0; k < sub.length(); k++){
                        if(sub[k] == 't'){
                            tcount++;
                        }
                    }
                    rate = (double)(tcount - 2) / (sub.length() - 2);
                    // cout << tcount << endl;
                    tcount = 0;
                    // cout << rate << endl;

                    if(rate >= maxrate){
                        maxrate = rate;
                    }
                }
            }
        }
    }

    // cout << "ans : " << maxrate << endl;
    cout << fixed << setprecision(17) << maxrate << endl;
    

}