#include <bits/stdc++.h>

using namespace std;

int main(){
    int n[4], e;
    for(int i= 0; i < 4; i++){
        cin >> n[i];
    }
    
    cin >> e;
    bool a[e];

    for(int i = 0; i < e; i++){
        a[i] = false;
    }

    for(int i = 0; i < 4; i++){
        for(int j = n[i] - 1; j < e; j += n[i]){
            if(a[j] == false){
                a[j] = true;
            }
        }
    }

    int total = 0;

    for(int i= 0; i <e ; i++){
        if(a[i] == true){
            
            total++;
        }
    }

    cout << total << endl;
}