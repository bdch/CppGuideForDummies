//
// Created by Lingling on 25.05.2025.
//
#include <iostream>
using namespace std;

class A
{
public:
    virtual ~A() = default;
    virtual void f() const { cout << "A\n"; }
};

class B final : public A
{
public:
    void f() const override { cout << "B\n"; }
};

class C : public A
{
public:
    void f() const override { cout << "C\n"; }
};

class D final : public C
{
public:
    void f() const override;
};

void D::f() const
{
    cout << "D\n";
}

class E : public A
{
};

class F final : public E
{
public:
    void f() const override { cout << "F\n"; }
};

int main()
{
    A a;
    B b;
    C c;
    D d;
    E e;
    F f;
}
