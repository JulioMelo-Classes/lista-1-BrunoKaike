/*! 
 * Remove negative and zero values from an array, preserving the
 * relative order of the original values that will remain in the
 * resulting array.
 * We do not alter the origimal memory associated withe the input
 * array. Rather, we just rearrange the values inside the array
 * and return a pointer to the new 'logical' end of the array,
 * after the processes of eliminating the required elements is
 * finished.
 *
 * @param first Pointer to the beginning of the range we want to filter.
 * @param last Pointer just past the last valid value of the range we want to filter.
 * @return a pointer to the new 'logical' end of the array.
 */

int * filter(int * first, int * last )
{
    // TODO: coloque aqui o seu código-solução.
  
    auto i=first;

    for(;i!=last;){

       //cout << *i << endl;

      if(*i<=0){

        auto b=i;
        while(b <=last-1){
            int aux = *b;
            *b = *(b+1);
            *(b+1) = aux;
            b++;

        }

        last--;

      } else {

        i++;

      }

    }

    return last;

    // TODO: substitua o retorno de acordo com a solução. Isso é somente um STUB temporário.
}
