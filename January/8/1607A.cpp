#include <iostream>

using namespace std;

int findPosition(string key, char alpa){
    for(int i = 0; i < 26; i++){
        if(alpa == key[i]){
            return i;
        }
    }
    return -1;
}

void solve(string key, string word){
    int pos[2];
    int total = 0;

    for(int i = 1; i < word.size(); i++){
        pos[0] = findPosition(key, word[i-1]);
        pos[1] = findPosition(key, word[i]);
        total += abs(pos[0] - pos[1]);
    }

    cout << total << endl;
}

int main(){
    int n;cin >> n;
    string key[n];
    string word[n];

    for(int i = 0; i < n; i++){
        cin >> key[i];
        cin >> word[i];
    }

    for(int i = 0; i < n; i++){
        solve(key[i], word[i]);
    }
}