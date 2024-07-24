#include <iostream>
#include <string>
using namespace std;

template <typename T>
T add(T a, T b) {
    return a + b;
}

/**
 * @brief Template specialization for adding two characters together.
 *        Instead of performing addition, it concatenates the two characters
 *        as strings.
 *
 * @param a The first character.
 * @param b The second character.
 * @return The concatenated string formed by the two characters.
 */
template <>
string add(char a, char b) {
    // Convert the characters to strings of length 1
    string strA(1, a);
    string strB(1, b);

    // Concatenate the two strings
    return strA + strB;
}

int main() {
    cout << add(5, 3) << endl;                    
    cout << add(5.5, 3.2) << endl;                
    cout << add(string("hello"), string("world")) << endl; 
    cout << add('A', 'D') << endl;                // Adding characters as strings

    return 0;
}
