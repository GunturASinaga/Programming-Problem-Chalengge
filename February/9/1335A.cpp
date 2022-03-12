#include <bits/stdc++.h>

using namespace std;

void solve(int s){
    if(s > 2){
        if(s % 2 == 0){
            cout << s/2-1 << endl;
        } else{
            cout << s/2 << endl;
        }
    } else{
        cout << 0 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    
    int k[n];

    for(int i = 0; i < n; i++){
        cin >> k[i];
    }

    for(int i = 0; i < n; i++){
        solve(k[i]);
    }
}