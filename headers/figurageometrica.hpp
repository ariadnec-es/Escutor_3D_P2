#ifndef FIGURAGEOMETRICA_HPP
#define FIGURAGEOMETRICA_HPP

#include "sculptor.hpp"

class figurageometrica //cria��o da classe abstrata
{
protected:
    float r,g,b,a; // procedimento de heran�a da classe de orgem maior, cores e transparencia
public:
    virtual void draw(Sculptor &t)=0;
    virtual ~figurageometrica(){
    };
};

#endif // FIGURAGEOMETRICA_HPP
