#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin >> q;

    vector<int> count_history = {0}; 
    vector<int> min_history = {0};   

    for(int i = 0; i < q; i++){
        int type;
        cin >> type;
        
        if(type == 1){
            char c;
            cin >> c;

            int current_count = count_history.back();
            if(c == '('){
                current_count++;
            }else{
                current_count--;
            }

            count_history.push_back(current_count);
            min_history.push_back(min(min_history.back(), current_count));
            
        }else{
            if(count_history.size() > 1){
                count_history.pop_back();
                min_history.pop_back();
            }
        }

        if(min_history.back() >= 0 && count_history.back() == 0){
            cout << "Yes" << "\n"; 
        }else{
            cout << "No" << "\n";
        }
    }
    
    return 0;
}