#include <cstdint>
#include <iostream>


int main()
{
    //char first_name[] = {'h', 'a', '\0'};
    char kogo[] = {'h', 'T', 'X'};
    char kogo3[] = {'P', '\0', 'K'};

    char freise[] = "Haxnfressn";
    char freise2[] = "nudln\0mit haxn";

    std::cout << "  ********* " << kogo << std::endl;
    std::cout << "  kogo3 " << kogo3 << std::endl;
    std::cout << "  freise " << freise << std::endl;
    std::cout << "  freise2 " << freise2 << std::endl;

    return 0;
}
