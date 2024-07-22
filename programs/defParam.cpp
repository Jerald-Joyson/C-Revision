#include <iostream>
#include <string>
using namespace std;

void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

int main() {
    greet(); // Uses default argument
    greet("Alice"); // Uses provided argument
    return 0;
}
