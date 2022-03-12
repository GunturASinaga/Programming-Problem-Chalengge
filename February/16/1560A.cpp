#include <bits/stdc++.h>

using namespace std;

bool satuan(int s);

void solve(int k){

    int p = 1;
    int awal = 1;


    for(int i = 0; i < k;){
        if((awal % 3) == 0 or satuan(awal)){
            awal++;
            
        } else{
            
            awal++;
            i++;
        }
    }
    cout << awal -1 << endl;
}

bool satuan(int s){
    while(s >= 10){
        s %= 10;
    }
    if(s == 3){
        return true;
    } else{
        return false;
    }
}

int main(){
    int n;
    cin >> n;
    int s[n];

    for(int i = 0 ;i < n; i++){
        cin >> s[i];
    }

    for(int i = 0; i < n; i++){
        solve(s[i]);
    }

}