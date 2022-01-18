#include "resman.hpp"

int main(int argc, char* argv[])
{
    switch (argc)
    {
        case 1:
            std::cerr << "Invalid first argument.\n";
            return -1;
        case 2:
            if(!chen::Resman::packFolder(argv[1]))
            {
                std::cerr << "Couldn't load input folder.\n";
                return -1;
            }
            break;
        default:
            if(!chen::Resman::packFolder(argv[1], argv[2])) 
            {
                std::cerr << "Couldn't load input or output folder.\n";
                return -1;
            }
            break;
    }

    return 0;
}