#include <foo.hpp>

int main(int argc, char* argv[]) {
  Foo* foo = new Foo;
  print_foo(*foo);

  Bar* bar = new Bar;
  print_foo(*bar);
}
