/*
pattern 18:
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/

#include <iostream>
using namespace std;

int main() {
    int n = 5;
    
   for(int i=1; i<=n; i++){
       //top half
       //left
       for(int j =1; j<=n-i+1; j++){
           cout<< "*";
       }
       //spaces
       for(int j=1; j<= 2*(i-1); j++){
           cout<< " ";
       }
       //right
       for(int j=1; j<=n-i+1; j++){
           cout<< "*";
       }
       cout<<endl;
       
   }
   
   for(int i=1; i<=n; i++){
       //bottom half
       //left
       for(int j =1; j<=i; j++){
           cout<< "*";
       }
       //spaces
       for(int j=1; j<= 2*(n-i); j++){
           cout<< " ";
       }
       //right
       for(int j=1; j<=i; j++){
           cout<< "*";
       }
       cout<<endl;
   }
}

