#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string s = "hello world";
    auto it = remove(s.begin(), s.end(), 'l'); // 'l' to be removed

    // Print the full string after remove
    cout << "Full string after remove: " << s << endl; // shows: heo wordld

    // Print only the valid part (up to the returned iterator)
    cout << "Logical string after remove: ";
    for (auto p = s.begin(); p != it; ++p) {
        cout << *p; // shows: heo word
    }
    cout << endl;

    return 0;
}
