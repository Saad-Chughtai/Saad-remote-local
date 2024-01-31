#include <iostream>
#include <algorithm> // for reverse function

const int arraySize = 5;

void inputArray(int myArray[], int size) {
    std::cout << "Enter " << size << " integers for the array:\n";
    for (int i = 0; i < size; ++i) {
        std::cout << "Enter element #" << (i + 1) << ": ";
        std::cin >> myArray[i];
    }
}

void printArray(const int myArray[], int size, const std::string& label) {
    std::cout << label << ": ";
    for (int i = 0; i < size; ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;
}

void reverseArray(int myArray[], int size) {
    std::reverse(myArray, myArray + size);
}

int main() {
    int myArray[arraySize];

    inputArray(myArray, arraySize);
    printArray(myArray, arraySize, "Original Array");

    reverseArray(myArray, arraySize);
    printArray(myArray, arraySize, "Reversed Array");

    return 0;
}
