#ifndef student_h
#define student_h
#include <iostream>
#include <iomanip>
using namespace std;

class student{
private: 

  string Name;
  int Score;
  int Anxiety;
  int check;
  int size;//new
  //StuNodePtr rootPtr;//new

public:

student(string, int,int);

student(string = "-",int =0);
 
void setName(string name){ 
  Name = name;
}
void setScore(int score){ 
  Score = score;
}
int getScore(){ 
  return Score;
}
int getAnxiety(){
  return Anxiety;
}
int getcheck(){ 
  return check;
}
string getName(){ 
  if(Score<50){
 		cout<<" <High Anxiety> Name:";}
  else cout<<" <Low Anxiety> Name:";
  return Name;
}
void set_all(string n, int a){
    setName(n);
    setScore(a);

}
int setAnxiety(){
  int x;
  if(Score<50){
  x=(100-(Score*2));
  }
  else x=0;
  Anxiety = x;
  return x;
}
void print_all(){
  int anx;
  if(Score<50){
    anx = setAnxiety();
 		cout<<"Name: "<<setw(8)<<Name<<"    Score: "<<setw(8)<<Score<<"  Anxiety:  "<<setw(4)<<anx<<endl;}
  else cout<<"Name: "<<setw(8)<<Name<<"    Score: "<<setw(8)<<Score<<"  Anxiety:  "<<setw(4)<<Anxiety<<endl;
  }

void search(int x){//search by inputting score
  
    if(Score==x) check=1;
    else check=0;
}

};

student::student(string a, int b){
  Name = a;
  Score = b;
  Anxiety = 0;

}

#endif