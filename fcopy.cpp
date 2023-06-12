//#include <iostream>
#include <fstream>
 
#include "fcopy.h"


void inputFileError() 
{
    throw InputFileOpeningError();
}

void outputFileError()
{
    throw OutputFileOpeningError();
}

void printUsage() //if user does not enter command line arguments correctly
{
    std::cout << "Usage: fileCopy.exe <srcFilename> <dstFilename>\n";
}
 
void fileCopy(const std::string& srcFilename, const std::string& dstFilename)
{
    char buffer[10000]; //how much is read in at a time
 
    std::ifstream src(srcFilename, std::ios::in | std::ios::binary); //takes an input file
 
    if(src.fail()) inputFileError(); //throw error if input file can't be opened
 
    std::ofstream dst(dstFilename, std::ios::out | std::ios::binary); //gets an output file
 
    if(!dst) outputFileError(); //throw error if output file can't be opened
 
 
    while(!src.eof()) //loop while not at end of the file
    {
        src.read(buffer, sizeof buffer); //read input
 
        dst.write(buffer, src.gcount()); //write output
    }
}
 
