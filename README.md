# A simple streaming library

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

Alternative syntax:
```c++
#include <_._>

int main() {
  (_*_) << "Hello World!\n";
  int i;
  (_*_) >> i;
}
```
