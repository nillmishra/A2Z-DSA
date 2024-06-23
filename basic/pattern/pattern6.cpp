#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 0; i < n; i++){
        for(int j =1; j <= i + 1; j++){
            cout << j ;
        }
        for(int j = 1; j <2*(n-i) - 1; j++){
            cout <<  "*";
        }
        for(int j = i + 1 ; j >= 1; j--){
            cout << j ;
        }
        cout << endl;
    }
}

int main(int argc, char const *argv[]){
	int n = 5;
	pattern(n);
	return 0;
}
