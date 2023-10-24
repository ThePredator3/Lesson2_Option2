#include <fstream>
#include <iostream>

#include "ShowStatistic.hpp"

void ShowFile()
{
    std::ifstream inputStream("/Volumes/Coding/Projects/ItAcadamyDZ/Lesson2/L2O2/Statistic.txt");
    
    if (!inputStream.is_open())
    {
        std::cout << "file doesn't exist" << std::endl;
    }
    else
    {
        std::cout << "file is open" << std::endl;
    }
    
    std::string str = "";
    
    while(!inputStream.eof())
    {
        std::getline(inputStream, str);
        std::cout << str << std::endl;
    }
}
