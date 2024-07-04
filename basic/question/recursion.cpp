#include<iostream>
using namespace std;
void recur(int a, int n){
    if(a>n){
        return;
    }
        cout << a << " ";
        recur(a+1,n);
}
int main(int argc, char const *argv[])
{
    int n; 
    cin >> n;
    recur(1,n);
    return 0;
}
// #include <iostream>
// using namespace std;

// void recur(int a, int n) {
//     if (a > n) {
//         return;
//     }
//     cout << a << " ";
//     recur(a + 1, n);
// }

// int main() {
//     int n; 
//     cin >> n;
//     recur(1, n);
//     return 0;
//}
