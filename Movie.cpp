#include <stdio.h>
#include <cstdlib>
#include "Movie.h"
#include <iostream>
#include <vector>
using namespace std;

Movie:: Movie(){
  id = 0; 
  name = ""; 
  duration = 0; 
  gender = ""; 
  rating = 0;
}

Movie::Movie (int i, string n, int d, string g, int r):Video(i,n,d,g,r){
  
}

void Movie::getVideo(){
  cout<<"id: "<<id<<" Name: "<<name<<" Duration: "<<duration<<" Gender: "<<gender<<" Rating: "<<rating<<endl;
}
/*void Movie:: getTitle(string n, int r){
  
}*/
void Movie::showRating(int i){
  cout<<rating<<endl;
}