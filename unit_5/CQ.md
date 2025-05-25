# Control Questions

- What is the job of a constructor? (1 Point)

The job of a constructor is to initialize an object when it is created. It sets up the initial state of the object, allocating resources if necessary.

- What is the job of a destructor? (1 Point)

The job of a destructor is to clean up resources that an object may have acquired during its lifetime. It is called automatically when the object goes out of scope or is deleted.

- What is `this` in C++? (2 Points)

The `this` pointer in C++ is a special pointer that points to the current object instance within a class. It is used to access members of the class and differentiate between member variables and parameters with the same name.

- Which keyword marks class members and -functions? (1 Point)

`static` marks class members and functions that are shared among all instances of the class, meaning they belong to the class itself rather than to any specific object instance.

- Draw a polymorphic class hierarchy. (6 Points)

```plaintext
no
```

What is the output of the following code? Is this polymorphic overriding? (4 Points)

```c++
class A {
public :
    void f () const { cout << " A "; }
};

class B : public A {
public :
    void f () const { cout << " B "; }
};

class C : public B {
public :
    void f () const { cout << " C "; }
};

int main () {
C c ;
A& ra = c;
B& rb = c;
C& rc = c;
ra.f();
rb.f();
rc.f();
}
```
The output of the code will be: A B C
This is not polymorphic overriding because the functions `f()` in classes `B` and `C` are not marked as `virtual`. Therefore, the function calls will be resolved at compile time based on the type of the reference, not at runtime based on the actual object type. 
Plus they are not overriden and the variables are all of type `A`, `B`, and `C` respectively, so they call the respective functions in their own class.

- What is the output of the following code? Is this polymorphic overriding? (4 Points)

```c++
class A {

public :
    virtual void f () const { cout << " A "; }
};

class B : public A {

public :
    virtual void f () const { cout << " B "; }
};
class C : public B {

public :
    virtual void f () const { cout << " C "; }
};

int main () {
C c ;
A& ra = c ;
B& rb = c ;
C& rc = c ;
ra.f();
rb.f();
rc.f();
}
```
The output of the code will be: C C C

- What is the meaning of the word `polymorphic`? (1 Point)

Polymorphic means that a function or method can operate on different types of objects or classes, allowing for flexibility and reusability in code. In C++, this is often achieved through inheritance and virtual functions, enabling a single interface to represent different underlying data types.