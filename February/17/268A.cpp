#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int total = 0;
    int home[n], away[n];

    for(int i = 0; i < n; i++){
        cin >> home[i] >> away[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(home[i] == away[j]){
                total++;
            }            
        }
    }

    cout << total << endl;
}