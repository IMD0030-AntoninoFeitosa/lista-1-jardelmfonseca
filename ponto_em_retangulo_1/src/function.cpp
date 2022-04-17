#include "function.h"
#include <iostream>
#include <stdio.h>

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Coloque aqui seu código.

     location_t retorno = location_t::OUTSIDE;

     if(P.x==IE.x || P.x==IE.y || P.x==SD.x || P.x==SD.y || P.y==IE.x || P.y==IE.y || P.y==SD.x || P.y==SD.y){
       retorno=location_t::BORDER;
     }else{

        int xmenor= std::min(IE.x,SD.x);
        int xmaior= std::max(IE.x,SD.x);

        int ymenor= std::min(IE.y,SD.y);
        int ymaior= std::max(IE.y,SD.y);

        if(P.x>xmenor && P.x<xmaior && P.y>ymenor && P.y<ymaior){
            retorno=location_t::INSIDE;
        }


     }
    // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
    return retorno;
}


int main(int argc, char const *argv[])
{
    const Ponto ie = {1,1};
    const Ponto sd = {4,3};

    // mude os valores do ponto para testar
    const Ponto p = {1,2};


    // retorno
    location_t rt = pt_in_rect(ie,sd,p);


    switch(rt){

        case location_t::INSIDE:
          std::cout << "ponto dentro do retângulo" << std::endl;
        break;
        case location_t::BORDER:
          std::cout << "ponto na borda do retângulo" << std::endl;
        break;
        case location_t::OUTSIDE:
          std::cout << "ponto fora do retângulo" << std::endl;
        break;

        default:
        std::cout << "não foi possivel calcular o ponto" << std::endl;
        break;

    }

   

    return 0;
}
