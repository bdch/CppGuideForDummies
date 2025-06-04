# Unit 6

## Preprocessor Directives

### Syntax

What are they? A preprocessor directive is a command that instructs the compiler to preprocess the source code before actual compilation. They are used for including files, defining macros, and conditional compilation.
A symbol that starts a preprocessor directive is `#`.

### Workflow

The preprocessor for a `include` directive replaces the directive with the content of the specified file before the compilation process begins. This allows for code reuse and modular programming.
This means that, this `#include<Datum.h>` is being searched locally in the current directory and then in the system directories.
And this `#include "Datum"` is bein looked in system directories like the ? `STL`.
The syntax of files are not checked, only copied. The checking does the compiler.

### Compiler and Linker

TODO

### Header Guards

A header guard is a mechanism used to prevent multiple inclusions of the same header file in a single translation unit. This is important to avoid redefinition errors and to reduce compilation time.

```c++
#include "Datum.h"
#include "Datum.h"  // twice
```

This will cause : `error: redefinition of class 'Datum'`

This is with header guards:
```c++
#ifndef DATUM_H
#define DATUM_H

class Datum {
  // ...
};

#endif
```

In moder C++ we can use `#pragma once` to achieve the same effect:

```c++
#pragma once
class Datum {
  // ...
};
```