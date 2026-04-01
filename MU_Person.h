#include "NODE.h"

class MU_person:public NODE{
private: 
protected:
  long id;
  string name;

public:
	MU_person(long=112 ,string ="Prapaporn");
  void display_person();
  ~MU_person();
};



MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,string n):NODE(x){
  // Set up all MU_Person values
  id = x;
  name = n;
  cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  cout<<"Name : "<<name<<" ID : "<<endl;
    
}