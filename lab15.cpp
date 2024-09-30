#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Movie
{
private:
    string screenWriter;
    string title;
    int year;
    
public:
    Movie(string ScreenWriter, string Title, int Year) : screenWriter{ScreenWriter}, title{Title}, year{Year} {};

    void setScreenWriter(string ScreenWriter)   {screenWriter = ScreenWriter;}
    void setTitle(string Title)                 {title = Title;}
    void setYear(int Year)                      {year = Year;}

    string getScreenWriter()    {return screenWriter;}
    string getTitle()           {return title;}
    int getYear()               {return year ;}

    void print(){
        cout << "Movie: " << screenWriter << endl;
        cout << "     Year released: " << year << endl;
        cout << "     ScreenWriter: "  << screenWriter << endl;

        cout << endl;

    }
};

int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("movies.txt");

    if(!fin){
        cerr << "Unable to open movies file" << endl;
        return 0;
    }

    vector <Movie> movies = {};

    string Title;
    string ScreenWriter;
    string Year;

    while(fin){
        getline(fin , Title);
        getline(fin , Year);
        getline(fin , ScreenWriter);

        Movie temp = Movie(Title, ScreenWriter, stoi(Year));

        movies.push_back(temp);
        movies.at(0).print();
    }




    return 0;
}
