// thread example
#include <iostream>       // std::cout
#include <thread>         // std::thread
#include <vector>
#include <string>

std::string foo() 
{
    std::string inp="";
  std::cout<<"foo..."<<std::endl;
  std::cin>>"presnij batona: ">> inp;
}

void bar(std::string& x)
{
  std::cout<<"bar..."<<std::endl;
  std::cout<<"foo wygenerowal: "<<x<<std::endl;
}

int main() 
{
  std::thread first(foo);     // spawn new thread that calls foo()
  std::thread second(bar, );  // spawn new thread that calls bar(0)

  std::cout << "main, foo and bar now execute concurrently...\n";

  // synchronize threads:
  first.join();                // pauses until first finishes
  second.join();               // pauses until second finishes

  std::cout << "foo and bar completed.\n";

  return 0;
}
