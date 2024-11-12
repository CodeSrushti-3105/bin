#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

// Define a simple structure for Item
struct Item {
    int code;
    string name;
    double cost;

    // Constructor to initialize Item
    Item(int c, string n, double co) : code(c), name(n), cost(co) {}
};

int main() {
    // Create a vector to store Item objects
    vector<Item> items;

    // Add some items to the vector
    items.push_back(Item(101, "Laptop", 50000.0));
    items.push_back(Item(102, "Phone", 20000.0));
    items.push_back(Item(103, "Tablet", 15000.0));
    items.push_back(Item(104, "Monitor", 10000.0));

    // Sort items by cost using the STL sort function and a lambda function
    sort(items.begin(), items.end(), [](const Item& a, const Item& b) {
        return a.cost < b.cost;  // Sort in ascending order of cost
    });

    // Display all items after sorting
    cout << "Items sorted by cost:" << endl;
    for (const auto& item : items) {
        cout << "Item Code: " << item.code << ", Name: " << item.name << ", Cost: " << item.cost << endl;
    }

    // Search for an item by code (e.g., code 102)
    int searchCode = 102;
    bool found = false;
    for (const auto& item : items) {
        if (item.code == searchCode) {
            cout << "\nItem found!" << endl;
            cout << "Item Code: " << item.code << ", Name: " << item.name << ", Cost: " << item.cost << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "\nItem not found." << endl;
    }

    return 0;
}
