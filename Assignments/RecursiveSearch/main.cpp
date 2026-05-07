#include <iostream>
#include <vector>
#include <numeric>

// Declaration of recursive search function
int recursiveSearch(const std::vector<int> vec, int target, int index);

int main() {
    // Create a vector of size 25 and fill with values 1-25 using std::iota
    std::vector<int> vec(25);
    std::iota(vec.begin(), vec.end(), 1);

    // Define the number to search for
    int target = 13;
    
    // Call recursive search function
    int result = recursiveSearch(vec, 13, 0);

    // Output the result
    if (result != -1) {
        std::cout << "Element found at index: " << result<< std::endl;
    } else {
        std::cout << "Element not found" << std::endl;
    }

    return 0;
}

// Recursive function to search for target in vector
// Returns the index of the number if found, or returns -1 if not
int recursiveSearch(const std::vector<int> vec, int target, int index) {
    // if list empty it means element not found
    if (index == vec.size()) {
        return -1;
    }
    // Base case: check if number is at current index
    if (vec[index] == target) {
        return index;
    }
    // Go on to the next index and check again if element is at current index
    return recursiveSearch(vec, target, index + 1);
}