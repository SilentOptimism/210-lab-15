#include <iostream>
#include <iomanip>
#include <fstream>

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
        cout << width(5) << right << endl;

    }
};

int main(int argc, char const *argv[])
{

    return 0;
}
