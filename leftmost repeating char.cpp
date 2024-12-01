#include <bits/stdc++.h>
using namespace std;

char leftmostRepeatingCharacter(string str) {
    unordered_map<char, int> umap;

    for (char c : str) {
        umap[c]++;
    }

    for (char c : str) {
        if (umap[c] > 1) {
            return c; 
        }
    }

    return '\0'; 
}

int main() {
    string str = "geekforgeeks";
    char result = leftmostRepeatingCharacter(str);

    if (result != '\0') {
        cout << "The leftmost repeating character is: " << result << endl;
    } else {
        cout << "No repeating characters found." << endl;
    }

    return 0;
}
