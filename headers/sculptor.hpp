#ifndef SCULPTOR_H
#define SCULPTOR_H

#include "voxel.hpp"

class Sculptor {
protected:
  Voxel ***v; // ponteiro para ponteiro para ponteiro do tipo struct Voxel

  int nx,ny,nz; // dimens�es x,y e z da matriz
  float r,g,b,a; // define as cores vermelho, verde e azul para cada voxel, e transparencia
  float fix; //vari�vel de valor fixo para auxilio da constru��o do arquivo .off

public:
  Sculptor(int _nx, int _ny, int _nz); //construtor respons�vel por iniciar classe
  ~Sculptor(); // destrutor da classe

  void setColor(float r, float g, float b, float alpha); // se refere a sele��o de cor
  void putVoxel(int x, int y, int z); // se refere a ativa��o de um voxel em (x,y,z)
  void cutVoxel(int x, int y, int z); // se refere a desativa��o de um voxel em (x,y,z)

  int getx();
  int gety();
  int getz();

  void writeOFF(const char* filename);
};

#endif
