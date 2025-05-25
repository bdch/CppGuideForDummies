# Unit 5

## OOP

C++ is an object-oriented programming language. This means that it allows you to define classes and objects.
The concept of C++ OOP can be 1:1 compared to other OOP languages like Java or C#. There is also constructor
overloading.
But there is a new concept: 'destructor'.

### Destructor

This is a function that is called when an object is destroyed. Its return type is basically noting, and not `void`.
It is called automatically invoked when an object goes out of scope or is deleted. It is used to free resources that the
object may have acquired during its lifetime.

```c++
class A
{
public:
    A(int);
    ~A();
private:
    int i;
};
```

The syntax is, starting with a tilde `~` followed by the class name. The destructor has no return type and no
parameters.

Usage example:

```c++
#include <iostream>
using namespace std;
class A
{
public:
    A(int);
    ~A();
private:
    int i;
};
    A::A(int n)
    {
    i = n;
    cout << "Constructor " << i << '\n';
    }
    A::~A()
    {
    cout << "Destructor " << i << '\n';
    }
    int main()
    {
    cout << "Start\n";
    A a1(7);
    {
    cout << "Start of a new block\n";
    A a2(3);
    cout << "End of a new block\n";
    } 
    cout << "End\n";
}
```

In regard to classes:

```c++
//
// Created by Lingling on 25.05.2025.
//
#include <iostream>
using namespace std;

class A {
public:
    static void fct() {
        cout << "A::fct() invoked\n";
    }
};

int main() {
    A::fct(); // invoked per class
    A a;
    a.fct(); // Not recommended, but works
}
```
The `C++ Standard ISO/IEC 14882` states: *"A static member function does not have a pointer. It shall not be declared virtual, and it is not associated with any object."*
That means that static member functions can be called without an instance of the class. The compiler will ignore the instance and call the function directly on the class.

## Friend

A friend is a function or class that has access to the private and protected members of another class. This is useful when you want to allow a function or class to access the private members of another class without making them public.

```c++
#include <iostream>
using namespace std;

class A {

public:
    A(int i) : n(i) {}
    friend int fct(const A&); // Achtung - keine Element-Funktion,
// sondern eine freie Funktion
private:
    int n;
};

    int fct(const A& a) { // Da friend von A, darf sie auf alle
        return a.n; // Elemente von A zugreifen
    }
int main() {

A a(17);
cout << fct(a) << '\n'; 
}
```

## Polymorphism

Yes, this exists. The more I read C++ code, the more I start to appreciate Kotlin...

```c++
class A {

public:
    int ai;
    void af();
};

class B : public A { // B extends A

public:
    int bi;
    void bf();
};

int main() {
A a;
B b;
a.ai = 7; // okay
a.af(); // okay
a.bi = 8; // Error, one way inheritance, A has no variable bi
a.bf(); // 
b.ai = 9; 
b.af(); 
b.bi = 10; 
b.bf(); 
}
```

## Virtual Functions

With the `virtual` keyword, you can define a function that can be overridden in a derived class. This is useful when you want to allow a derived class to provide its own implementation of a function. This happens at runtime, so the function call is resolved at runtime based on the actual object type, not at compile time based on the reference type.


```c++