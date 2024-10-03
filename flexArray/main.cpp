#include <iostream>
#include "FlexArray.hpp"  // Assuming FlexArray is defined in this header file

int main() {
    // Create a FlexArray with an initial capacity of 10
    size_t initialCapacity = 10;
    FlexArray flexArray(initialCapacity);

    // Add some elements to the FlexArray
    for (int i = 0; i < 15; i++) {
        flexArray.add(i);
    }

    // Print out the contents of the FlexArray
    std::cout << "FlexArray contents: ";
    for (size_t i = 0; i < flexArray.size(); ++i) {
        std::cout << flexArray[i] << " ";
    }
    std::cout << std::endl;

    // Print out the size and capacity
    std::cout << "FlexArray size: " << flexArray.size() << std::endl;
    std::cout << "FlexArray capacity: " << flexArray.capacity() << std::endl;

    // Test removing an element
    std::cout << "Removing element at index 5..." << std::endl;
    flexArray.removeAt(5);

    // Print out the contents after removal
    std::cout << "FlexArray contents after removal: ";
    for (size_t i = 0; i < flexArray.size(); ++i) {
        std::cout << flexArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}