#include<iostream>
using namespace std;


void nForest(int n){
	for(int i= 0; i < n; i++){
		for(int j = 0; j <= i; j++){
            if(j%2==0){
                cout << "1";
            }
            else{
                cout<< "0";
            }
			
		}
		cout << endl;
	}
}
int main(){
	int n = 7;
	nForest(n);
	return 0;
}