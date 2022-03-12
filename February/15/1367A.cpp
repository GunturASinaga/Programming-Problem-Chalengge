#include <bits/stdc++.h>

using namespace std;

void solve(string s){
    for(int i = 0; i < s.size(); i += 2){
        cout << s[i];
    }

    cout << s[s.size() - 1] << endl;
}

int main(){
    int n;
    cin >> n;

    string s[n];

    for(int i = 0; i < n; i++){
        cin >> s[i];
    }

    for(int i = 0; i < n; i++){
        solve(s[i]);
    }
}