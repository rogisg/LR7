#include <iostream>
#include <fstream>
#include <vector>
#include <string>
using namespace std;


enum Score
{
    Unsatisfactorily = 2,
    Satisfactorily,
    Good,
    Excellent
};

struct Student
{
    string Name;
    int Year;
    map<string, Score> RecordBook;
};

using Groups = map<string, vector<Student>>;


void saveToFile(const string& filename, const Groups& groups);{
    ofstream out;
    out.open(filename);
    if (out.is_open())
    {
        for (const Groups& stud: groups){
        out << stud.Name << stud.Year << stud.RecordBook<< endl;
        }
    }
    out.close(); 
}



void loadFromFile(const string& filename, const Groups& outGroups);{
    string N, Y, R;
 
    ifstream in(filename);
    if (in.is_open())
    {
        while (getline(in, N, Y, R))
        {
            Groups stud = {N, Y, R}
            outGroups.push_back(stud);
        }
    }
    in.close();
}
