#include <bits/stdc++.h>

using namespace std;

void solve(int i, int j){
    cout << abs(2-i) + abs(2-j) << endl;
}

int main(){
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            int a;
            cin >> a;
            if(a == 1){
                solve(i, j);
            }
        }
    }
}