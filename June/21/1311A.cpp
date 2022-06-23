#include <bits/stdc++.h>

using namespace std;

void solve(int a, int b){
    if(a == b){
        cout << 0 << endl;
    }else if(b-a == 1){ // b is bigger than a 
            cout << 1 << endl;
    }else if(a - b == 2){// a is bigger than b
        cout << 1 << endl;
    } else if((a - b) >0 &&((a - b) % 2 == 0)){// a is bigger than b and the difference is even
        cout << 1 << endl;
    } else if((b - a) % 2 == 1){// b is bigger  than a and the difference is odd
        cout << 1 << endl;
    } else{
        cout << 2 << endl;
    }
}

int main(){
    int n;
    cin >> n;
    int angka[n][2];

    for(int i = 0; i < n; i++){
        cin >> angka[i][0];
        cin >> angka[i][1];
    }

    for(int i = 0; i < n; i++){
        solve(angka[i][0], angka[i][1]);
    }
}