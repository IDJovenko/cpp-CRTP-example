# Example Implementation of CRTP (Curiously Recurring Template Pattern) in C++

This repository demonstrates the use of the CRTP (Curiously Recurring Template Pattern) design pattern in a simple C++ project. The project features a base template class Comparable, which uses the < operator from derived classes to define other comparison operations (>, <=, >=). Additionally, two derived classes are provided: ComparableString and ComparableVector.

## Project Structure

- src/: Contains source files with class implementations.
  - Comparable.h: Definition of the base template class Comparable.
  - ComparableString.h: Definition of the derived class ComparablePerson.
  - ComparableVector.h: Definition of the derived class ComparableVector.
  - main.cpp: File with usage examples of the classes.


## Installation and Execution

To run the example, you will need a C++ compiler that supports the C++17 standard or higher, such as GCC or Clang.

### Compilation and Execution

```bash
g++ -std=c++17 main.cpp -o example && ./example
```

or

```bash
clang++ -std=c++17 main.cpp -o example && ./example
```

This will create an executable file named example to demonstrate functionality and run it.

## Class Descriptions

### Base Class Comparable

The base template class Comparable provides an interface for all standard comparison operations. It uses the < operator from the derived class to implement other comparison operators.

### Derived Class ComparablePerson

The ComparablePerson class inherits from Comparable and implements the < operator for comparing a person's first name and last name.

### Derived Class ComparableVector

The ComparableVector class inherits from Comparable and implements the < operator for comparing vectors.

---

I hope this example helps you better understand the principles of CRTP!