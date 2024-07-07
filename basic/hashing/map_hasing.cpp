#include<bits/stdc++.h>
#include<map>
using namespace std;

int main(){
    int n ;
    cin >> n;
    int arr[n];
    map<int, int> hash;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        hash[arr[i]]++;
    }

    //hashing
    // map<int, int> hash;
    // for(int i = 0; i < n; i++){
    //     hash[arr[i]]++;
    // }
    int q;
    cin >> q;
    while(q--){
        int number;
        cin >> number;
        //fetch
        cout << hash[number] << endl;
    }
}