#include "Array.hpp"
#include <iostream>

int main (void){
	
    Array<int> test1;
    Array<int> test2(10);
    Array<int> test3(7);

    for (int i = 0; i < test2.size(); i++)
        test2[i] = i;
    /*Valid index*/
    try
    {
        std::cout << "Valid index: " << test2[3] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /*Invalid index*/
    try
    {
        std::cout << test2[111] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /*test3*/
    for (int i = 0; i < test3.size(); i++)
        test3[i] = i * 2;
    test1 = test3;
    try
    {
        std::cout << "Valid index in Test3: " << test3[2] << std::endl;
        std::cout << "Valid index in Test1: " << test1[2] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /*Invalid index*/
    try
    {
        std::cout << "Invalid index in Test1: " << test1[7] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        std::cout << "Invalid index in Test3: " << test3[7] << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    /* Modify test1*/
    test1[2] = 3;

    std::cout << test1[2] << std::endl;
    std::cout << test3[2] << std::endl;
    return(0);
}