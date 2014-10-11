/*
 * A program that generates a list with n random entries
 * and then sorts it
 */

#include <iostream>
#include <list>
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
  list < int > integerList;

  for(int i = 0;i < n;i++) {
    int randomNumber = rand() % n;
    integerList.push_front(randomNumber);
  }

  clock_t start = clock();
  integerList.sort();
  clock_t end = clock();

  double time = (double) (end - start);

  cout << "Sorting a list with " << n << " elements took " << time << " units. "
       << endl;

  return 0;
}

  
