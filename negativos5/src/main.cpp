#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    int x, negatives = 0, input;

    for(x = 0; x < SIZE; x++){
      
      std::cin>>std::ws>>input;
      if(input < 0){

        negatives++;

      }

    }

    std::cout << negatives << "\n";

    return 0;
}
