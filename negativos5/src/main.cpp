#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.

    int negativos=0;
    int tmp=0;

    for(int i=0;i<SIZE;i++){

        cin >> tmp;
        if(tmp<0){
          negativos++;
        }
    }

    cout << negativos << std::endl;

    return 0;
}
