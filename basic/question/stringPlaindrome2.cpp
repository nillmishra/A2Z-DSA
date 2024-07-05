#include<iostream>
using namespace std;

bool isPalindrome(int i ,string s){
    int j = s.length()-1-i;
    if(i>=j){
        return true;
    }
    if(s[i] != s[j]){
        return false;
    }
    return isPalindrome(i+1, s);

}

int main(int argc, char const *argv[])
{
    string s;
    cin >> s;
    cout << isPalindrome(0, s);
    return 0;
}
