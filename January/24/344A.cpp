#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int total = 1;

    string a;

    for(int i = 0; i < n; i++){
        
        if(i != 0){
            string masuk;
            cin >> masuk;
            if(a != masuk){
                total++;
                a = masuk;
            }
        } else{
            cin >> a;
        }
    }

    cout << total << endl;
}