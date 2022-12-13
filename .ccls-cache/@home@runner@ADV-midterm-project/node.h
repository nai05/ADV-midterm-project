  using namespace std;

class StuNode{   

   StuNode *leftPtr; // pointer to left subtree
   int data; // node value                               
   StuNode *rightPtr; // pointer to right subtree
public:
        StuNode(int);
        ~StuNode();
        void set_left(StuNode* t){leftPtr=t;}
        void set_right(StuNode* t){rightPtr=t;}
        StuNode* move_right(){return rightPtr;}
        StuNode* move_left(){return leftPtr;}
        int get_value();

}; // end structure treeNode


typedef StuNode * StuNodePtr;
// synonym for TreeNode*

StuNode::StuNode(int x){
  data=x;
  rightPtr=NULL;
  leftPtr=NULL;
}

StuNode::~StuNode(){
  cout<<"deleting all nodes"<<data<<endl;
}

int StuNode::get_value(){
  return data;
}
