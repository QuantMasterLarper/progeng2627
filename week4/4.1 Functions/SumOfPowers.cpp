#include <iostream>
#include <random>
#include <cmath>
#include <string>
#include <vector>
#include <cstdlib>
#include <sstream>
using namespace std;
int SumPow (int x, int  n){
 int i =0;
 int sum =0;
 while (i<=n){
    sum = sum+ pow(x,i);
    i++;
 }
 return sum;
}
int main() {
cout << SumPow(2, 1);
   
}