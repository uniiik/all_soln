#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {0, 2, 0, 5, 0, 2, 45, 0, 0, 3, 7, 8, 0, 9, 74};
    int size = sizeof(arr) / sizeof(arr[0]);

    vector<int> zero;
    vector<int> nonzero;
    
    // Separate zeros and non-zero elements
    for (auto i : arr) {
        if (i == 0)
            zero.push_back(i);
        else
            nonzero.push_back(i);
    }

    // Combine non-zero elements followed by zeros
    int index = 0;
    for (auto i : nonzero) {
        arr[index++] = i;
    }
    for (auto i : zero) {
        arr[index++] = i;
    }

    // Display the result
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
