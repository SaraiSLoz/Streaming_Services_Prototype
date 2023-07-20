#include <stdio.h>
#include <cstdlib>
#include "Episode.h"

Episode::Episode(){
  title = ""; 
  season = 0;
  
}

Episode::Episode(string t, int s, int r){
  title = t; 
  season = s;
  rating = r;
  
}
//void Episode::getEpisode(){
  
//}
string Episode::getTitle(){
  return title; 
}

int Episode::getSeason(){
  return season; 
}
int Episode::getRating(){
  return rating;
}
void Episode::setRating(int r){
  rating = r;
}
//-->Sobrecarga de Operado <<
ostream& operator<<(ostream& output, const Episode &e){
  output<<"Title: "<<e.title<<" Season: "<<e.season<<" Rating: "<<e.rating<<endl;
  return output; 
}
