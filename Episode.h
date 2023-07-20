#ifndef Episode_h
#define Episode_h
#include <iostream>
#include <vector>
using namespace std;

class Episode{
private:
  string title;
  int season; 
  int rating; 

public: 
  Episode();
  Episode(string, int,int); 
  string getTitle();
  int getSeason();
  int getRating();
  void setRating(int);
  friend ostream& operator<<(ostream& output, const Episode &c);

};
#endif