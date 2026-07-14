/*
pattern 8:
    *
   ***
  *****
 *******
*********
 *******
  *****             
   ***
    *   
*/

#include <iostream>
using namespace std;

int main() {
    //Upper pyramid
    for(int i= 1; i<=5; i++){
        for(int j =1; j<=5-i; j++){
            cout<< " ";
        }
        for(int j=1; j<=2*i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    //lower pyramid
    for(int i= 2; i<=5; i++){
        for(int j =1; j<=i-1; j++){
            cout<< " ";
        }
        for(int j=1; j<=2*(5-i)+1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}