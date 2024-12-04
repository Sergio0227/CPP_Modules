#include <iostream>
#include <fstream>

int main(int argc, char *argv[])
{
    if (argc != 4)
        return (std::cerr << "ERROR - Usage: ./ex04 <filename> <s1> <s2>\n", 1);

    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::ifstream file1(argv[1]);
    if (!file1.is_open())
        return (std::cerr << "Error opening file!\n", 1);
    std::string line;
    std::string filename = std::string(argv[1]) + ".replace";
    const char *new_filename = filename.c_str();
    std::ofstream outfile(new_filename);

    while (std::getline(file1, line))
    {
        if (line.find(s1) != std::string::npos)
        {
            std::string new_line;
            new_line = line.substr(0, line.find(s1));
            new_line += s2;
            outfile << new_line;
            if (line[line.find(s1) + s1.size()] != 0)
            {
                new_line = line.substr(line.find(s1) + s1.size());
                outfile << new_line << std::endl;
            }
            else
                std::cout << std::endl;
        }
        else
            outfile << line << std::endl;
    }
    return 0;
}