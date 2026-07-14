//Brute:

#include <iostream>
using namespace std;

int countDigit(int n){
    int ans, flor;
    
     if (n == 0){
        return 1;
    }
    
    while(n>0) {
        flor = floor(log10(n) + 1);
        ans = flor +1;
    }
    return ans;
}

int main() {
    int n = 0;
    int ans = countDigit(n);
    cout<< ans;

    return 0;
}

//optimized:

#include <iostream>
#include<cmath>
using namespace std;

int countDigit(int n){
    int digits;
    
     if (n == 0){
        return 1;
    }
    
    digits = floor(log10(n)+1);
    
    return digits;
}

int main() {
    int n = 123456;
    int ans = countDigit(n);
    cout<< ans;

    return 0;
}
