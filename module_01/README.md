## FileStream
std::ifstream for input stream \
std::ofstream for output stream
```cpp
#include <iostream>
#include <fstream>

int main() {
    std::ifstream ifs("numbers");
    unsigned int dst;
    unsigned int dst2;
    ifs >> dst >> dst2;

    std::cout << dst << " " << dst2 << std::endl;
    ifs.close();

    //-----------------------

    std::ofstream ofs("test.out");

    ofs << "I like ponies a whole damn lot" << std::endl;
    ofs.close();
}
```
