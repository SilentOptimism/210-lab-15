#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;


class Movie
{
private:
    // Private members
    string screenWriter;
    string title;
    int year;
    
public:
    Movie(string ScreenWriter, string Title, int Year) : screenWriter{ScreenWriter}, title{Title}, year{Year} {};

    // Movie setters
    void setScreenWriter(string ScreenWriter)   {screenWriter = ScreenWriter;}
    void setTitle(string Title)                 {title = Title;}
    void setYear(int Year)                      {year = Year;}

    // Movie getters
    string getScreenWriter()    {return screenWriter;}
    string getTitle()           {return title;}
    int getYear()               {return year ;}

    // Prints our the movie specifications
    void print(){
        cout << "Movie: " << title << endl;
        cout << "     Year released: " << year << endl;
        cout << "     ScreenWriter: "  << screenWriter << endl;
        cout << endl;
    }

};

// Function Headers
void fileToMovieList(vector<Movie> &movies);
void printMovieList(vector<Movie> &movies);

int main(int argc, char const *argv[])
{
    
    vector<Movie> blockBusters;

    fileToMovieList(blockBusters);
    printMovieList(blockBusters);

    return 0;
}

// fileToMovieList() fills a movie vector with data from a movie file
// arguments: vector<Movie> &movies (modifies vector)
// returns: nothing fills vector
void fileToMovieList(vector<Movie> &movies){
    ifstream fin;
    fin.open("Movies.txt");

    // Checks if the file failed to open
    if(!fin){
        runtime_error("Unable to Open Movie file");
    }

    string Title;
    string ScreenWriter;
    string Year;

    // Checks if the txt doc is at the end
    while(getline(fin , Title)){
        
        getline(fin , Year);
        getline(fin , ScreenWriter);

        // Creates a temporary Movie object and appends it to our vector
        Movie temp = Movie(Title, ScreenWriter, stoi(Year));
        movies.push_back(temp);
    }


    fin.close();
}

// printVectorMovie() takes prints a vector list of movie vectors
// arguments: vector<Movie> &movies
// returns: nothing prints to console
void printMovieList(vector<Movie> &movies){

    // Uses a for each loop to print objects in the vector
    for(Movie film : movies){
        film.print();
    }
}

