// programHW2.cpp : This program will display the ocean level rising that occurs over a yearly rate of 1.5 mm
//

#include <iostream>
// function
int main()
{   //including double that will show the answer in decimal format and assigning variables. 
    double risingRate = 1.5;
    double Initialsealevel = 0.0;
    int years = 0;

    //including std::cout will show the user of the description to enter the number of years to find the ocean rising 
    std::cout << "Enter the number of years to find the ocean rising.";
   // std::cin is the input of the users answer
    std::cin >> years;
    //including the equation that will solve the future sea level rising 
    double futuresealevel = Initialsealevel + (1.5 * years);
    //displaying the description of level rising at year X in mm
    std::cout << "Assuming the ocean's level rising rate, the sea level after " << years << " years is:" << futuresealevel << "mm.";
    //code ends
    return 0; 
}

