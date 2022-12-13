#include <iostream>
#include <string.h>
#include <iomanip>

#include"student.h"
#include"sorting.h"
#include"BST.h"
//#include"node.h"

using namespace std;
int x = 0,choice; 
int main(int argc, char **argv) {
int s;
// after compile the file, paste this line to the console:
// ./main Michael 70 Jeng 90  Pan 25 Nai 40

  if(argc>1){ 
    int i,c,j,n,search,se,s_check;
    student *p;//= new student[(argc-1)/3]; 
    student a[20];
    p=a;
    for(c=0,i=1;i<(argc-1);c++,i+=2){ 
      p[c].set_all(argv[i],atoi(argv[i+1]));
      }
    cout<<"please choose from 1: print out info"<<endl<<setw(54)
      <<" 2: search for a student using score"<<setw(62)
      <<" 3: To view anxiety levels in a tree structure"<<endl;
    cin>>choice;
    switch(choice){
      case 1:{ // for printing out all info
      cout<<endl;
      for(c=0,i=1;i<(argc-1);c++,i+=2){ 
      cout<<c+1<<" ";  
      (p+c)->print_all();  
      x=c;
      }
      x+=1;scoreSort(a,x);
      break;} //sorting.h function
    
    
      case 2: {// for searching for the specific student with the designated score
            cout<<"Please enter the score you want to search for:";
            cin>>search;
            cout<<endl;
        s_check=0;
        for(se=0,i=1;i<(argc-1);se++,i++){ //loop for searching students with the right score
            
            p[se].search(search);
           
            if(p[se].getcheck()==1){
              cout<<"This score belongs to:"<<p[se].getName()<<endl;
              s_check+=1;
            }
          }
        
        if(s_check==0){
              cout<<"No one got that score"<<endl;
            }
      break;}
      case 3:{
        BST b;
        int temp_anx;
        for(se=0,i=1;i<(argc-1);se++,i+=2){
            temp_anx = p[se].setAnxiety();
             b.insert_node(temp_anx);
            
          }
        cout<<"this is the anxiety tree! :D "<<endl; 
        b.print_all();
      break;
        }
      default: cout<<"invalid option"<<endl;
    
      }
  }
}