//brute

#include <iostream>
using namespace std;

int gcd(int n1, int n2) {
    int ans = 1;

    for (int i = 1; i <= min(n1, n2); i++) {
        if (n1 % i == 0 && n2 % i == 0) {
            ans = i;
        }
    }

    return ans;
}

int main() {
    int n1 = 12, n2 = 18;

    cout << gcd(n1, n2);

    return 0;
}

//optimized:

#include <iostream>
using namespace std;

int gcd(int n1, int n2) {

    while (n2 != 0) {
        int rem = n1 % n2;
        n1 = n2;
        n2 = rem;
    }

    return n1;
}

int main() {
    int n1 = 12, n2 = 18;

    cout << gcd(n1, n2);

    return 0;
}