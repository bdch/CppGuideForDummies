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
int c{ int() }; // nested initialization ==> int c = 0;
````