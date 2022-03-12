#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;

    int capacity = 0;
    int passanger = 0;

    for(int i = 0; i < n -1; i++){
        int a, b;
        cin >> a >> b;
        passanger = passanger - a + b;
        if(passanger > capacity){
            capacity = passanger;
        }
    }

    cout << capacity << endl;
}