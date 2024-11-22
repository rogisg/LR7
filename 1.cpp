#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;



void saveToFile(const string& filename, const vector<string>& data);{
    ofstream out;
    out.open(filename);
    if (out.is_open())
    {
        for (const string& word: data){
        out << word << endl;
        }
    }
    out.close(); 
}



void loadFromFile(const string& filename, vector<string>& outData);{
    string line;
 
    ifstream in(filename);
    if (in.is_open())
    {
        while (getline(in, line))
        {
            outData.push_back(line);
        }
    }
    in.close();
}
