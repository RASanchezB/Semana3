#include <iostream>
#include <fstream>
using namespace std;

//Provisionar la matriz de chars para el laberinto
char** provisionarMatrix(int);

//liberar memoria de la matrix
void liberarMatrix(char**,int);

//imprimir la matriz
void printMatrix(char**,int);

//salir del laberinto: la,size,x,y
//boll salir(char**,int)

int main(){
  //abrir el archivo
  ifstream file("laberinto.txt");

  int size = 0;
  char** LabMatrix = NULL;
  //si el archivo existe
  if(file.is_open()){
    //leer el tamaño
    file >> size;

    //inicializar la matriz nxn
    LabMatrix = provisionarMatrix(size);

    //leer la matriz del archivo
    for(int i = 0; i<size ;i++){
      for(int j = 0; j<size; j++){
        file >> LabMatrix[i][j];
      }
    }

    file.close();

    printMatrix(LabMatrix,size);

  }
  return 0;
}//end main

void printMatrix(char** matrix, int size){
  for(int i = 0; i< size; i++){
    for(int j = 0; j<size;j++){
      cout<<"  "<<matrix[i][j];
    }
    cout<<endl;
  }
}
void liberarMatrix(char** matrix, int size){
  for(int i = 0; i < size; i++){
    delete[] matrix[i];
    matrix[i] = NULL;
  }
  delete[] matrix;
}
char** provisionarMatrix(int size){
  char** retVal = new char*[size];
  for(int i = 0; i<size; i++){
    retVal[i] = new char[size];
  }
  return retVal;
}


char** createMatrix(int size){
  char** retVal = new char*[size];
      for(int i = 0; i < size; i++){
        retVal[i] = new char[size];
      }
      return retVal;
}
