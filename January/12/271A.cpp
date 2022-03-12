#include <iostream>
#include <bits/stdc++.h>

using namespace std;

bool unik(int k){
    set<char> b;
    stringstream ss;

    ss << k;
    string s;
    ss >> s;

    for(int i =0; i < 4; i++){
        b.insert(s[i]);
    }

    if(b.size() == 4){
        return false;
    } else{
        return true;
    }
}

int main()
{
    int a;
    cin >> a;
    a++;

    while(unik(a)){
        a++;
    }

    cout << a << endl;
}