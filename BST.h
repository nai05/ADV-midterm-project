#include "node.h"
#include <iomanip>
class BST {
        int size;
        StuNodePtr rootPtr;

public:
    BST();
    ~BST();
   void insert_node(int);
   void print_all();
   
   void root_count(StuNode*t,int);
   
  
   //void move_left();
   //void move_right();

};
 
void BST::root_count(StuNodePtr treePtr,int l){
  //TreeNodePtr treePtr=rootPtr;
   if(treePtr){
   // if tree is not empty, then traverse
  root_count( treePtr->move_right(),l+1 );
     cout<<setw(l*3)<<treePtr->get_value()<<endl;
  root_count( treePtr->move_left(),l+1 ); //Recursion to the left
   //Recursion to the right
     
   } // end if 
}

void BST::print_all(){
  cout<<"Tree"<<endl;
  root_count(rootPtr,0);
  cout<<endl;
  }

BST::BST(){
  rootPtr=NULL;
  size=0;
}

BST::~BST(){
  cout<<"kill BST"<<endl;
}

void BST::insert_node(int value){
  int inserted=0;
  StuNodePtr new_node,t;
  new_node=new StuNode(value);
  if(new_node){

    if(!rootPtr){
      rootPtr=new_node;}
    else{t=rootPtr;
      while(!inserted){
        if(t->get_value()>=value){
          if(t->move_left()==NULL){
            t->set_left(new_node);
            inserted=1;}
          else t=t->move_left();
        }
        else{
          if(t->move_right()==NULL){
            t->set_right(new_node);
            inserted=1;}
          else t=t->move_right();
            }
          }
      size++;
      }
    }
  }