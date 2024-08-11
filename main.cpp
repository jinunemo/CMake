#include <iostream>
#include <OLASConfig.h>

int main(int argc, char* argv[]) 
{ 
    std::cout << "Hi" << std::endl; 
    std::cout << argv[0] << " Version " << OLAS_VERSION_MAJOR << "." << OLAS_VERSION_MINOR << std::endl;
    return 0;
}