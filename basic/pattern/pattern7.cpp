#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 1; i <= n; i++){
        for(int j = i  ; j >= 1; j--){
            cout << j ;
        }
        cout << endl;
    }
}

int main(){
	int n = 5;
	pattern(n);
	return 0;
}