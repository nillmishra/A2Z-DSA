#include<iostream>
using namespace std;

int main(){
     string s;
    cin >> s;

    //hashing
    int hash[256] = {0};
    for(int i = 0; i < s.length(); i++){
        hash[s[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        //fetch
        cout << hash[c] << endl;
    }
}