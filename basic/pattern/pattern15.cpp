#include<iostream>
using namespace std;

void pattern(int n){
    for(int i = 1; i <=n; i++){
        for(int j =0  ; j < i; j++){
            cout << "*" ;
        }
        for(int j =0; j <=2*(n-i)-1; j++ ){
            cout << " ";
        }
        for(int j =0  ; j < i; j++){
            cout << "*" ;
        }

        cout << endl;
    }

    for(int i = 0; i < n-1; i++){
        for(int j =0  ; j < n -i-1; j++){
            cout << "*" ;
        }
        for(int j =0; j <2*(i)+2; j++ ){
            cout << " ";
        }
        for(int j =0  ; j < n -i-1; j++){
            cout << "*" ;
        }
        cout << endl;
    }
}

int main(){
	int n = 3;
	pattern(n);
	return 0;
}