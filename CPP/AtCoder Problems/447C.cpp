#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;

    string notas;
    for(int i = 0; i < s.length(); i++){
        if(s[i] != 'A'){
            notas += s[i];
        }
    }

    string notat;
    for(int i = 0; i < t.length(); i++){
        if(t[i] != 'A'){
            notat += t[i];
        }
    }

    // cout << notas << endl;
    // cout << notat << endl;

    if(notas != notat){
        cout << -1 << endl;
        return 0;
    }
    // else{
    //     cout << "onaji" << endl;
    // }

    vector<int> notAindex(t.length());

    for(int i = 0; i < notAindex.size(); i++){
        if(t[i] != 'A'){
            notAindex[i] = 1;
        }else{
            notAindex[i] = 0;
        }
    }

    // for(int i = 0; i< notAindex.size(); i++){
    //     cout << notAindex[i] << " ";
    // }
    // cout << endl;

    vector<int> notAindexS(s.length());

    for(int i = 0; i < notAindexS.size(); i++){
        if(s[i] != 'A'){
            notAindexS[i] = 1;
        }else{
            notAindexS[i] = 0;
        }
    }

    // for(int i = 0; i < notAindexS.size(); i++){
    //     cout << notAindexS[i] << " ";
    // }
    // cout << endl;

    // cout << "--------------------------------------------------------" << endl;
    //push_backするのは1を見つけたタイミングか？？

    int counter = 0;
    vector<int> serchAs;
    for(int i = 0; i < s.length(); i++){
        if(s[i] == 'A'){
            counter++;
        }else{
            serchAs.push_back(counter);
            counter = 0;
        }
    }
    serchAs.push_back(counter);

    // for(int i = 0; i < serchAs.size(); i++){
    //     cout << serchAs[i] << " ";
    // }
    // cout << endl;
    // cout << "--------------------------------------------------------" << endl;

    counter = 0;
    vector<int> serchAt;
    for(int i = 0; i < t.length(); i++){
        if(t[i] == 'A'){
            counter++;
        }else{
            serchAt.push_back(counter);
            counter = 0;
        }
    }
    serchAt.push_back(counter);

    // for(int i = 0; i< serchAt.size(); i++){
    //     cout << serchAt[i] << " ";
    // }
    // cout << endl;

    // cout << "--------------------------------------------------------" << endl;

    int sum = 0;
    for(int i = 0; i < serchAs.size(); i++){
        sum = sum + abs(serchAs[i] - serchAt[i]);
    }

    cout << sum << endl;
}

