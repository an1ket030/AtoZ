#include <iostream>
using namespace std;

int reverseNumber(int n){
    int last;
    int reverse = 0;
    
    while (n>0){
        last = n % 10;
        reverse = reverse * 10 + last;
        n = n/10;
    }
    
    return reverse;
}

int main() {
    int n = 123456;
    int ans = reverseNumber(n);
    cout<< ans;

    return 0;
}
