#include "function.h"
#include<algorithm>
#include<iostream>

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

std::pair<int,int> min_max( int V[], size_t n )
{

    // TODO: Adicione aqui sua solução.

  std::pair<int,int> retorno;
  // faltou o caso n == 0 retornando {-1,-1}

  for (int i = 0; i < n; ++i)
  {
      if(i==0){
        retorno.first=std::min(V[i],V[i]);
        retorno.second=std::max(V[i],V[i]);       
      }else{
        retorno.first=std::min(retorno.first,V[i]);
        retorno.second=std::max(retorno.second,V[i]);        
      }
  }

  
    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
    return retorno;
}


//não deveria ter um main
int main(int argc, char const *argv[])
{
    int v[]={1,2,3,4,5,6,7,8,9};
   std::pair<int,int> r = min_max(v,9);
    std::cout << "minimo=" << r.first << " maximo="<< r.second <<std::endl;

    
    return 0;
}
