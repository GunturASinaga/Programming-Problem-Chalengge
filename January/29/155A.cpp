#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int contest[n];

    for(int i = 0; i < n; i++){
        cin >> contest[i];
    }

    int min, max;
    min = max = contest[0];

    int amaz = 0;

    for(int i = 1; i < n; i++){
        if(contest[i] > max){
            amaz++;
            max = contest[i];
        } else if(contest[i] < min){
            amaz++;
            min = contest[i];
        }
    }

    cout << amaz << endl;
}