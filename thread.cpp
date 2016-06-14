#include <iostream> // std::cout
#include <thread>   // std::thread

int main(int argc, const char *argv[])
{
    std::thread t(  [](){std::cout << "hello thread" << std::endl;} );
    t.join();

    return EXIT_SUCCESS;
} 
