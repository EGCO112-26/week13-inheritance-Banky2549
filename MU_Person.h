#include "Thai_person.h"
class MU_person: public Thai_person {
private:

protected:
  long id;
  std::string name;

public:
	MU_person(long=112 ,string ="Prapaporn",long=200);
  void display_person();
  ~MU_person();
};

MU_person::~MU_person(){
  cout<<"Destructor id="<<id<<endl;
}
MU_person::MU_person(long x,string n,long nid):Thai_person(nid){
      id=x;
      name=n;
         cout<<"MU person constructor "<<id<<endl;
}

void MU_person::display_person(){
  cout<<"Show info"<<endl;
  cout<<"id "<<id<<endl;
  cout<<"Name:"<<name<<endl;
    
}
