#include<iostream>
using namespace std;

void back( int i, int n){
    if(i > n){
        return;
    }
    back(i+1, n);
    cout << i << " ";
}
int main(int argc, char const *argv[])
{
    int n; 
    cin >> n;
    back(1, n);
    return 0;
}