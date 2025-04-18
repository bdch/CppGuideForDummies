# Unit 1

## General Stuff

- In 1972, Dennis Ritchie created the C programming language. The purpose of
  C was to create a system programming language that could be used to write
  operating systems. C is a procedural programming language.
- In 1979, Bjarne Stroustrup created C++. It was called C with classes. 1983
  was the first official release of C++. One of the big features of C++ in comparison to C is `OOP`.
- The entry point of a C++ program is the `main` function.

```
#include <iostream>
int main()
{
std::cout << "Hello, World!";
return 0;
}
```

whereas `std::cout` is the standard output stream and `<<` is the insertion operator.
The `<<` can be imagined as a pipe that takes the output from the right and sends it to the left.
std is the `Namespace` that contains the standard library functions and objects. We
will get to `Namespace` later.

- The `#include` directive is used to include header files. They are
  similar like imports.
- iostream is a standard library that provides input and output functionality.
- The syntax for method calling is `classname::staticMethodName();`. This very similar
  to dot calls in Java, e.g. `object.methodName();`

## Namespace

The constant need to write `std::` before every standard library function is annoying.
To avoid this, we can use the `using` directive. This allows us to use the standard library functions without the
`std::` prefix.

```
#include <iostream>
using namespace std;
int main()
{
cout << "Hello, World!";
}
```

OR

```
#include <iostream>
using std::cout;
int main()
{
cout << "Hello, World!";
}
```

## Knowledge Check

What programming styles are featured in C++?
- procedural programming
- Data abstraction 
- object-oriented programming
- generic programming
- --
What can you learn from the C++ standard library?
- The C++ standard library is a collection of classes and functions that provide
  common functionality. It includes containers, algorithms, and iterators.
- --
Why is the return type of the `main` function optional?
- The return type of the `main` function is optional because it is assumed to be `int` by default.
That said if you remove `return 0;` from the end of the `main` function, it will return 0 by default implicitly.
`THIS WORKS ONLY FOR THE MAIN FUNCTION!`

## Control questions
- [Click me](CQ.md)
