#include <iostream>
#include "lib.h"
int main(){
  int h;
  std::cin >> h;
  if (numeroprimo(h) == 0) {
    std::cout << "numero primo" << std::endl;
  }
  else{
    std::cout << "numero non primo" << std::endl;
  }
  return 0;
}

#include <iostream>
#include "lib.h"
using namespace std;
bool numeroprimo (int n) {
  int i=1, x;
  bool risultato;
  if (n>1){
    do{
      i++;
      x = n%i;
    }
    while (x!=0);
    if (n == i) {
      risultato = 0;
      ruturn risultato;
    }
    else{
      risultato = 1;
      return risultato;
    }
  }
}
      
