#include <bits/stdc++.h>

using namespace std;

int main(){
    vector <int> v;

    for(int i = 0; i < 4; i++){
         int a; cin >> a;
         v.push_back(a);
    }

    sort(v.begin(), v.end());

    for(int i = 0; i < 3; i++){
        cout << v[3] - v[i] << " ";
    }
    cout << endl;
}