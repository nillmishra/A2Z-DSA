#include<iostream>
using namespace std;

//parameterised

void sumnth(int i, int sum){
    if(i < 1){
         cout << sum;
        return;
    }
    sumnth(i-1, sum + i);

}
 int main(int argc, char const *argv[])
 {
    int n;
    cin >> n;
    sumnth(n, 0);
    return 0;
 }
 