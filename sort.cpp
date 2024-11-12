#include <iostream>
#include <vector>
#include <algorithm>  // For sort and find

using namespace std;

void displayVector(const vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<int> numbers;
    int n, element;

    cout << "Enter the number of elements: ";
    cin >> n;

    cout << "Enter the elements:" << endl;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        numbers.push_back(num);
    }

    // Sorting the vector
    sort(numbers.begin(), numbers.end());
    cout << "Sorted elements: ";
    displayVector(numbers);

    // Searching for an element
    cout << "Enter the element to search for: ";
    cin >> element;

    auto it = find(numbers.begin(), numbers.end(), element);
    if (it != numbers.end()) {
        cout << "Element found at index: " << distance(numbers.begin(), it) << endl;
    } else {
        cout << "Element not found!" << endl;
    }

    return 0;
}
