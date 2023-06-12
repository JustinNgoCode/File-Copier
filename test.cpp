#include "fcopy.h"

int main(int argc, char const *argv[])
{
    if(argc != 3) //if program is missing arguments <files>
    {
        printUsage();
        exit(1);
    }
 
    //fileCopy("einsteinshow.jpg", "einsteinshow_copy.jpg"); //no user input
 
    fileCopy(argv[1], argv[2]); //user input before running
 
    //.\test.exe einsteinshow.jpg einsteinshow_copy.jpg
    return 0;
}
