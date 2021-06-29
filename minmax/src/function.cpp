#include <stdlib.h>
#include <array>

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */
/*
20%
*/
std::pair<size_t ,size_t> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.

    if(V != NULL && n != 0){
      std::pair<size_t , int> min;
      std::pair<size_t , int> max;

      for(int x = 0; x < n; x++){
        
        if(x == 0){

          max.first = x;
          max.second = V[x];
          min.first = x;
          min.second = V[x];

        } else {
          
          if(V[x] >= max.second){
            
            max.first = x;
            max.second = V[x];

          } else{ //aqui não era  um "else" mas sim outro "if", uma vez que o processamento do menor elemento é totalmente independente do processamento do maior
            
            if(V[x] < min.second){

              min.first = x;
              min.second = V[x];

            }

          }

        }
        
      }

      // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.
      return { min.first, max.first };
    } else {

      return { -1, -1 };

    }
    
}
