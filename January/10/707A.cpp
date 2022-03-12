#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    bool ac = true;

    for(int i = 0; i < a*b; i++){
        char a;
        cin >> a;
        if((a != 'B') and a != 'W' and a != 'G'){
            ac = false;
            break;
        }
    }
    if(ac){
        cout << "#Black&White" << endl;
    } else {
        cout << "#Color" << endl;
    }
}