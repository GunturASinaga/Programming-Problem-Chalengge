#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; 
    cin >> n;
    int total = 0;

    for(int i = 0 ;i < n; i++){
        string m;
        cin >> m;
        if(m == "Tetrahedron"){
            total += 4;
        } else if( m == "Cube"){
            total += 6;
        } else if( m == "Octahedron"){
            total += 8;
        } else if( m == "Dodecahedron"){
            total += 12;
        } else if( m == "Icosahedron"){
            total += 20;
        }
    }

    cout << total << endl;
}