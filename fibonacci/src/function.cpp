#include "function.h"
#include <iostream>
#include <vector>

std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.


    std::vector<unsigned int> vector;
    
    int tmp=0;
    while(n>=1 && tmp<n){
     if(vector.size()==0){
        vector.push_back(1);
        vector.push_back(1);
        tmp=1;
     }else{
        tmp=tmp+vector[vector.size()-2];
        if(tmp<n){
            vector.push_back(tmp);
        }
        
     }   
      
    }
    

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return vector;
}



int main(int argc, char const *argv[])
{
    std::vector<unsigned int> v;

    int x;
    while( std::cin >> std::ws >> x) {
      v=fib_below_n(x);
      std::cout << std::endl;
      for (int i = 0; i < v.size(); ++i)
      {
          std::cout << v[i] << " ";
      }
      std::cout << std::endl;
    }
    
    return 0;
}
