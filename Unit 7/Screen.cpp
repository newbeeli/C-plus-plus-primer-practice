#include "Screen.h"
#include "iostream"

int main(void)
{
    Screen a(5,5,'X');

    a.move(4,0).set('#').display(std::cout);
    std::cout << "\n";
    a.display(std::cout);
    std::cout << "\n";

    window_mgr b;
    b.clear(a, std::cout);

    return 0;
}