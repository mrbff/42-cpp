#pragma once

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <map>
#include <cmath>

// Function to parse the CSV database and store exchange rates in a container
std::map<std::string, float> parseDatabase(const std::string& filename);

// Function to process the input file and calculate the results
void processInputFile(const std::string& filename, const std::map<std::string, float>& exchangeRates);