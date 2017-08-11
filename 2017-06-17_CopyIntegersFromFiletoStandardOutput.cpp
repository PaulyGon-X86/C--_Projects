/*
Paul Gonzales
2017-06-17

From Exploring C++, The Programmers Introduction to C++, by Ray Lischner
Chapter 13, Introduction to File I/O
Listing 13-1. Copying Integers from a File to Standard Output
*/

#include <cstdio> //This file declares perror
#include <fstream> //This file declares ifstream
#include <iostream>
#include <istream>
#include <ostream>

int main()
{
    std::ifstream in (/*"the path to the file"*/); //ifstream is the type used to declare in to open the file
    if (not in) //this tests the ifstream object in for any error state
        std::perror(/*"the path to the file"*/); //This handles the error if the file can't be opened, it prints an error message
    else
    {
        int x(0);
        while (in >> x)
            std::cout << x << '\n';
        in.close(); //this calls the close method on the ifstream object in, and closes it
    }
    return 0;
}