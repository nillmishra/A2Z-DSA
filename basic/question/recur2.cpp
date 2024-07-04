#include<iostream>
using namespace std;

#include<iostream>
using namespace std;
void recur(int n, int a){
    if(a>n){
        return;
    }
    cout << n << " ";
    recur(n-1, a);
}
int main(int argc, char const *argv[])
{
    int n; 
    cin >> n;
    recur(n, 1);
    return 0;
}