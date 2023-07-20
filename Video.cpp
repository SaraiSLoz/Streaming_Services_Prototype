#include <stdio.h>
#include <cstdlib>
#include "Video.h"
using namespace std;

Video::Video(){
  id = 0; 
  name = ""; 
  duration = 0; 
  gender = ""; 
  rating = 0;
}

Video::Video (int i, string n, int d, string g, int r){
  id = i; 
  name = n; 
  duration = d; 
  gender = g; 
  rating = r; 
}

int Video::getRating(){
  return rating; 
}

string Video::getGender(){
  return gender;
}
string Video :: getName(){
  return name;
}
void Video::setRating(int r){
  rating = r;
  cout<<"id: "<<id<<" Name: "<<name<<" Duration: "<<duration<<" Gender: "<<gender<<" Rating: "<<rating<<endl;
}
void Video::setRating(string n, int r){
  name = n; 
  rating = r;
  cout<<"id: "<<id<<" Name: "<<name<<" Duration: "<<duration<<" Gender: "<<gender<<" Rating: "<<rating<<endl;
}