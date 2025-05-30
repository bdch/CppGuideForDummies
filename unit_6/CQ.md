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