/*
 * A program that generates a vector with n random entries
 * and then sorts it
 */

#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(int argc,char *argv[]) 
{

  if (argc != 2) {
    cout << "Usage ./hw1list n " << endl;
    return -1;
  }


  int n = atoi(argv[1]);
  vector < int > integerVector(n);

  for(int i = 0;i < n;i++) {
    int randomNumber = rand() % n;
    integerVector[i] = randomNumber;
  }

  clock_t start = clock();
  sort(integerVector.begin(),integerVector.end());
  clock_t end = clock();

  double time = (double) (end - start);

  cout << "Sorting a vector with " << n << " elements took " << time << " units. "
       << endl;

  return 0;
}

  
