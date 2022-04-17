#include <bits/stdc++.h>

using namespace std;

int solve(int n){

    int i = 1;
    int k = 1;
    int total = 0;
    while(i < 10){
        int temp = i;
        int powe = 0;
        while(temp < 10000){
            powe++;
            total += powe;
            if(temp == n){
                return total;
            }
            k *= 10;
            temp += i * k;
            
            
        }
        k = 1;
        i++;
    }
    return -1;
}

int main(){
    int k; 
    cin >> k;
    for(int i = 0; i < k; i++){
        int some;
        cin >>  some;
        cout << solve(some) << endl;
    }
}