#include <iostream>

using namespace std;

int main(){
    int a;
    cin >> a;
    int total = 0;

    for(int i = 0; i < a; i++){
        int s = 0;
        for(int j = 0; j < 3; j++){
            int masuk;
            cin >> masuk;
            s += masuk;
        }
        if(s > 1){
            total++;
        }
    }

    cout << total << endl;
}