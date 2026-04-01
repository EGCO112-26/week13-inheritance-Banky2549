#include <iostream>
#include<cstdlib>
#include"NODE.h"
#include"LL.h"
#include "student.h"

using namespace std;
int main(int argc, char *argv[])
{  LL l;
   int i;
   NODE *t;

    for(i=0;i<(argc-1)/3;i++) {
        t=new student(atoi(argv[i*3+1]),atof(argv[i*3+2]),argv[i*3+3]);
        l.add_node(t);
    }
    l.show_all();
    
    return 0;
}