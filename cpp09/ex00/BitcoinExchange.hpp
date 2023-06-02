#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <cmath>
#include <ctime>

// Function to parse the CSV database and store exchange rates in a container
std::map<std::string, float> parseDatabase(const std::string& filename);

// Function to process the input file and calculate the results
void processInputFile(const std::string& filename, const std::map<std::string, float>& exchangeRates);

//check if a string is a valid date
bool isValidDate(std::string date);