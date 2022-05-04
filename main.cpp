#include <iostream>
#include <iomanip>

using namespace std;
void imprimirMatriz(int m[][20], int filas, int col );
int hallaMayor(int miMatriz[][20], int filas, int col);

int main()
{
  int  matriz[10][20];

  srand(time(nullptr));
  for( int f=0; f<10; f++)
    for(int c=0; c<20; c++)
      matriz[f][c] = rand() % 100;
  imprimirMatriz(matriz,10,20);
  cout << "El mayor elemento de la matriz: " << hallaMayor(matriz,10,20) << "\n";

  return 0;
}


void imprimirMatriz( int m[][20], int filas, int col )
{
  cout << "\n";
  for( int f=0; f<filas; f++) {
    for (int c = 0; c < col; c++)
      cout << setw(6) << m[f][c];
    cout << "\n";
  }
}

int hallaMayor(int miMatriz[][20], int filas, int col)
{
  int elmayor = miMatriz[0][0];

  for( int f=0; f<filas; f++) {
    for (int c = 0; c < col; c++)
      if (miMatriz[f][c] > elmayor)
        elmayor = miMatriz[f][c];
  }
  return elmayor;
}