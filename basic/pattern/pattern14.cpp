#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n; i++){
        for(int j =0; j < i+1; j++){
            char sol = 'A' + n -j;
            cout << sol;
        }
        cout << endl;
    }
}

int main(){
	int n = 5;
	pattern(n);
	return 0;
}