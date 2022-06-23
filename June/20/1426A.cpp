#include <bits/stdc++.h>

using namespace std;

void solve(int apart, int n){
    int floor = 1;
    int apartInFloor = 2;
    if(apart <= apartInFloor){
        cout << floor << endl;
    } else{
        while(apart > apartInFloor){
            apartInFloor += n;
            floor++;
        }
        cout << floor << endl;
    }
}

int main(){
    int a; cin >> a;
    int n[a][2];

    for(int i = 0; i < a; i++){
        cin >> n[i][0];
        cin >> n[i][1];
    }

    for(int i = 0; i < a; i++){
        solve(n[i][0], n[i][1]);
    }
}