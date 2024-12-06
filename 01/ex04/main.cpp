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
        size_t pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        {
            std::string new_line = line.substr(0, pos) + s2;
            if (line[pos + s1.size()] != '\0')
                new_line += line.substr(pos + s1.size());
            line = new_line;
            pos += s2.length();
        }
        outfile << line << std::endl;
    }
    return 0;
}