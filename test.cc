#include <_._>

int main() {
  int i;
  (_._) << "Hello World!\n";
  (_._) >> i;

  // Produces compile time error
  // _._ << "Hello World!\n";
  // _._ >> i;

  (_*_) << "i = " << i << std::endl;

  // Also produces compile time error
  // _*_ << "i = " << i << std::endl;

  (__.__) << L"223";

  // Produces compile time error too
  // __.__ << L"223";
}
