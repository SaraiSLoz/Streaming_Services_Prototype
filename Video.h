#ifndef Video_h
#define Video_h
#include <iostream>
#include <vector>
using namespace std;
#include "Episode.h"

class Video{
protected: //modificadores de acceso ocupado en herencia
  int id; 
  string name; 
  int duration; 
  string gender; 
  int rating; 

public: //modificado de acceso
  Video(); 
  Video(int, string, int, string, int);
  int getRating();
//->Clases virtuales puras 
  virtual void getVideo() = 0;
  virtual void showRating(int) = 0;
  string getGender();
  string getName();
//----->Sobrecarga de métodos-->
  virtual void setRating(int); //Este tiene diferentes parametros
  virtual void setRating(string, int);

};
#endif
