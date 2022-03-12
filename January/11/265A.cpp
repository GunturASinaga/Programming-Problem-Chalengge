#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    cin >> a >> b;
    int posisi = 0;

    for(int i = 0; i < b.size(); i++){
        if(b[i] == a[posisi]){
            posisi++;
        }
    }

    cout << posisi + 1 << endl;
}