#include <iostream>
#include <cmath>
int main(void){

  double suma = 0;
  double  n = 1;
  
  while (n<=100){

    suma = suma +1/n;
    n++;
  }

  std::cout << suma << "\n";
  return 0;
}
