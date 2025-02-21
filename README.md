# Incorrect Use of delete on Stack Variable in C++

This repository demonstrates a common error in C++: attempting to use `delete` on a pointer to a stack-allocated variable.  The provided code compiles without error but exhibits undefined behavior at runtime. The solution showcases the correct way to handle dynamically allocated memory using `new` and `delete`.

## Bug Description
The bug lies in the `main` function. The integer variable `x` is declared on the stack, and a pointer `ptr` is assigned its address. The `delete` operator is then incorrectly used on `ptr`. This is incorrect because stack memory is automatically managed by the compiler, and attempting to manually delete it using `delete` results in undefined behavior. 

## Solution
The solution shows how to correctly allocate and deallocate memory using `new` and `delete`.  Dynamic memory allocation is necessary when the required memory size is not known at compile time or when memory needs to persist beyond the scope of a function.