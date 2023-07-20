#ifndef Movie_h
#define Movie_h
#include <iostream>
#include <vector>
using namespace std;
#include "Video.h"


class Movie: public Video{
private: 

public: 
Movie();
Movie(int,string,int,string,int);
void getVideo();
void showRating(int);


};


#endif