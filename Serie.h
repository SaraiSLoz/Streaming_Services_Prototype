#ifndef Serie_h
#define Serie_h

#include <iostream>
#include <vector>
using namespace std;

#include "Video.h"
#include "Episode.h"

class Serie: public Video{
private: //modificador privado, solo esta clas puede tener acceso directamente
  vector<Episode> episodes; 

public: 
  Serie();
  Serie(vector<Episode>,int, string, int, string,int);
  void getVideo();
  void showRating(int);
  void setRating(string, int);
};


#endif