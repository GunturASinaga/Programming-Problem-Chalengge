#include <bits/stdc++.h>

using namespace std;

void solve(string a){
    int sum1, sum2;
    sum1 = sum2 = 0;

    for(int i =0; i < 3; i++){
        sum1 += a[i] - '0';
    }

    for(int i = 3; i < 6; i++){
        sum2 += a[i] - '0';
    }

    if(sum1 == sum2){
        cout << "YES" << endl;
    } else{
        cout << "NO" << endl;
    }
}

int main(){
    int n;
    cin >> n;
    string a[n];

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i =0; i <n; i++){
        solve(a[i]);
    }
}