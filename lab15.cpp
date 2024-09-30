#include <iostream>

using namespace std;

class Movie
{
private:
    string screenWriter;
    string title;
    int year;
    
public:
    Movie(string screenWriter, string title, int year) : screenWriter{screenWriter} ;
    ~Movie();
};

int main(int argc, char const *argv[])
{

    return 0;
}
