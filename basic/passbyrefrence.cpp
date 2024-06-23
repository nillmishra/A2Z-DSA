#include<iostream>
using namespace std;

void doSomething(int &num){
    cout << num << endl;
    num+= 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main(int argc, char const *argv[])
{
    int num = 10;
    doSomething(num);
// yaha par adress pass hua mtlb ki original value
    cout << num << endl;
    return 0;
}
