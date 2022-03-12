#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    bool c = true;

    for(int i = 0; i < n; i++){
        int m;
        cin >> m;
        if(m == 1){
            c = false;
        }
    }

    if(c){
        cout << "EASY" << endl;
    } else{
        cout << "HARD" << endl;
    }
}