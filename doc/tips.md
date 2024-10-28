# C++ Tips and Tricks

This document provides useful tips and best practices for C++ development. Follow these tips to write cleaner, safer, and more efficient C++ code.

## Tip 1: Avoid `try-catch` for `new` with `std::nothrow`

When dynamically allocating memory using `new`, you may prefer not to throw an exception on failure. By using the `new(std::nothrow)` syntax, you can avoid the overhead of exceptions and handle the error in a more C-like fashion, by simply checking if the returned pointer is `nullptr`.

### Example

```cpp
#include <iostream>
#include <new> // Required for std::nothrow

int main()
{
    // Allocation with throwing version of new
    try
    {
        while (true)
        {
            new int[100000000ul];   // May throw std::bad_alloc
        }
    }
    catch (const std::bad_alloc& e)
    {
        std::cout << "Exception caught: " << e.what() << '\n';
    }

    // Allocation with non-throwing version of new (using std::nothrow)
    while (true)
    {
        int* p = new(std::nothrow) int[100000000ul]; // Returns nullptr instead of throwing
        if (p == nullptr)
        {
            std::cout << "Allocation returned nullptr\n";
            break;
        }
    }
}
```

### Explanation

- **Throwing version**: The standard `new` will throw a `std::bad_alloc` exception if the memory allocation fails. This is helpful in some cases but can be costly due to exception handling overhead.
- **Non-throwing version**: Using `new(std::nothrow)` will return a `nullptr` instead of throwing an exception. This is similar to C-style memory allocation using `malloc()`, and you can handle the failure by checking if the returned pointer is `nullptr`.
