#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>

using namespace std;

class Movie
{
private:
    string screenWriter;
    string title;
    int year;
    
public:
    Movie(){};

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

    }
};

int main(int argc, char const *argv[])
{
    ifstream fin;
    fin.open("movies.txt");

    if(fin){
        cout << "Unable to open movies file" << endl;
    }

    vector <Movie> movies;





    Movie test = Movie();

    test.setScreenWriter("Writer");
    test.setTitle("THE MOVIE");
    test.setYear(2023);

    test.print();

    return 0;
}
