#include<iostream>
using namespace std;

void pattern(int n){
    char ch = 'A';
    for(int i = 0; i < n; i++){
        for (int j = 1; j <= n-i; j++){
            cout << "* ";
        }
        for(int j = 0; j < i+1; j++){
            char sol = ch + j;
           cout << sol << " ";
        }
        for(int j = i; j >= 1; j--){
            char sol = ch + j-1;
           cout << sol << " ";
        }
        cout << endl;
    }
}

int main(){
	int n = 5;
	pattern(n);
	return 0;
}