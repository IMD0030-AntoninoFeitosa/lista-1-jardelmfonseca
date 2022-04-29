/*!
 * @brief This code implements the Intervalos programming problem
 * @author paulo jardel
 * @data 12/04/2022
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// não utilize variáveis globais
int intervalo1[2]={0,25};
int intervalo2[2]={25,50};
int intervalo3[2]={50,75};
int intervalo4[2]={75,100};

int qtdIntervalo1=0;
int qtdIntervalo2=0;
int qtdIntervalo3=0;
int qtdIntervalo4=0;
int foraDosIntervalos=0;
int qtdTotal=0;

// Se desejar, crie funções aqui, antes do main().

void verificaIntervalo(int y){
    

    if(y>=intervalo1[0] && y<intervalo1[1]){
        qtdIntervalo1++;
    }else if(y>=intervalo2[0] && y<intervalo2[1]){
        qtdIntervalo2++;
    }else if(y>=intervalo3[0] && y<intervalo3[1]){
        qtdIntervalo3++;
    }else if(y>=intervalo4[0] && y<=intervalo4[1]){
        qtdIntervalo4++;
    }else{
        foraDosIntervalos++;
    }

    qtdTotal++;


}


 

int main(void)
{
    int x;
    while( cin >> std::ws >> x) {
      verificaIntervalo(x);
    }

    cout << setprecision(4);
    
    cout << (static_cast<double>(qtdIntervalo1)*100)/qtdTotal  << endl;
    cout << (static_cast<double>(qtdIntervalo2)*100)/qtdTotal << endl;
    cout << (static_cast<double>(qtdIntervalo3)*100)/qtdTotal << endl;
    cout << (static_cast<double>(qtdIntervalo4)*100)/qtdTotal << endl;
    cout << (static_cast<double>(foraDosIntervalos)*100)/qtdTotal << endl;

    return 0;
}
