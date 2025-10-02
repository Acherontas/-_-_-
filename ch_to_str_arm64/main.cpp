#include <iostream>
#include <string>
#include <cstring>
#include "charheader.h"
#include "intheader.h"
using namespace std;

int main(int argc,char** argv[])
{
  cout<<"chars and strings \n";
  charheader *chd=new charheader();
  chd->xchar();
  cout<<"\n";
  cout<<"\n";
  cout<<"numbers to numbers\n";
  intheader *inth=new intheader();
  inth->inthead();
  return 0;
}
