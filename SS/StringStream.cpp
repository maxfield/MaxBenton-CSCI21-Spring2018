/*
 * Name        : stringstream.cpp
 * Author      : Maxfield Benton
 * Description : Project 1a
 */
 
#include <iostream>
// New include
#include <sstream>
#include <string>
#include <cctype>
#include <fstream>
using namespace std;

    
int main() {
    ifstream ccnum("credit.txt");
    stringstream ss("cardnum");
    string line;
    int x;
    
    if (ccnum.is_open())
    {
        while ( getline (ccnum,line) )
        {
            ss << line;
            cout << ss.str() << '\n';
        }
        ccnum.close();
    }
    else cout << "Unable to open file"; 

    return 0;
}
