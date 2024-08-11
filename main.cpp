#include <iostream>
#include <OLASConfig.h>

int main(int argc, char* argv[]) 
{ 
    std::cout << "Hi" << std::endl; 

#ifdef USE_ADDER
    std::cout << "using Adder lib:" << adder::add(72.1f, 73.8f) << std::endl; 
#else
    std::cout << "NOT USING Adder lib:" << 72.1f + 73.8f << std::endl; 
#endif

    std::cout << argv[0] << " Version " << OLAS_VERSION_MAJOR << "." << OLAS_VERSION_MINOR << std::endl;
    return 0;
}