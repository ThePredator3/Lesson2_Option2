#include <fstream>
#include <iostream>
#include <string>

#include "RaceStatistic.hpp"
#include "ShowStatistic.hpp"

void WriteStatistic()
{
    std::ofstream outputStream("/Volumes/Coding/Projects/ItAcadamyDZ/Lesson2/L2O2/Statistic.txt", std::ios::app);
    
    ShowFile();
    
    int chekinNumber = 0;
    double circleTime = 0.0;
    std::string note = "";
//    char string[100] {};
    
    std::cout << "input chek-in number: ";
    std::cin >> chekinNumber;
    
    while (!std::cin.good())
    {
        std::cout << "your input is wrong!" << std::endl;
        std::cout << "input a chek-in number" << std::endl;
        std::cin.clear();
        
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cin >> chekinNumber;
    }
    
    for (int i = 0; i < 5; ++i)
    {
        std::cout << "input five lap time: ";
        std::cin >> circleTime;
        
        while (!std::cin.good())
        {
            std::cout << "your input is wrong!" << std::endl;
            std::cout << "input time" << std::endl;
            std::cin.clear();
            
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cin >> circleTime;
        }
    }
    
    std::cout << "input your comment:" << std::endl;

    std::cin >> note;
    
    outputStream << chekinNumber << " ";
    
    for(int i = 0; i < 5; i++)
    {
        outputStream << circleTime << " ";
    }

    outputStream << note << std::endl;
}

std::string WriteNotes()
{
    std::cout << "input your comment: ";
    
    std::string note = " ";
    std::getline(std::cin, note);
    
    std::cout << note << std::endl;
    
    return note;
}

