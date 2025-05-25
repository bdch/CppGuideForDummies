# Unit 4

## Alias 

`C++` allows for very complex types, e.g. `std::vector<std::pair<int, std::string>>`.
We can therefore create an alias for this type. This is done with the `using` keyword.

```c++
using MyType = std::vector<std::pair<int, std::string>>;
```
This is not the declaration of a new type, but an *alias*0 for the type.

## References

References can be thought like any other programming language, it's a pointer to a variable.

```c++
int a = 5;
int& ref = a;
```
This means that `ref` is a reference to `a`. If we change `ref`, we also change `a`.

## Functions

They work like functions in any other programming language. `C++` enables you to also invoke functions by
referencing them. This is done with the `&` operator.

```c++
int f(int a) {
    return a + 1;
}
int& ref = f;

int f(int& a) {
    return a + 1;
}
```

You can also pass references to functions and return them.

```c++
int& f(int& a) {
    return a + 1;
}
}
```

The keyword `auto` can also be used to define the type of the function. This is done with the `decltype` keyword.

```c++
auto f(int a) -> int {
    return a + 1;
}
```

In `C++14` you can also use the `auto` keyword to define the type of the function.

```c++
auto f(int a) {
    return a + 1;
}
```

## Overloading

It's the same as in any other programming language. You can overload functions and operators.

```c++
int f(int a) {
    return a + 1;
}
int f(int a, int b) {
    return a + b;
}
```

## Templates

Templates are a way to create generic functions and classes. This means that you can create a function or class
that can work with any type. This is done with the `template` keyword.

```c++
template <typename T> T f(T a) {
    return a + 1;
}
```

## Control Questions


