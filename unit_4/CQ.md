# Control Questions

These include unit from `unit_5`.

- What is 'evil' at this code? (2 Points)

```c++
struct date {
    int year;
    int month;
    int day;
    };
int main() {
    date d;
    d.year = 2004;
    d.month = 11;
    d.day = 29;
}
```

Solution:

```c++
Bad design. Instead of struct we should use typedef or using. Therefor we have a type. Struct is a stupid container and we no
logic to check the values. We can have a date with month 13 or day 32. We should use a class with private members and public

typedef struct date {
    int year;
    int month;
    int day;
} Date;

int main() {
    Date d;
    d.year = 2004;
    d.month = 11;
    d.day = 29;
}
```

- What is the difference between a class and a struct? (2 Points)

Solution:

```c++
The visibility of members. In a class, members are private by default, while in a struct, members are public by default.
```

- Where are these instances stored? (3 Points)

```c++
#include "Datum.h" // darin sei die Klasse Datum definiert
Datum a;
int main () {
    Datum b;
    Datum* c = new Datum ();
}
```

Solution:

```c++
a: global memory, because a is a global variable
b: stack, because b is a local variable
c: heap, because c is a pointer to a dynamically allocated object
```

