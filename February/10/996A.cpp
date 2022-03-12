#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    cin >> n;

    int a[5] = {1,5,10,20,100};
    int total = 0;

    for(int i = 4; i >= 0; i--){
        while(n - a[i] >=0){
        n -= a[i];
        total++;
        }
    }
    

    cout << total << endl;
}