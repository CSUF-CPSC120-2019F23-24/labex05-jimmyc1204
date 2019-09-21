// Random Rectangle
#include <iostream>
#include <ctime>
#include <string>
#include <cstdlib>

int main()
{
  int max = 40;
  int num;
  unsigned seed = time(0);
  srand(seed);
  num = rand() % max + 1;


  std::string dub;
  dub.assign(num,'#');

  std::cout << dub << std::endl;
  std::cout << dub << std::endl;
  std::cout << dub << std::endl;


  return 0;
}
