#include <iostream>
using namespace std;
#include "student.h"

int main(){
  MU_person m(3000);
  m.display_person();

student m1(6613121,2,"Vivi",10000);
  m1.display(); // id gpa name
  m1.display_person(); //id

//  p=new student(6613265,1.7,"Hok");
//  delete p;
  
  return 0;
   }

// Add constructor --> set name 
// modify display() -->id/name/gpa
