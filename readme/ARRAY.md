### Introduction to Arrays in C++

An array is a collection of elements of the same type placed in contiguous memory locations. The idea is to store multiple items of the same type together.

#### Syntax

Here’s the basic syntax to declare an array:

```cpp
type arrayName[arraySize];
```

- `type`: This can be any valid C++ data type.
- `arrayName`: This is the name of the array.
- `arraySize`: This is the number of elements in the array.

#### Example

Let's declare and initialize an array of integers:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5]; // Declaration of an array of 5 integers

    // Initializing the array elements
    numbers[0] = 10;
    numbers[1] = 20;
    numbers[2] = 30;
    numbers[3] = 40;
    numbers[4] = 50;

    // Accessing the array elements
    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " : " << numbers[i] << endl;
    }

    return 0;
}
```

#### Initialization at the time of Declaration

You can also initialize the array at the time of declaration:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++) {
        cout << "Element at index " << i << " : " << numbers[i] << endl;
    }

    return 0;
}
```

### Important Points to Remember

1. **Indexing**: Array indices start from 0 and go up to `arraySize - 1`.
2. **Contiguous Memory**: All elements of the array are stored in contiguous memory locations.
3. **Fixed Size**: The size of an array is fixed and must be known at compile time.
4. **Bounds Checking**: C++ does not perform bounds checking on arrays. Accessing out-of-bound elements leads to undefined behavior.

### Multi-Dimensional Arrays

C++ supports multi-dimensional arrays. Here’s an example of a two-dimensional array:

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declaration of a 2D array
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Accessing elements of the 2D array
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cout << "Element at matrix[" << i << "][" << j << "] : " << matrix[i][j] << endl;
        }
    }

    return 0;
}
```

### Common Operations

#### Finding the Length of an Array

In C++, you can determine the length of an array using the `sizeof` operator:

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    cout << "Length of the array is: " << length << endl;

    return 0;
}
```

#### Summing Elements of an Array

```cpp
#include <iostream>
using namespace std;

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    int length = sizeof(numbers) / sizeof(numbers[0]);
    int sum = 0;

    for(int i = 0; i < length; i++) {
        sum += numbers[i];
    }

    cout << "Sum of array elements is: " << sum << endl;

    return 0;
}
```

[![previous](https://img.shields.io/badge/%3C%3C%20Previous-%238A2BE2.svg?logo=&logoColor=white)](./readme/README.md "previous page") [![next](https://img.shields.io/badge/Next%20%3E%3E-%238A2BE2.svg?logo=&logoColor=white)](./readme/2.README.md "next page")
