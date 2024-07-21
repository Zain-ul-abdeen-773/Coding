#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    if (x < 0) return false;

    // Convert the integer to a string
    string str = to_string(x);

    // Manually compare characters from the beginning and the end of the string
    int n = str.size();
    for (int i = 0; i < n / 2; ++i) {
        if (str[i] != str[n - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    int x1 = 121;
    int x2 = -121;
    
    cout << "Input: " << x1 << "\nOutput: " << (isPalindrome(x1) ? "true" : "false") << endl;
    cout << "Input: " << x2 << "\nOutput: " << (isPalindrome(x2) ? "true" : "false") << endl;
    
    return 0;
}
