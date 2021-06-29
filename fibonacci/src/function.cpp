#include "function.h"

/*blz*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.

    std::vector<unsigned int> v;

    int x = 0;

    do{

      if(x < 2 && 1 < n){

        v.push_back(1);

      } else if(x >= 2 && v[x-2]+v[x-1] < n) {
        v.push_back(v[x-2]+v[x-1]);

      } else {

        break;

      }

      x++;

    }while(v[x-1] < n);

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    return v;
}
