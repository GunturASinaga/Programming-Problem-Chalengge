#include <bits/stdc++.h>

using namespace std;

void solve(vector <int> k){
    sort(k.begin(), k.end());

    int max = 1000;

    for(int i = 0; i < k.size() - 1; i++){
        if(k[i + 1] - k[i] < max){
            max = k[i + 1] - k[i];
        }
    }

    cout << max << endl;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int>> a;

    for(int i = 0; i < n; i++){
        vector<int> b;
        int u; cin >> u;
        for(int i = 0; i < u; i++){
            int masuk; cin >> masuk;
            b.push_back(masuk);
        }
        a.push_back(b);
    }

    for(int i = 0; i < n; i++){
        solve(a[i]);
    }
}