#include <iostream>

using namespace std;

int geti(int n){
    int total = 0;
    for(int i = 1; i <= n; i++){
        total += i;
    }
    return total;
}

int main(){
    int a;
    cin >> a;
    int k = 0;

    while((a - geti(k+1) >= 0)){
        k++;
        a -= geti(k);
    }

    cout << k << endl;
}
