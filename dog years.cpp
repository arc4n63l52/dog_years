// dog years.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This is the first project from Codecademy C++ 

#include <iostream>
// Purpose of this project is to calculate dog years into human years 
int main()
{
// Declaring variables for dog years, first 2 human years are 21 dog years, every year after counts as 4 human years 
    int dog_age = 8;
    int early_years = 21;
    int later_years = (dog_age - 2) * 4;
    int human_years = (early_years + later_years);
    std::cout << "My name is Chubby! Ruff Ruff!, I am " << human_years << " years old in human years!";

}


