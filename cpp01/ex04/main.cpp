#include <iostream>
#include <string>
#include <fstream>

void    replaceWordInfile(const std::string& sourceFile, const std::string& destFile, const std::string& targetWord, const std::string& replacementWord)
{
    std::ifstream infile(sourceFile.c_str());
    std::ofstream outfile(destFile.c_str());

    if (!infile.is_open() || !outfile.is_open())
    {
        std::cerr << "Error opening files!" << std::endl;
        return;
    }
    std::string line;
    while (std::getline(infile, line))
    {
        size_t pos = 0;
        while ((pos = line.find(targetWord, pos)) != std::string::npos)
        {
            line.replace(pos, targetWord.length(), replacementWord);
           pos += replacementWord.length();
        }
        outfile << line << std::endl;
    }
    infile.close();
    outfile.close();
}

int main(int argc, char const *argv[])
{
    if (argc < 4) {
        std::cerr << "Usage: " << argv[0] << " <input file> <target word> <replacement word>" << std::endl;
        return 1;
    }

    std::string infile = argv[1];
    std::string outfile = infile + ".replace";
    std::string targetWord = argv[2];
    std::string replaceWord = argv[3];

    replaceWordInfile(infile, outfile, targetWord, replaceWord);
    return 0;
}
