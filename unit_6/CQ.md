# Control Questions

With which symbols do preprocessor directives start? (1 Point)

- Solution: #

How is the preprocessor directive `#include` by the preprocessor used? (3 Points)

- The preprocessor replaces the directive with the content of the specified file before the compilation process begins.

For which includes we use <>-variant and for which ""-variant? (2 Points)

- The former looks in system or STL for the file, while the latter looks in the current directory first and then in system directories.

What is the result of the compile step (content, -ending)? (2 Points)

- The compiler compiles the program into a `.o` (UNIX) or `.obj` (Windows) file, which contains the machine code generated from the source code.
This is not a complete executable, but an object file that can be linked later to create an executable.

What is the job of a linker? (3 Points)

- The linker combines multiple object files and libraries into a single executable file. It resolves references between different object files and ensures that all necessary code and data are included in the final executable.
This step happens after the compilation step and is essential for creating a runnable program.

Name the different artifacts a linker can create. (3 Points)

- Executable files (.exe on Windows, no extension on UNIX)
- Static libraries (.lib on Windows, .a on UNIX)
- Dynamic libraries (.dll on Windows, .so on UNIX)

Write an example declaration of a function. (2 Points)

```c++
int add(int a, int b);
```

Write an example definition of a function. (3 Points)

```c++
int add(int a, int b) {
    return a + b;
}
```

What does *Header Guards* prevent? (1 Points)

- Header guards prevent multiple inclusions of the same header file, which can lead to redefinition errors and increased compilation time. They ensure that the contents of a header file are only included once in a single translation unit.

What do preprocessor directives of Header Guards look like? (6 Points)

```c++
#ifndef HEADER_FILE_NAME_H
#define HEADER_FILE_NAME_H

// some code here
#endif HEADER_FILE_NAME_H
```

What two things does a creator of a library need to provide the user? (2 Points)

- The header files that declare the functions, classes, and other entities provided by the library.
- The compiled library files (static or dynamic) that contain the actual implementation of the functions and classes declared in the header files.