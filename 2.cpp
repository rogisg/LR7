#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


struct Book
{
    string Author;
    string Title;
    int Year;
};


void saveToFile(const string& filename, const vector<Book>& data);{
    ofstream out;
    out.open(filename);
    if (out.is_open())
    {
        for (const Book& book: data){
        out << book.Author << book.Title << book.Year << endl;
        }
    }
    out.close(); 
}



void loadFromFile(const string& filename, vector<Book>& outData);{
    string A, T, Y;
 
    ifstream in(filename);
    if (in.is_open())
    {
        while (getline(in, A, T, Y))
        {
            Book book = {A, T, Y}
            outData.push_back(book);
        }
    }
    in.close();
}
