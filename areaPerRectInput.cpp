// Copyright (c) 2021 Noah Ouellette All rights reserved.
//
// Created by: Noah Ouellette
// Created on: Nov. 25, 2021
// This program calculates the area and perimeter of a rectangle
// with dimensions that
// are provided by user inputs.
#include <iostream>

// declare variables
float length, width, area, perimeter;



int main() {
  // get input from user
  std::string units, userAnswer;
  std::cout << "Time to calculate the area and";
  std::cout << "perimeter of your own rectangle! \n";
  std::cout << "Enter the length: ";
  std::cin >> length;
  std::cout << "Enter the width: ";
  std::cin >> width;
  std::cout << "Enter the units: ";
  std::cin >> units;

  // calculate area and perimeter
  area = length * width;
  perimeter = 2 * (length + width);

  // display the results to the user
  std::cout << std::endl;
  std::cout << "Area = " << area << units <<"^2.\n";
  std::cout << "Perimeter = " << perimeter << units <<".\n";
  std::cout << units <<".\n";

  // Ask if user would like to calculate again
  std::cout << "Would you like to calculate again? Y or N\n";
  std::cin >> userAnswer;

  if (userAnswer == "Y" || "y") {
      main();
  }
}
