# Greedy Algorithm

## Coin Change Problem (Greedy Approach)

* **Goal**: Minimize the number of coins required to make a given amount using available denominations.

* **Steps**:
  1. Use the **largest denomination** that does not exceed the remaining amount.
  2. Subtract the value of the selected coin from the amount.
  3. Repeat until the amount becomes zero.

* **Bangladeshi Denominations**: `{1000, 500, 100, 50, 20, 10, 5, 2, 1}`.

* **Example**:
  - **Amount**: `3782 Taka`
  - **Coins Used**: `1000, 1000, 1000, 500, 100, 100, 50, 20, 10, 2`
  - **Total Coins**: `12`

* **Properties**:
  - **Greedy Choice Property**: Locally optimal choices lead to the global solution.
  - **Optimal Substructure**: Solution to the problem includes solutions to subproblems.

* **Complexity**:
  - **Time Complexity**: \(O(n)\) (iterate over denominations).
  - **Space Complexity**: \(O(k)\) (store results).

**Example :**
```c++
#include <iostream>
using namespace std;

// Function to calculate the minimum number of coins
void coinChange(int amount, int denominations[], int size) {
    int result[100]; // To store selected coins (assuming a max of 100 coins needed)
    int totalCoins = 0;

    for (int i = 0; i < size; i++) {
        // Use as many of the largest coin as possible
        while (amount >= denominations[i]) {
            amount -= denominations[i];
            result[totalCoins] = denominations[i];
            totalCoins++;
        }
    }

    // Output the result
    if (amount == 0) {
        cout << "Minimum coins required: " << totalCoins << "\n";
        cout << "Coins used: ";
        for (int i = 0; i < totalCoins; i++) {
            cout << result[i] << " ";
        }
        cout << "\n";
    } else {
        cout << "The given amount cannot be represented with the available denominations.\n";
    }
}

int main() {
    // Bangladeshi Taka denominations
    int denominations[] = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
    int size = sizeof(denominations) / sizeof(denominations[0]);

    // Input the amount
    int amount;
    cout << "Enter the amount in Taka: ";
    cin >> amount;

    // Call the function
    coinChange(amount, denominations, size);

    return 0;
}
```

## Bin Packing Problem (Greedy Approach)

* **Goal**: Minimize the number of bins required to pack items of various sizes.

* **Steps (Greedy Approach)**:
  1. **Sort items by size** (optional for optimization).
  2. Iterate through the items:
     - Place each item into the first bin that has enough remaining space.
     - If no bin can accommodate the item, open a new bin.
  3. Repeat until all items are placed.

* **Example**:
  - **Bin Capacity**: `10`
  - **Items**: `{2, 5, 4, 7, 1, 3, 8}`
  - **Bins Used**: `4`
  - **Packing**:
    - Bin 1: `{8, 2}`
    - Bin 2: `{7, 3}`
    - Bin 3: `{5, 4}`
    - Bin 4: `{1}`

* **Properties**:
  - **Greedy Nature**: Makes locally optimal choices by placing items in the first available bin.
  - **Suboptimal**: May not always produce the global optimal solution.

* **Complexity**:
  - **Time Complexity**: \(O(n \cdot b)\), where \(n\) is the number of items and \(b\) is the number of bins.
  - **Space Complexity**: \(O(b)\), for tracking bin capacities.

**Example :**
```c++
#include <iostream>
using namespace std;

void binPacking(int items[], int n, int binCapacity) {
    int bins[100]; // Array to store remaining space in each bin
    int binCount = 0; // Total number of bins used

    // Iterate over each item
    for (int i = 0; i < n; i++) {
        bool placed = false;

        // Try to place the item in an existing bin
        for (int j = 0; j < binCount; j++) {
            if (bins[j] >= items[i]) { // Check if the item fits
                bins[j] -= items[i];
                placed = true;
                break;
            }
        }

        // If the item does not fit in any existing bin, use a new bin
        if (!placed) {
            bins[binCount] = binCapacity - items[i];
            binCount++;
        }
    }

    // Output the result
    cout << "Total bins used: " << binCount << "\n";
}

int main() {
    // Input: Item sizes and bin capacity
    int items[] = {2, 5, 4, 7, 1, 3, 8};
    int n = sizeof(items) / sizeof(items[0]);
    int binCapacity = 10;

    cout << "Items: ";
    for (int i = 0; i < n; i++) {
        cout << items[i] << " ";
    }
    cout << "\n";

    // Call the bin packing function
    binPacking(items, n, binCapacity);

    return 0;
}
```