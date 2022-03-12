#include <bits/stdc++.h>

using namespace std;

int main(){
    string sa;
    cin >> sa;
    set <char> s;
    for(int i = 0; i < sa.size(); i++){
        s.insert(sa[i]);
    }

    if(s.size() % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
    } else{
        cout << "IGNORE HIM!" << endl;
    }
}