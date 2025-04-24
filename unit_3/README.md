# Unit 3

## Formatting

```c++
 cout << 1;
    cout << 2 << '\n';
    cout << 3 << '\n';
    cout << 4 << '\n';
```

Output:

```
12
3
4
```

That being said, '\n' creates a new line.
You can also set the width of the output. But you need to include the `iomanip` library.

```c++
#include <iomanip>

 cout << setw(5) << 1;
    cout << setw(5) << 2 << '\n';
    cout << setw(5) << 3 << '\n';
    cout << setw(5) << 4 << '\n';
```

Output:

```
    1
    2
    3
    4
```

## Containers & Iterators

### Vectors

Vectors can be imagined like a dynamic array. It's a mash of an array and a linked list.
You can add and remove elements from the vector. But it is not as efficient as a linked list.
How do we create a vector?

```
#include <vector>

vector<int> v; 
v.push_back(1); 
v.push_back(3); 
v.push_back(2);
v.push_back(4);
v.push_back(1); // {1, 3, 2, 4, 1}

// v[0] = 2;


```

The `push_back` function adds an element to the end of the vector and can be imagined
like `push` in a stack. The `pop_back` function removes the last element of the vector.

The type `std::vector<int>::size_type` is used to define the size of the vector. That means
this is a `typealias` for the type of the vector. You can also use `auto` to define the size of the vector.
The reason is to keep the code portable. That means that you can use the same code on different platforms, e.g. 32bit
and 64bit.

### Lists

Lists are a singly linked list. That means that you can add and remove elements from the list.
You can also use the `push_back` and `pop_back` functions to add and remove elements from the list.
This also means that it's much complexer to access the last element of the list, since it has to traverse the list.

To traverse a list, we can use `iterators`.

### Iterators

```c++
#include <vector>
using namespace std;
int main()
{
    vector<int> v{ 1, 3, 2, 4 };

    for (vector<int>::iterator it = begin(v); it != end(v); ++it)
{
    cout << *it << ' '; // 1 3 2 4
    *it += 4; 
}
    cout << '\n';
    for (vector<int>::const_iterator it = begin(v); it != end(v); ++it)
{
    cout << *it << ' '; // 5 7 6 8
}
}
```

The definition of a `iterator` can be imagined as a simple for loop, where `begin` is the starting index and `end` is
the last index.

An Iterator can also be substituted with a `for-each` loop.

```c++


#include <iostream>
#include <vector>
using namespace std;
    int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(4);
    v.push_back(8);
    v.push_back(1);
    for (int value : v)
    {
    cout << value << ' ';
    }
    cout << '\n';
}
```

But the iterator is more efficient, since it doesn't have to traverse the whole vector.

### Remaining containers

For `maps`, `sets`, `unordered maps` and `unordered sets` the same rules apply like any other container in any other language.


