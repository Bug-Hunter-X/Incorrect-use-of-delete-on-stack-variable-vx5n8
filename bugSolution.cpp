#include <iostream>

int main() {
  int *ptr = new int; // Dynamically allocate memory
  *ptr = 10;          // Assign a value
  std::cout << *ptr << std::endl; // Access the value
  delete ptr;        // Deallocate memory
  ptr = nullptr;     // Set the pointer to nullptr (good practice)
  return 0;
} 