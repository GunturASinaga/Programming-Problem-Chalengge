#include <bits/stdc++.h>

using namespace std;

void solve(int a,int b,int c){
    int total = 0;
    while(a <= c && b <= c){
        if(a < b){
            a += b;
        } else{
            b += a;
        } 
        total++;
    }
    cout << total << endl;
}

int main(){
    int n;
    cin >> n;
    int b[n][3];

    for(int i = 0; i < n; i++){
        cin >> b[i][0];
        cin >> b[i][1];
        cin >> b[i][2];
    }

    for(int i =0; i < n; i++){
        solve(b[i][0], b[i][1], b[i][2]);
    }
}