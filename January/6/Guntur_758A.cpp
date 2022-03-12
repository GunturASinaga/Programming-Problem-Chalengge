#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int max = 0;
    int total = 0;
    for(int i = 0; i < n; i++){
        int in; cin >> in;
        total += in;
        if(max < in){
            max = in;
        }
    }
    cout << (max*n) - total << endl;
}