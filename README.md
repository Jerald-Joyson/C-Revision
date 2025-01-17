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
- `using namespace std;`: is a directive that tells the compiler to use the standard namespace. Namespaces are used in C++ to organize code into logical groups and to prevent name collisions that can occur especially when your code base includes multiple libraries.

Here’s what `using namespace std;` does:

1. **Simplifies Code** : It allows you to use the standard library classes and functions without prefixing them with `std::`. For example, you can write `cout` instead of `std::cout` and `vector` instead of `std::vector`.
2. **Convenience** : It is particularly useful in examples or smaller programs where using the full namespace notation would make the code harder to read.

Here’s an example of a program with and without `using namespace std;`:

**Without `using namespace std;`:**

```cpp
#include <iostream>

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
```

**With `using namespace std;`:**

```cpp
#include <iostream>

using namespace std;

int main() {
    cout << "Hello, World!" << endl;
    return 0;
}
```

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

### cin and getline

In C++, `cin` and `getline` are both used for input, but they handle input in different ways, especially when dealing with strings and whitespace.

**1. `cin` (Standard Input Stream)**

- **Purpose:** `cin` is an object of the `std::istream` class and is used to read input from the standard input (usually the keyboard).
- **Behavior:**
  - Reads input until it encounters whitespace (space, tab, newline).
  - Extracts the input and converts it to the appropriate data type.
  - Leaves the whitespace character in the input buffer.
- **Example:**

```c++
#include <iostream>
#include <string>

int main() {
    std::string word1, word2;

    std::cout << "Enter two words: ";
    std::cin >> word1 >> word2;

    std::cout << "You entered: " << word1 << " and " << word2 << std::endl;

    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    std::cout << "You entered: " << num << std::endl;

    return 0;
}
```

If you input "Hello World 123", `word1` will contain "Hello", `word2` will contain "World", and `num` will contain 123. The newline character after "123" is left in the input buffer.

- **Problem with Whitespace:** `cin`'s behavior of stopping at whitespace can be problematic when you need to read an entire line of text, including spaces.

**2. `getline` (String Input)**

- **Purpose:** `getline` is a function (specifically `std::getline`) that reads an entire line of input, including whitespace, until it encounters a delimiter character (by default, the newline character `\n`).
- **Syntax:** `std::getline(input_stream, string_variable, delimiter);`
  - `input_stream`: The input stream to read from (usually `std::cin`).
  - `string_variable`: The string variable to store the input.
  - `delimiter`: The character that marks the end of the input line (optional; defaults to `\n`).
- **Example:**

```c++
#include<iostream>
#include<string>

intmain(){
    std::string line;

    std::cout << "Enter a line of text: ";
    std::getline(std::cin, line);

    std::cout << "You entered: " << line << std::endl;

    return0;
}
```

If you input "This is a line of text.", the entire sentence, including the spaces, will be stored in the `line` string.

**Handling the Newline Character after `cin`**

A common issue arises when you use `cin` followed by `getline`. Because `cin` leaves the newline character in the buffer, the subsequent `getline` might read only the newline character, resulting in an empty string. To solve this, you can use `std::cin.ignore()` to discard the remaining characters in the buffer, including the newline.

```c++
#include <iostream>
#include <string>
#include <limits> // Required for numeric_limits

int main() {
    int num;
    std::string line;

    std::cout << "Enter a number: ";
    std::cin >> num;

    // Clear the input buffer to remove the newline character left by cin
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::cout << "Enter a line of text: ";
    std::getline(std::cin, line);
    // std::getline(std::cin >> std::ws, line); // this also can be used to remove white spaces and newline in each input


    std::cout << "You entered number: " << num << std::endl;
    std::cout << "You entered line: " << line << std::endl;

    return 0;
}
```

`std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');` discards up to the maximum possible number of characters in the stream buffer until a newline character is encountered, or the buffer is empty. This effectively clears the buffer.

**Summary:**

- Use `cin` to read single words or values separated by whitespace.
- Use `getline` to read entire lines of text, including whitespace.
- Be mindful of the newline character left in the buffer by `cin` and use `std::cin.ignore()` to handle it when necessary, especially before using `getline`.

### **Typedef and Type Aliases**

In C++, both `typedef` and type aliases (introduced with `using`) provide ways to create alternative names for existing data types. They essentially create synonyms, making code more readable and maintainable. Let's explore each of them:

**1. `typedef`**

- **Syntax:** `typedef existing_type new_type_name;`
- It's a traditional C-style way of creating type aliases.

**Example:**

```c++
typedef unsigned int uint;
uint counter = 0; // Equivalent to unsigned int counter = 0;

typedef std::pair<std::string, int> NameAgePair;
NameAgePair person = {"Alice", 30};
```

**2. Type Aliases (`using`)**

- **Syntax:** `using new_type_name = existing_type;`
- Introduced in C++11, it offers a more readable and consistent syntax, especially for complex types.

**Example:**

```c++
using uint = unsigned int;
uint counter = 0; // Equivalent to unsigned int counter = 0;

using NameAgePair = std::pair<std::string, int>;
NameAgePair person = {"Alice", 30};
```

**Key Differences and Advantages of Type Aliases**

- **Readability:** The `using` syntax is often considered more readable, especially when dealing with function pointers or complex template types. The order of the type and the alias is more natural.
- **Templates:** Type aliases can be used with templates, which was not possible with `typedef`. This allows for creating alias templates.

