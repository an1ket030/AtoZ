#include <iostream>
using namespace std;

bool isPalindrome(int n){
    int last;
    int og = n;
    int reverse = 0;
    
    while (n>0){
        last = n % 10;
        reverse = reverse * 10 + last;
        n = n/10;
    }
    
    if(reverse == og){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    int n = 121;
    int ans = isPalindrome(n);
    cout << boolalpha << ans;

    return 0;
}
