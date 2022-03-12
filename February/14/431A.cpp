#include <bits/stdc++.h>

using namespace std;

int main(){
    int k[4];
    string p;
    cin >> k[0] >> k[1] >> k[2] >> k[3];
    cin >> p;
    int total = 0;


    for(int i = 0; i < p.size(); i++){
        if(p[i] == '1'){
            total += k[0];
        } else if(p[i] == '2'){
            total += k[1];
        } else if(p[i] == '3'){
            total += k[2];
        } else if(p[i] == '4'){
            total += k[3];
        }
    }

    cout << total << endl;
}