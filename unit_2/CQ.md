# Control questions

## These include unit 1 - 5.

Name three prerequisites for C++. (3 Points)

- Algol
- C
- Simula

Who is the 'father' of C++ and how did he name the langauge at first? (2 Points)

- Bjarne Stroustrup
- C with classes

When did the first C++ standard appear? (1 Point)

- 1998

Name three different C++ standards. (3 Points)

- C++98
- C++03
- C++11

Which 4 programming styles are featured in C++? (4 Points)

- procedural programming
- object-oriented programming
- generic programming
- data abstraction

What is the `Hello World` program in C++? (6 Points)

```
I am not doing this again. At this point, it should be obvious.
```

What are the 4 elemental data types in C++? (4 Points)

- char
- int
- float
- bool

Give to each of the 4 elemental data type a literal. (4 Points)

```
This is also trivial. I am not doing this again.
```

What is the type of the following literal: "Hello World". (4 Points)

- `char` value[] aka char array

How can you define a `String` variable with "Hello World"? (2 Points)

```c++
#<include <string>
.
.
.
std::string str = "Hello World";
```

Where does a local variable loose it's viability? (1 Point)

- When the function ends, the variable is destroyed and the memory is freed.

Why should local variables be defined when you need them? Name two arguments. (1 Point)

- To avoid memory leaks
- To avoid unnecessary mistakes

Constants can be defined in two ways. Name them. (4 Points)

- `const` keyword
- `constexpr` keyword

Correct the following code snippet. (3 Points)

```
if [ n < 7] {
cout " n < 7\ n ";
cout " n ist " << n << ’\n ’;
cout " Und weiter geht es ...\ n "
}
```

Solution:

```
if (n < 7) {
std::cout << "n < 7\n";
std::cout << "n ist" << n << '\n';
std::cout << "Und weiter geht es ...\n";
}
```

What letter is being displayed? (7 Points)

```
# include < iostream >
using namespace std ;

int main () {
    for ( int i = 0; i < 7; ++ i ) {
        switch ( i ) {
            case 1:
                cout << " A ";
                break ;
            case 2:
            case 3:
                cout << " B ";
            case 4:
                cout << " C ";
                break ;
            default :
                cout << " D ";
                break ;
    }
}
}
```

Solution:

```
A
```

Where is auto being used? Give an example. (4 Points)

```
auto x = 5; // x is int
```

Why should global variables be avoided? (2 Points)

- They can cause naming conflicts
- They can make code difficult to understand and maintain

How is `string` being converted to `int`? Give an example. (4 Points)

```
std::string str = "42";
stoi(str); // str is converted to int
```

Explain the concept of `iterators`. (2 Points)

- Iterators are objects that allow you to traverse a container, such as a vector or list, without exposing the
  underlying structure of the container. They provide a way to access elements in a container sequentially.

What is the difference in a `set` and a sequence container? How do they differ in search? (2 Points)

- A set is a container that stores unique elements in a specific order, while a sequence container stores elements in a
  linear
  order. In a set, search operations are typically faster because they use a balanced tree structure, while in a
  sequence
  container, search operations may require linear time complexity. An example of a sequence container is a
  `linked list`, or a `vector` in C++, while an example of a set is a `binary search tree`.

Why are functions from the STL, e.g. `accumulate`, better than 'handwritten' loops? (2 Points)

- Functions from the STL are better than handwritten loops because they are optimized for performance and readability.
  They also reduce the risk of errors and make the code more maintainable. Additionally, STL functions are often
  implemented in a way that takes advantage of compiler optimizations.

How can you define this *Typemonster* `std::map<std::string, std::vector<string>>::const_iterator` with a unique name? (
2 Points)

```
using MyMapIterator = std::map<std::string, std::vector<std::string>>::const_iterator;

or

typedef std::map<std::string, std::vector<std::string>>::const_iterator MyMapIterator;
```

What is the reference of `int` variable `a`? (1 Points)

```
int& ref = a;
```

What is the outcome of the following code? (3 Points)

```
int f( int a , int& b ) {
  ++ a ;
  ++ b ;
   return a + b ;
}
int main () {
  int x = 2;
  int y = 2;
  cout << f (x , y ) << ":" << x << " : " << y ;
}
```

Solution:

```
6:2:3
```

Which letter is being outputted? (4 Points)

```
void f ( int i =0) {
  cout << " A ";
}
void f ( char i ) {
  cout << " B ";
}
void f ( const char* i ) {
  cout << " C ";
}
int main () {
  f ();
  f (" Hallo ");
  f ( ’W ’);
  f (1);
}
```

Solution:
In C++ a `String ` literal is a `const char*` type, a `pointer` to the first letter of the string.

```
ACBA
```

Which three classes are being recognized by the STL regarding Time? (3 Points)

- `std::chrono::system_clock`
- `std::chrono::steady_clock`
- `std::chrono::high_resolution_clock`


