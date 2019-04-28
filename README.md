# A simple streaming library

This library provides a convenient shorthand notation for using standard input and output streams.

Usage:

```c++
#include <_._>

int main() {
  // Pushing an object into a simple stream:
  (_._) << "Hello World!\n";
  
  // Pulling an object out of a simple stream:
  int i;
  (_._) >> i;
}
```

Alternatively, you can use `(_*_)` instead of `(_._)`.
