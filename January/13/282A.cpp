#include <bits/stdc++.h>

using namespace std;

int main(){
    int a;
    cin >> a;

    int k = 0; 

    for(int i = 0; i < a; i++){
        string s;
        cin >> s;
        if(s == "++X" or s == "X++"){
            k++;
        } else{
            k--;
        }
    }
    
    cout << k << endl;
}