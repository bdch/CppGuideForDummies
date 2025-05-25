# Control Questions

In C++98 `std::pair` has two elements. What is the general term for multiple elements? (1 Point)

- Tuple

```c++
std::tuple<T1, T2, T3, ...>
```

What types do the variables `a` and `b` have in the following code? (4 Points)

```c++
int main () {
    auto a = make_tuple (11 , ’c ’ , true );
    auto b = get <1 >( a );
}
```
Solution:
```c++
a is a std:tuple<int, char, bool>
b is a char
```