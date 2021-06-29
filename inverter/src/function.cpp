#include <iterator>
using std::iter_swap;
#include <cmath>
#include <array>
using std::array;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
/*
ok!
*/
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    
    unsigned int size = arr.size();
    unsigned int y;

    if(size > 0){
      y = size-1;
    }

    for(unsigned int x = 0; x < floor(size/2); x++){

      iter_swap(&arr[x],&arr[y]);

      y--;

    }
}
