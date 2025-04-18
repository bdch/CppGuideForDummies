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

