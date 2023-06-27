#include <iostream>

int main()
{
    int n, an = 0;
    std::cin >> n;

    while (n)
    {
        if (n & 1)
            an++;
        n >>= 1;
    }

    std::cout << an << std::endl;

    return 0;
}
