#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int p,q;
    set <int> k;    

    cin >> p;
    for(int i = 0 ;i < p; i++){
        int masukan;
        cin >> masukan;
        k.insert(masukan);
    }

    cin >> q;
    for (int i = 0; i < q; i++){
        int masukan;
        cin >> masukan;
        k.insert(masukan);
    }

    if(k.size() == n){
        cout << "I become the guy." << endl;
    } else{
        cout << "Oh, my keyboard!" << endl;
    }
}