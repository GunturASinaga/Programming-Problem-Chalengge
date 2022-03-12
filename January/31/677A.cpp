#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;
    int nh[n];

    for(int i = 0; i < n; i++){
        cin >> nh[i];
    }

    int total = 0;

    for(int i = 0; i < n; i++){
        if(nh[i] > h){
            total += 2;
        } else{
            total++;
        }
    }

    cout << total << endl;
}