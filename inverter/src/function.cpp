#include <iostream>
#include <array>
#include <string>
/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <std::size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    /*codigo*/

    int tamanho = arr.size();
    for (int i = 0; i < tamanho/2; ++i)
    {
        std::swap(arr[i],arr[tamanho-i-1]);
    }

// não exiba informações nas funções, a menos que seja esse o objetivo da função
std::cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << std::endl ;
 

}

// deveria ser modificada somente a função reverse
int main(int argc, char const *argv[])
{
    std::array<std::string,5> a = {"teste1","teste2","teste3","teste4","teste5"};
    std::cout << a[0] << " " << a[1] << " " << a[2] << " " << a[3] << " " << a[4] << std::endl ;
    reverse(a);

    return 0;
}

