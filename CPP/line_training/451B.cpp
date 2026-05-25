#include<bits/stdc++.h>
using namespace std;

/*
===========================================================
【問題文】
あなたの手元に N 人のプロフィールデータ（名前と年齢）があります。
この N 人を、以下のルールに従って並べ替えて出力するプログラムを書いてください。

1. 基本ルール: 年齢が「若い（小さい）」順に並べる。
2. 同点ルール: もし年齢が全く同じ人がいた場合は、名前の「辞書順（アルファベット順）」で早い方を前にする。

【入力例】
4
Takahashi 25
Aoki 20
Snuke 20
Yandex 30

【出力例】
(※出力前に件数などのデバッグ出力が含まれます)
-------------------------------------------------------
1 ha Aoki de 20 desu
2 ha Snuke de 20 desu
3 ha Takahashi de 25 desu
4 ha Yandex de 30 desu
===========================================================
*/

struct Person{
    string name;
    int age;
};

bool comparePerson(Person a, Person b){
    if(a.age != b.age){
        return a.age < b.age;
    }else{
        return a.name < b.name;
    }
}

int main(){
    int n;
    cin >> n;
    cout << n << endl;

    vector<Person> array;

    for(int i = 0; i < n; i++){
        string last;
        cin >> last;
        int old;
        cin >> old;

        Person p1;
        p1.name = last;
        p1.age = old;

        array.push_back(p1);
    }

    for(int i = 0; i < array.size(); i++){
        cout << i + 1 << " ha " << array[i].name << " de " << array[i].age << " desu" << endl;
    }

    sort(array.begin(), array.end(), comparePerson);

    cout << "-------------------------------------------------------" << endl;

    for(int i = 0; i < array.size(); i++){
        cout << i + 1 << " ha " << array[i].name << " de " << array[i].age << " desu" << endl;
    }

    //arrayとp1とでそれぞれPerson型を宣言しているからそれぞれに.name.ageが使えてる？
    //sortに条件追加される。arrayはPerson型、intの場合はsortの条件は決まっているが、Person型は何を比較すればいいかわかっていないため、教えてあげる

}