**Example of Alias Template:**

```c++
template <typename T>
using Vec = std::vector<T>;

Vec<int> intVec;      // Equivalent to std::vector<int>
Vec<std::string> strVec; // Equivalent to std::vector<std::string>
```

**Which one to use?**

While `typedef` is still valid C++, type aliases (`using`) are generally preferred in modern C++ due to their improved readability and support for templates.

**In summary:** Both `typedef` and type aliases serve the purpose of creating alternative names for types. Type aliases offer a more modern and flexible approach, especially when working with templates, making them the recommended choice in contemporary C++ development.

### Implicit and Explicit type conversion

In C++, type conversion (also known as type casting) **refers to the process of converting a value from one data type to another. There are two main types of type conversions: implicit and explicit.**^1^

**1. Implicit Type Conversion (Coercion)**

- **Definition:** Implicit type conversion is performed automatically by the compiler without any explicit instruction from the programmer. It usually happens when an expression involves operands of different data types. The compiler converts one or more operands to a compatible type to perform the operation.
- **Common Scenarios:**
  - **Arithmetic Conversions:** When arithmetic operators are used with operands of different types (e.g., `int` and `double`), the compiler performs conversions to ensure compatibility. Generally, the "smaller" type is promoted to the "larger" type to avoid loss of precision. For example, an `int` is converted to a `double` in an expression involving both.
  - **Assignment Conversions:** When a value of one type is assigned to a variable of another type, implicit conversion might occur. For example, assigning an `int` to a `double` variable.
  - **Function Argument Conversions:** When passing arguments to functions, implicit conversions can take place if the function's parameter types don't exactly match the argument types.
- **Example:**

```c++
int x = 10;
double y = 3.14;
double z = x + y; // x is implicitly converted to double before the addition

int a = 5.7; // double is implicitly converted to int (truncation occurs)
std::cout << a << std::endl; // Output: 5
```

- **Potential Issues:** Implicit conversions can sometimes lead to unexpected behavior or loss of data (e.g., truncation when converting a `double` to an `int`). It's important to be aware of the conversion rules to avoid such issues.

**2. Explicit Type Conversion (Casting)**

- **Definition:** Explicit type conversion is performed by the programmer using casting operators. This gives the programmer more control over the conversion process.
- **C-style Cast:**
  - **Syntax:** `(type)expression`
  - **Example:**

```c++
double pi = 3.14159;
int intPi = (int)pi; // Explicitly convert double to int (truncation)
std::cout << intPi << std::endl; // Output: 3
```

- **C++ Cast Operators:** C++ provides more specific and safer casting operators:
  - `static_cast`: Used for non-polymorphic conversions (e.g., numeric conversions, conversions between related pointer types). It performs compile-time checks.
  - `dynamic_cast`: Used for polymorphic conversions (involving inheritance and virtual functions). It performs run-time checks and returns `nullptr` if the conversion fails.
  - `reinterpret_cast`: Used for low-level reinterpretation of bits (e.g., converting a pointer of one type to a pointer of another unrelated type). It's generally unsafe and should be used with extreme caution.
  - `const_cast`: Used to add or remove the `const` qualifier from a variable.
- **Examples of C++ Casts:**

```c++
double d = 10.5;
int i = static_cast<int>(d); // static_cast is safer than C-style cast

int* ptr1 = new int(10);
double* ptr2 = reinterpret_cast<double*>(ptr1); // Reinterpreting bits (use with caution)

const int constValue = 42;
int* nonConstPtr = const_cast<int*>(&constValue); // Removing constness (use with caution)
*nonConstPtr = 100; // Undefined Behavior if constValue was truly const.

class Base { public: virtual ~Base(){} };
class Derived : public Base {};

Base* b = new Derived();
Derived* derivedPtr = dynamic_cast<Derived*>(b); // dynamic_cast for polymorphic types
if (derivedPtr != nullptr) {
    // Conversion successful
}
```

**Which to use?**

- Prefer C++ cast operators (`static_cast`, `dynamic_cast`, `reinterpret_cast`, `const_cast`) over C-style casts whenever possible. They are more specific, safer, and provide better compile-time and run-time checks.
- Use `static_cast` for most common conversions (numeric, pointer conversions within the same hierarchy without virtual functions).
- Use `dynamic_cast` for polymorphic conversions (when dealing with inheritance and virtual functions).
- Use `reinterpret_cast` only when absolutely necessary for low-level operations and understand the potential risks.
- Use `const_cast` only when you absolutely need to modify a `const` object and understand the potential undefined behavior if the original object was truly `const`.

By understanding the differences between implicit and explicit type conversions and using the appropriate casting operators, you can write safer and more maintainable C++ code.

#### More About Standard C++ Library reference [visit &gt;&gt;](https://cplusplus.com/reference)

### Learn more about Arrays [![next](https://img.shields.io/badge/Click%20me%20%3E%3E-%238A2BE2.svg?logo=&logoColor=white)](./readme/ARRAY.md "array page")

### Learn more about Vector Array [![next](https://img.shields.io/badge/Click%20me%20%3E%3E-%238A2BE2.svg?logo=&logoColor=white)](./readme/VECTOR.md "vector page")

[![next](https://img.shields.io/badge/Next%20%3E%3E-%238A2BE2.svg?logo=&logoColor=white)](./readme/2.README.md "next page")
