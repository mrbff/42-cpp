#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    std::ifstream inFile(av[1]);

    if (ac != 4 || !inFile.good())
    {
        std::cerr << "Wrong arguments" << std::endl;
        return (1);
    }
    if (!av[2] || !av[2][0])
    {
        std::cerr << "Second argument can't be empty" << std::endl;
        inFile.close();
        return (1);
    }

    std::string filename = (std::string)av[1];

    std::ofstream outFile(filename + ".replace");
    if (!outFile.is_open()) {
        std::cerr << "Failed to create output file: " << filename << ".replace" << std::endl;
        inFile.close();
        return (1);
    }

    std::string s1 = av[2];
    std::string s2 = av[3];

    std::string line;
    std::string tline;
    size_t pos = 0;
    while (std::getline(inFile, line))
    {
        pos = 0;
        if (s1 != s2)
        {
            while ((pos = line.find(s1, 0)) != std::string::npos)
                line = line.substr(0, pos) + s2 + line.substr(pos + s1.length(), std::string::npos);
        }
        outFile << line << std::endl;
    }

    inFile.close();
    outFile.close();

    return (0);
}