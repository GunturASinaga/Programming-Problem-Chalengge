#include <bits/stdc++.h>

using namespace std;

int main(){
    string a,b;
    cin >> a >> b;

    for(int i = 0; i < a.size(); i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
    }

    short check = 0;

    for(int i = 0; i < a.size(); i++){
        if(a[i] < b[i]){
            check = -1;
            break;
        } else if(a[i] > b[i]){
            check = 1;
            break;
        }
    }

    cout << check << endl;

}