/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
#include <vector>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

std::vector<double> calculatePercentages(std::vector<int> interval, std::vector<double> percentages, int size){

  percentages[0] = (double)(interval[0]*100)/size;
  percentages[1] = (double)(interval[1]*100)/size;
  percentages[2] = (double)(interval[2]*100)/size;
  percentages[3] = (double)(interval[3]*100)/size;

  return percentages;

}

std::vector<int> setValuesByInterval(std::vector<double> input, std::vector<int> interval){

  for(int x = 0; x < input.size(); x++){

    if(input[x] >=0 && input[x] < 25){

      interval[0]++;

    } else if(input[x] >=25 && input[x] < 50){

      interval[1]++;


    } else if(input[x] >=50 && input[x] < 75){

      interval[2]++;


    } else if(input[x] >=75 && input[x] <= 100){

      interval[3]++;


    }

  }

  return interval;

}

int main(void)
{
    // TODO: Adicione aqui a sua solução.

    std::vector<double> input;
    std::vector<int> interval = {0,0,0,0};
    std::vector<double> percentages = {0.0,0.0,0.0,0.0};
    double m;

    while( cin >> std::ws >> m) {
      
      input.push_back(m);

    }

    interval = setValuesByInterval(input, interval);
    percentages = calculatePercentages(interval, percentages, input.size());

    for(int x = 0; x < 4; x++){

      std::cout << std::fixed;
      std::cout << std::setprecision(4);
      std::cout << percentages[x] << std::endl;

    }

    return 0;
}
