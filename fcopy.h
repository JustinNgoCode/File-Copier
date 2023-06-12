#include <iostream>

#ifndef FCOPY_H
#define FCOPY_H


struct InputFileOpeningError : public std::runtime_error
{
    InputFileOpeningError() : runtime_error("Input file opening error"){}
};

struct OutputFileOpeningError : public std::runtime_error
{
    OutputFileOpeningError() : runtime_error("Output file opening error"){}
};

void inputFileError();

void outputFileError();

void printUsage();

void fileCopy(const std::string&, const std::string&);


#endif
