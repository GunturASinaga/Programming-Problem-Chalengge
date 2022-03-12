#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a, b;
    a = b = 0;

    for(int i = 0; i < n; i++){
        int m, c;
        cin >> m >> c;
        if(m > c){
            a++;
        } else if(m < c){
            b++;
        } 
    }

    if(a > b){
        cout << "Mishka" << endl;
    } else if( b > a){
        cout << "Chris" << endl;
    } else{
        cout << "Friendship is magic!^^" << endl;
    }
}