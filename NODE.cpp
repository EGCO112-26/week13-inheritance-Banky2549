#include <iostream>
using namespace std;
#include"NODE.h"

NODE::NODE(int id_val) {
    id = id_val;
    cout << "adding " << id << endl;
}
  NODE:: ~NODE(){
      cout<<"Node "<<id<<" is being deleted"<<endl;
}
NODE* NODE::move_next(){
      return next;
}
void  NODE:: show_node(){
         cout<<"Node data:"<<id<<endl;
 }
void NODE::insert(NODE*& x){
     x->next=this;

     }