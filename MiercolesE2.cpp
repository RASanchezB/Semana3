#include <iostream>
#include <stdio.h>
using namespace std;

void print(char*);

int main(){
  char str[] = "Hola mundo";
  print(str);
  cout<<endl;
  return 0;
}

void print(char* c){
  if(*c){
    putchar(*c);
    print(c+1) ;
    //para escribir alrevez poner putchar(*c) aqui
  }
}
