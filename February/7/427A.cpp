#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int tersedia, kejahatan, total;
    tersedia = kejahatan = total = 0;

    for(int i = 0; i < n; i++){
        //cout << "entry : " << i + 1 << " ";
        int a;
        cin >> a;
        if(a < 0){
            if(tersedia + a < 0){
                total++;
                //cout << "total : " << total;
            } else{
                tersedia += a;
            } 
        } else{
            tersedia += a;
            //cout << "tambah";
        }
        cout << endl;
    }

    cout << total << endl;
}