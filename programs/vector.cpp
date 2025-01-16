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
