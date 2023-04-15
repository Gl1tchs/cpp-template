#include <foo.hpp>
#include <iostream>

int main(int argc, char* argv[]) {
  std::cout << "Factorial of 5 is " << foo::factorial(5) << "\n";
  return 0;
}
