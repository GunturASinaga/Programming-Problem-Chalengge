#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; //people
    int k, l; //bottle, and amount
    int c, d; // limes and cut
    int p; // salt
    int nl, np;

    cin >> n >> k >> l >>  c >> d >> p >> nl >> np;

    int toast = k*l/nl;
    int limes = c*d;
    int salt = p/np;
    
    cout << min(min(toast/n,limes/n),salt/n)<< endl;
}