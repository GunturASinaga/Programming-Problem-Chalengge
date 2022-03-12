#include <bits/stdc++.h>

using namespace std;

int main(){
    string s;
    cin >> s;
    vector <char> k;

    for(int i = 0; i < s.size(); i += 2){
        k.push_back(s[i]);
    }

    sort(k.begin(), k.end());

    cout << k[0];

    for(int i = 1; i < k.size(); i++){
        cout << "+" << k[i];
    }
    cout << endl;
}