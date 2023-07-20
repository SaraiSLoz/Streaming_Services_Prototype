#include <iostream>
using namespace std;
#include <fstream>
#include <cstring>
#include "Episode.h"
#include "Serie.h"
#include "Movie.h"
//void clear();
int main() {
  cout << "Proyecto Integrador"<<endl;
  cout << "de: Sarai Santiago Lozano \n "<<endl;
  cout<<"Welcome to the system.\n Note: video ratings are from 1 to 5\n " "Also the genders are: Mystery, Drama and Action\n  "<<endl;
  cout<<"Menu :"<<endl;
  cout<<"1. Upload a file"<<endl;
  cout<<"2. Show a video for a determinate rating or gender"<<endl;
  cout<< "3. Show a episode for a determinate serie and rating"<<endl;
  cout<<"4. Show the movie for a determinate rating"<<endl;
  cout<<"5. Rating a video"<<endl;
  cout<<"0. Exit"<<endl;
  int op;
  cout<<"Option: "<<endl;
  cin>>op;
Episode ep1("Devil",2,3);
Episode ep2("SadPrince",5,5);
Episode ep3("Johnson",3,4);
Episode ep4("Welcome",6,3);
Episode ep5("Body",1,4);
Episode ep6("Everything",3,5);
Episode ep7("Monster",2,2);
Episode ep8("OtherSide",3,5);
Episode ep9("Bienvenidos",1,5);
Episode ep10("Deseo",3,2);
Episode ep11("Assilah",2,4);
Episode ep12("Horas",1,3);
Episode ep13("RunBoyRun",1,5);
Episode ep14("MoonMan",2,2);
Episode ep15("NumberFive",2,3);
Episode ep16("WhiteViolin",5,1);
vector<Episode> vect1;
vect1 = {ep1,ep2,ep3,ep4}; 
vector<Episode> vect2; 
vect2 = {ep5,ep6,ep7,ep8};    
vector<Episode> vect3; 
vect3 = {ep9,ep10,ep11,ep12};
vector<Episode> vect4; 
vect4 = {ep13,ep14,ep15,ep16};
//-->Arrego de apuntadores de la clase video-->
    Video *video[21];
    video[0] = new Movie(1402,"Coraline",121,"Mystery",3);
    video[1] = new Movie(1305,"InfinityWar", 240, "Action",5);
    video[2] = new Movie(1906, "LadyBird", 100, "Drama",5);
    video[3] = new Movie(1807, "KnivesOut", 144, "Mystery",2);
    video[4] = new Movie(1620, "LittleWoman", 144, "Drama",2);
    video[5] = new Movie(1850, "Spiderman", 144, "Action",1);
    video[6] = new Movie(1740, "Room", 144, "Drama",4);
    video[7] = new Movie(1630, "Coda", 144, "Drama",1);
    video[8] = new Movie(1456, "Murder", 144, "Mystery",3);
    video[9] = new Movie(1875, "Us", 144, "Mystery",4);
    video[10] = new Movie(1345, "NorthMan", 144, "Action",5);
    video[11] = new Movie(1947, "JohnWick", 144, "Action",5);
    video[12] = new Movie(1842, "Parasite", 144, "Drama",1);
    video[13] = new Movie(1036, "CallbyName", 144, "Drama",2);
    video[14] = new Movie(1456, "Matrix", 144, "Action",3);
    video[15] = new Movie(1896, "LaLaLand", 144, "Drama",4);
    video[16] = new Serie(vect1,1590,"Lucifer",500,"Drama",5 );
    video[17] = new Serie(vect2,1852,"StrangerThings",500,"Mystery",4);
    video[18] = new Serie(vect3,1365,"Élite",650,"Drama",3);
    video[19] = new Serie(vect4,1147,"TheUmbrellaAcademy",450,"Action",2 );
  if (op == 1){
    cout<<"Movies"<<endl;
    for(int i = 0; i<=19; i++){
      //Shipment *current = shipment [i]; 
      Video *current = video[i];
      if (i == 16){
        cout<<"Series"<<endl; 
      }
      current -> getVideo();
    }
  }  
  if(op == 2){
    int opk; 
    cout<<"What feature would you like to check out ? \n"
      "1. Rating \n"
      "2. Gender \n"<<endl;
    cout<<"Option: "<<endl;
    cin>>opk; 
    if (opk == 1){
      int opr; 
      cout<<"Rating: "<<endl;
      cin>>opr; 
      cout<<"Movies"<<endl;
            for(int i = 0; i<=15; i++){ 
      Video *current = video[i];
      if (current->getRating() == opr){
        current->getVideo();
      }
        }
      for(int i = 16; i<=19; i++){ 
      Video *current = video[i];
      if (current->getRating() == opr){
       current->getVideo(); 
      }
      
    }
      
    }
    if (opk == 2){
    string opg;
    cout<<"What Gender do you want to research ?: "<<endl; 
    cin>>opg;
    cout<<"Movies"<<endl;
      for(int i = 0; i<=19; i++){ 
      Video *current = video[i];
      if (current->getGender() == opg){
        current -> getVideo();
      }
      }      
  }
    }
  if (op == 3){
    int opr; 
    cout<<"Rating: "<<endl;
    cin>>opr; 
    string ns;
    cout<<"What serie would you like to checko out ? : "<<endl;
    cin>>ns;
    cout<<"Episodes"<<endl;
    for(int i = 16; i<=19; i++){ 
      Video *current = video[i];
      if(current->getName() == ns){
        current->showRating(opr);
      }
    }

}
if (op == 4){
    int opr; 
    cout<<"Rating: "<<endl;
    cin>>opr; 
    for(int i = 0; i<=15; i++){ 
      Video *current = video[i];
      if (current->getRating() == opr){
        current->getVideo();
        }
}
  } 
if (op ==5){
  cout<<"What video would you like to rating? : "<<endl;
  cout<<"1. Movie"<<endl;
  cout<<"2. Serie"<<endl;
  int vid;
  cout<<"option: "<<endl;
  cin>>vid;
  if (vid == 1){
  string mov;
  cout<<"What movie would you like to rating ?: "<<endl; 
  cin>>mov;
    for(int i = 0; i<=15; i++){ 
      Video *current = video[i];
    if (current->getName() == mov){
      int rat;
      cout<<"Rating: "<<endl;
      cin>>rat; 
        current->setRating(rat);
      }        
    }
    }
  if(vid ==2){
  string na; 
  cout<<"What Serie would you like to rating ?: "<<endl; 
  cin>>na;
  int opr;
  cout<<"Do you want to rating the serie or a episode\n"
    "1. Serie\n"
    "2. Episode\n"<<endl;
  cin>>opr;
    for(int i = 16; i<=19; i++){ 
      Video *current = video[i];
      if (current->getName() == na && opr == 1){
        int r;
        cout<<"Rating: "<<endl;
        cin>>r;
        current->setRating(r);
      }
        if (current->getName() == na && opr == 2){
        string ep;
        cout<<"What Episode: "<<endl;
        cin>>ep;
        int r;
        cout<<"Rating: "<<endl;
        cin>>r;
        current->setRating(ep,r);
      }
    }
  }
}
if (op == 0){
  return 0;
}  
  }

  