/*
pattern 17:
E
DE
CDE
BCDE
ABCDE
*/

#include <iostream>
using namespace std;

int main() {
   for(int i=1; i<=5; i++){
       for(int j =1; j<=i-5; j++){
           cout<< " ";
       }
        for(int j = 0; j < i; j++) {
            cout << char('A' + (5 - i) + j);
        }
       cout<<endl;
   }
}
