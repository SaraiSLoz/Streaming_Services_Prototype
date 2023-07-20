#include <stdio.h>
#include <cstdlib>
#include "Serie.h"

Serie::Serie(){
  id = 0; 
  name = ""; 
  duration = 0; 
  gender = ""; 
  rating = 0;
}

Serie::Serie(vector<Episode> e, int i, string n, int d, string g,int r):Video(i,n,d,g,r){
  //episodes = vector<Episode>(numS, Episode(t,s));
  episodes = e; 

}

void Serie::getVideo(){
  cout<<"Series"<<endl;
  cout<<"id: "<<id<<" Name: "<<name<<" Duration: "<<duration<<" Gender: "<<gender<<" Rating: "<<rating<<endl;
  for(int i = 0; i<= 3; i++){
    Episode ep = episodes[i];
    cout<<ep;
    }
}

void Serie::showRating(int r){
    for(int i = 0; i<= 3; i++){
      if (r == episodes[i].getRating()){
          cout<<"id: "<<id<<" Name: "<<name<<" Duration: "<<duration<<" Gender: "<<gender<<endl; 
        cout<<episodes[i]; 
      }
    }
} 
  

void Serie::setRating(string n, int r){
  for(int i = 0; i<= 3; i++){
    if (episodes[i].getTitle() == n){
      episodes[i].setRating(r);
            cout<<"id: "<<id<<" Name: "<<name<<" Duration: "<<duration<<" Gender: "<<gender<<endl;
      cout<<episodes[i];
              
    }
}
  }