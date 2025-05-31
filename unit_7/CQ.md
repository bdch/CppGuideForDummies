# Control Questions

Name two methods, on how the invoker knows if a function call is successful or not. (2 Points)#

- logging
- return value
- exceptions

Which types can and should be directly after a `throw` statement? (2 Points)

- `std::exception` or derived classes
- primitive types (int, float, etc.) for simple error codes

What is the output of the following code? (4 Points)

```c++
try {
    throw std :: runtime_error (" Test 1");
}
catch ( std :: runtime_error& e ) {
    cout << " A ";
}
catch ( std :: exception& e ) {
    cout << " B ";
}
catch (...) {
    cout << " C ";
}
try {
    throw std :: runtime_error (" Test 2");
}
catch ( std :: exception& e ) {
    cout << " D ";
}
catch (...) {
    cout << " E ";
}
try {
    throw std :: runtime_error (" Test 3");
}
catch (...) {
    cout << " F ";
}
try {
    throw std :: string (" Test 4");
}
catch ( std :: exception& e ) {
    cout << " G ";
}
catch (...) {
    cout << " H ";
}
```

Solution: A D F H

The first exception is being caught by the A block, since its a runtime error.
The same goes for the second. The third is caught by the F block, since it is a runtime error and the catch block is for all exceptions `(...)`.
The last throw is a `std::string`, which is not derived from `std::exception`, so it is caught by the H block.