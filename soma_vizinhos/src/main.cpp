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
    int m, n;
    long int result;

    while(!cin.eof()){
      
      result = 0;

      std::cin>>std::ws>>m;
      std::cin>>std::ws>>n;

      if(n > 0){

        for(int x = 0; x < n; x++){
          
          result+= m;
          m++;

        }

      } else if(n == 0){

        result = m;

      } else{

        for(int x = 0; x < (n*-1); x++){
          
          result+= m;
          m--;

        }


      }

      std::cout << result << "\n";

    }

    return 0;
}
