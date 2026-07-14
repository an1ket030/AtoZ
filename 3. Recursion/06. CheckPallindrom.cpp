#include <iostream>
using namespace std;

bool isPallindrome(string s, int left, int right) {

    if (left >= right)
        return true;

    if(s[left] != s[right]){
        return false;
    }

    return isPallindrome(s, left + 1, right - 1);
}

int main() {

    string s = "hello";

    if (isPallindrome(s, 0, s.length() - 1))
        cout << "True";
    else
        cout << "False";

    return 0;
}