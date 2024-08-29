#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "Striver";
    int len = s.size();
    s[len - 1] = 'z'; //here only single quotes will work it is a character
    cout << s[len - 1];
    return 0;
}