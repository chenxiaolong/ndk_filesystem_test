#include <experimental/filesystem>
#include <iostream>

int main()
{
    std::experimental::filesystem::path p("/tmp/foobar");
    std::cout << p << '\n';
    std::experimental::filesystem::remove_all(p);
}
