/*!
 * @brief This code implements the "Soma Vizinhos" programming problem
 * @author selan
 * @data June, 6th 2021
 */
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main( void )
{
    // TODO: Adicione seu código aqui. 

    // a implementação não corresponde ao enunciado

    int var1=0;
    int var2=0;

    cout << "digite dois numeros ou qualque letra para sair" << endl;

    int i=0;

    int x;
    while( cin >> std::ws >> x) {
        i++;

        if(i==1){

            var1=x;


        }else if(i=2){

            var2=x;
            i=0;

            int menor=var1;
            int maior=var2;

            if(var2<var1){
                menor=var2;
                maior=var1;
            }

            for(int it=menor;it<=maior;it++){

                cout << it << " ";

            }

            cout << endl;

        }

      
    }

    cout << "Fim" << endl;
    return 0;
}
