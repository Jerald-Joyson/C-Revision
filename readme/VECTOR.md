## Vector

In C++, the `vector` class is a part of the Standard Template Library (STL). It is a sequence container that encapsulates dynamic size arrays. Vectors can automatically resize themselves to accommodate new elements and can be accessed via iterators. Here’s a detailed explanation of `std::vector` and its functions.

### Including the `vector` header

To use the `vector` class, you must include the `vector` header:

```cpp
#include <vector>
```

### Creating a vector

A vector can be created with various constructors:
```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v1; // Default constructor (empty vector)
    vector<int> v2(5); // Vector of size 5 with default values (0 for int)
    vector<int> v3(5, 10); // Vector of size 5 with all values initialized to 10
    vector<int> v4(v3); // Copy constructor
    vector<int> v5 = {1, 2, 3, 4, 5}; // Initializer list constructor

    return 0;
}
```

### Common member functions

Here are some common member functions of the `std::vector` class:

#### Capacity

1. **size()**: Returns the number of elements in the vector.
   ```cpp
   cout << "Size: " << v1.size() << endl;
   ```

2. **max_size()**: Returns the maximum number of elements that the vector can hold.
   ```cpp
   cout << "Max Size: " << v1.max_size() << endl;
   ```

3. **resize(size_type n)**: Resizes the container to contain `n` elements.
   ```cpp
   v1.resize(10);
   ```

4. **capacity()**: Returns the size of the storage space currently allocated for the vector.
   ```cpp
   cout << "Capacity: " << v1.capacity() << endl;
   ```

5. **empty()**: Checks whether the container is empty.
   ```cpp
   if (v1.empty()) {
       cout << "Vector is empty." << endl;
   }
   ```

6. **reserve(size_type n)**: Requests that the vector capacity be at least enough to contain `n` elements.
   ```cpp
   v1.reserve(20);
   ```

7. **shrink_to_fit()**: Requests the container to reduce its capacity to fit its size.
   ```cpp
   v1.shrink_to_fit();
   ```

#### Element access

1. **operator[]**: Access element at a specific position (no bounds checking).
   ```cpp
   cout << v5[2] << endl; // Outputs 3
   ```

2. **at(size_type n)**: Access element at a specific position (with bounds checking).
   ```cpp
   try {
       cout << v5.at(2) << endl; // Outputs 3
   } catch (out_of_range& e) {
       cout << "Out of range error: " << e.what() << endl;
   }
   ```

3. **front()**: Access the first element.
   ```cpp
   cout << v5.front() << endl; // Outputs 1
   ```

4. **back()**: Access the last element.
   ```cpp
   cout << v5.back() << endl; // Outputs 5
   ```

5. **data()**: Returns a direct pointer to the memory array used internally by the vector.
   ```cpp
   int* ptr = v5.data();
   cout << *ptr << endl; // Outputs 1
   ```

#### Modifiers

1. **assign(size_type n, const T& val)**: Assigns new contents to the vector, replacing its current contents.
   ```cpp
   v1.assign(7, 100); // Vector now contains 7 elements, each with a value of 100
   ```

2. **push_back(const T& val)**: Adds a new element at the end of the vector.
   ```cpp
   v5.push_back(6);
   ```

3. **pop_back()**: Removes the last element in the vector.
   ```cpp
   v5.pop_back();
   ```

4. **insert(iterator position, const T& val)**: Inserts new elements before the element at the specified position.
   ```cpp
   v5.insert(v5.begin() + 2, 99); // Inserts 99 at the third position
   ```

5. **erase(iterator position)**: Removes the element at the specified position.
   ```cpp
   v5.erase(v5.begin() + 2); // Removes the element at the third position
   ```

6. **clear()**: Removes all elements from the vector.
   ```cpp
   v5.clear();
   ```

7. **swap(vector& x)**: Exchanges the contents of the container with those of another vector.
   ```cpp
   v1.swap(v5);
   ```

8. **emplace(iterator position, Args&&... args)**: Constructs an element in place before the specified position.
   ```cpp
   v5.emplace(v5.begin() + 1, 42);
   ```

9. **emplace_back(Args&&... args)**: Constructs an element in place at the end of the vector.
   ```cpp
   v5.emplace_back(99);
   ```

### Iterators

1. **begin() / cbegin()**: Returns an iterator to the beginning.
   ```cpp
   auto it = v5.begin();
   cout << *it << endl;
   ```

2. **end() / cend()**: Returns an iterator to the end.
   ```cpp
   auto it_end = v5.end();
   ```

3. **rbegin() / crbegin()**: Returns a reverse iterator to the beginning.
   ```cpp
   auto rit = v5.rbegin();
   ```

4. **rend() / crend()**: Returns a reverse iterator to the end.
   ```cpp
   auto rit_end = v5.rend();
   ```

### Example usage

Here’s a complete example demonstrating various functionalities of `std::vector`:

```cpp
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};

    // Access elements
    cout << "Element at index 2: " << v[2] << endl;
    cout << "Element at index 2 (with bounds checking): " << v.at(2) << endl;
    cout << "First element: " << v.front() << endl;
    cout << "Last element: " << v.back() << endl;

    // Modify vector
    v.push_back(6);
    v.pop_back();
    v.insert(v.begin() + 2, 99);
    v.erase(v.begin() + 2);
    v.emplace(v.begin() + 2, 42);
    v.emplace_back(99);

    // Iterate over vector
    cout << "Vector elements: ";
    for (auto it = v.begin(); it != v.end(); ++it) {
        cout << *it << " ";
    }
    cout << endl;

    // Capacity
    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;
    v.reserve(20);
    cout << "New Capacity: " << v.capacity() << endl;

    // Clear vector
    v.clear();
    cout << "Size after clear: " << v.size() << endl;

    return 0;
}
```

This example covers a wide range of functionalities provided by `std::vector`. Using `std::vector`, you can manage dynamic arrays efficiently in C++.

[![previous](https://img.shields.io/badge/%3C%3C%20Previous-%238A2BE2.svg?logo=&logoColor=white)](../README.md "previous page") [![next](https://img.shields.io/badge/Next%20%3E%3E-%238A2BE2.svg?logo=&logoColor=white)](./2.README.md "next page")
