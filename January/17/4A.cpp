#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;

    if(a % 4 == 0){
        cout << "YES" << endl;
    } else{
        if(a == 2){
            cout << "NO" << endl;
        } else{
            a -= 2;
        if(a % 2 == 0){
            cout << "YES" << endl;
        } else{
            cout << "NO" << endl;
        }
        }
    }
}