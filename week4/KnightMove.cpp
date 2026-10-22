#include <iostream>
#include <random>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>
using namespace std;

int main() {
   int  num1 =0;
   int num2=0;
   int check1 = 0;
   int check2 = 0;
   cin >> num1 >> num2;
   cin >> check1 >> check2;
   cout << num1 + num2;
   if ( (0<num1 && num1<9) && (0<num2 && num2 <9)  &&( 0<check1 && check1 <9)  && ( 0<check2 && check2<9)  )
   {
     if ( abs(num1-check1)+ abs (num2-check2)== 3){
        if ( num1-check1 != 0 && num2 - check2 != 0){
            cout << " Valid";
            exit(0);
        }
     }
   }
   else{
    cout << " invalid coordinates!!!";
   }
   cout << " invalid";
}