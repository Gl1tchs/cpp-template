#include "foo.hpp"

namespace foo {
uint32_t factorial(uint32_t number) {
  return number <= 1 ? number : factorial(number - 1) * number;
}
}  // namespace foo
