#include <iostream>
#include <vector>
#include <string>

using namespace std;

string longestCommonPrefix(vector<string>& strs) {
    if (strs.empty()) {
        return "";
    }

    string prefix = strs[0]; // Use the first string as the initial prefix

    for (int i = 1; i < strs.size(); i++) {
        // Find the common prefix between the current prefix and the next string
        while (strs[i].find(prefix) != 0) {
            prefix = prefix.substr(0, prefix.length() - 1);
            if (prefix.empty()) {
                return "";
            }
        }
    }

    return prefix;
}

int main() {
    vector<string> strs1 = {"flower", "flow", "flight"};
    vector<string> strs2 = {"dog", "racecar", "car"};

    cout << longestCommonPrefix(strs1) << endl; 
    cout << longestCommonPrefix(strs2) << endl; 

    return 0;
}
