#include <foo.hpp>

int main(int argc, char* argv[]) {
  Foo* foo = new Foo;
  print_foo_value(*foo);

  Bar* bar = new Bar;
  print_foo_value(*bar);
}
