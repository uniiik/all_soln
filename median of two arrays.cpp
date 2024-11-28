#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {7, 8, 9, 5, 4};

    vector<int> result;
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int p = sizeof(arr2) / sizeof(arr2[0]);
    for (int i = 0; i < n; i++) {
        result.push_back(arr1[i]);
    }
    for (int i = 0; i < p; i++) {
        result.push_back(arr2[i]);
    }

    sort(result.begin(), result.end());

    int s = result.size();
    cout << "Size of combined array: " << s << endl;

    cout << "Sorted combined array: ";
    for (auto i : result) {
        cout << i << " ";
    }
    cout << endl;

    if (s % 2 == 0) {
        double median = (result[s/2 - 1] + result[s/2]) / 2.0;
        cout << "Median: " << median << endl;
    } else {
        cout << "Median: " << result[s/2] << endl;
    }

    return 0;
}
