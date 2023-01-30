#pragma once

#include <iostream>
#include <string>

struct Foo {};

struct Bar : Foo {};

template <typename T>
concept FooLike = std::is_base_of_v<Foo, T>;

template <FooLike T>
void print_foo_value(T) {
  /*
    If you want to access variables inside the Foo struct
    you would want to set this function as friend inside
    your struct
  */
}

template <>
void print_foo_value<Foo>(Foo foo) {
  std::cout << "foo\n";
}

template <>
void print_foo_value<Bar>(Bar bar) {
  print_foo_value<Foo>(bar);
  std::cout << "bar\n";
}
