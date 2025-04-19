# Unit 2

## Unified initialization

This is a feature from C++11 that allows you to initialize variables in a more consistent way.

````
int a = 5;         // classical initialization
int b(5);          // direct initialization
int c{5};          // 👉 unified initialization (C++11)
````

That means that `int c{5};` is the same as `int c = 5;`.
You can also use

````
int c{ int{5} }; // nested initialization ==> int c = 5;
int d{ int() }; // nested initialization ==> int d = 0;
````

Careful, though, because this is not the same as `int c = int();` which is a function declaration.

```
string s{'2', 'a' }; // string s = "2a";
string ss('2', 'a' ); // string ss = "aa";
```

That said, you can kinda imagine it as `Overloading` where the Compiler picks the most
suitable method according to its signature.

## Automatic type deduction with `auto`

This is a feature from C++11 that allows you to use `auto` to let the compiler deduce the type of a variable.

```
auto var = 254;
cout << typeid(var).name() << endl; // i
```

The outputs are not very readable, but i => int.
In order for the Compiler to get the type, it needs to be explicitly initialized.
That means that you cannot do this:

```
vector<int> v;
vector<int>::iterator iter1 = begin(v);
```

TO

```
auto iter2 = begin(v);
```

Auto is powerful, but it has problems with `strings`.

```
auto x = "C++";
cout << typeid(x).name() << " -> " << x << '\n'; // char const * -> C++
```

## Automatic type deduction with `decltype`

While `auto` is used to deduce the type of a variable, `decltype` is used to deduce the type of an of expression.
Example:

```
int x = 5;
auto y = x;  // y is int

int x = 5;
decltype(x) y = 10;  // y is also int

```

The difference lies in the way the reference is created.
Here with initialization:

```
int a = 10;
int& r = a; // This is a reference to a

auto x = r;        // x ist **int**  → r copied
decltype(r) y = a; // y ist **int&** → exact reference like r
```

You can think of a `reference` as a `alias` in `SQL`:

| Alias-Name	   |  m in SELECT * FROM media AS m  | ref in int& ref = original |
|---------------|:-------------------------------:|---------------------------:|
| Cause         |     m is a alternative name     |  ref is a alternative name |
| No new Memory |               Ja                |                         Ja |
| Access        | m.columnName = media.columnName |             ref = original |

Here without initialization:

```
int a = 5;
decltype(a + 2) b; // allowd (Type is int)
auto c;            // ❌ Will throw an error
```

When is it needed?

- When you want to create a reference to a variable without knowing its type, use `auto`.
- When you want it to be 'simple', use `auto`.
- When you want the exact type of a variable, even without initialization, use `decltype`.
- When you want to find out the type of an expression or function, use `decltype`.

## *Relative* unique Operators

Here are some operators that are unique to C++ and are not found in other languages.

| C++              | Language specific examples             | Description                                                                                                      |
|:-----------------|:---------------------------------------|------------------------------------------------------------------------------------------------------------------|
| `::`             | `object.methodName();`                 | Similar to dot calling, but used for static methods: `classname::staticMethodName();`                            |
| `.`              | `obj.member`                           | Used to access objects in a `class`, similar to Java                                                             |
| `->`             | `ptr->member`                          | Used to access the `pointer` to a member                                                                         |
| `~`              | ` ~Person()` in C++                    | Destructs a object if access is not needed for clearing memory                                                   |
| `~`              | Bitwise Negation                       | `00001111  →  11110000`                                                                                          |
| `&`              | `int* p = &a;`                         | `&a` means -> return me the address of `a` e.g. `0x61ff08`, in short: 'Where does it lie?'                       |
| `*`              | `cout << *p; `                         | Return the `value` that is stored at that address, in short: 'What lies there?'                                  |
| `new` & `delete` | `int* ptr = new int;` &  `delete ptr;` | Memory management -> allocate memory with `new`, deallocate memory with `delete`, kinda like `malloc` and `free` |
| `<<` & `>>`      | `cout << y` & `cin >> name;`           | *Pushes* things in / out to / from a data-stream, the `>>` can be imagined like a `Scanner` in Java              |
