#include <cstdint>
#include <iostream>


int main()
{
    char array1[] = "Hello World!";
    int counter = 0U;
    while (true)
    {
        if (array1[counter] == '\0')
        {
            break;
        }
        counter += 1;
    }

    std::cout << "length= " << counter;

    return 0;
}
