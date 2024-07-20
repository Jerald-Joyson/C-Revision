# C++ - revision

#### Specific topics or areas that we are focus on? Some common areas to revise in C++ include:

1. **Basic Syntax and Data Types**
2. **Control Structures (if, switch, loops)**
3. **Functions**
4. **Object-Oriented Programming (Classes and Objects)**
5. **Pointers and Memory Management**
6. **STL (Standard Template Library)**
7. **File Handling**
8. **Error Handling (Exception Handling)**
9. **Advanced Topics (Templates, Multithreading, etc.)**

### 1. Basic Syntax and Data Types

#### Basic Structure of a C++ Program

A simple C++ program typically looks like this:

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

- `#include <iostream>`: This is a preprocessor directive that includes the standard input-output stream library.
- `int main() { ... }`: This is the main function from which execution of any C++ program begins.
- `std::cout`: Used to output/print text to the console.
- `<< "Hello, World!"`: The insertion operator `<<` is used to send the string "Hello, World!" to the `cout` stream.
- `std::endl`: Ends the line and flushes the buffer.
- `return 0;`: Returns 0 to the operating system, indicating that the program ended successfully.

#### Data Types

C++ provides several basic data types:

1. **Integer types**:

   - `int`: Standard integer type.
   - `short`: Short integer type, usually smaller than `int`.
   - `long`: Long integer type, usually larger than `int`.
   - `long long`: An even larger integer type.
   - `unsigned`: Represents non-negative integers (can be used with `int`, `short`, `long`, etc.).
2. **Floating-point types**:

   - `float`: Single-precision floating-point.
   - `double`: Double-precision floating-point.
   - `long double`: Extended-precision floating-point.
3. **Character types**:

   - `char`: Represents a single character (typically 1 byte).
   - `wchar_t`: Wide character type.
4. **Boolean type**:

   - `bool`: Represents boolean values (`true` or `false`).
5. **Void type**:

   - `void`: Represents the absence of type (typically used for functions that do not return a value).

#### Variable Declaration and Initialization

Variables must be declared before they are used. Declaration involves specifying the type and the variable name.

```cpp
int age; // Declaration
age = 25; // Initialization

int height = 180; // Declaration and initialization
```

#### Constants

Use the `const` keyword to define constant values that cannot be changed:

```cpp
const double PI = 3.14159;
```

#### Basic Input and Output

Input and output operations are handled using `cin` and `cout`:

```cpp
#include <iostream>

int main() {
    int number;
    std::cout << "Enter a number: ";
    std::cin >> number;
    std::cout << "You entered: " << number << std::endl;
    return 0;
}
```

- `std::cin`: Used to receive input from the user.
- `>>`: Extraction operator used to get the input value.

use the `using namespace std` to avoid `std::`

```cpp
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    cout << "You entered: " << number << endl;
    return 0;
}
```

[![next](https://img.shields.io/badge/Next%20%3E%3E-%238A2BE2.svg?logo=&logoColor=white)](./readme/2.README.md "next page")
