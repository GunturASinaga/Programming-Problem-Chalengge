#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int total = 0;

    for(int a = 5; a > 0; a--){
        while(n - a >= 0){
            n -= a;
            total++;
            
        }
    }

    cout << total << endl;
}