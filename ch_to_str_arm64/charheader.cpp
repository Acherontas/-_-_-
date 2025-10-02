#include "charheader.h"

charheader::charheader()
{
    //ctor
}

charheader::~charheader()
{
    //dtor
}

charheader::charheader(const charheader& other)
{
    //copy ctor
}

charheader& charheader::operator=(const charheader& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}


int charheader::xchar(){
  cout<<"using declaration variable and malloc \n";
  char* cp;
  cp=(char*)malloc(sizeof(char)*100);
  char ci;
  for(int i=0;i<=9;i++){
     cout<<"enter char \n";
     cin>>ci;
     cp[i]=ci;
  }
  cout<<"ending with :: ";
  cout<<cp;
  cout<<"\n";
  cout<<"using simple char array declaration\n";
  char co[2];
  co[0]='a';
  co[1]='b';
  co[2]='\0';
  cout<<"\n";
  cout<< &co  <<" " << co <<"\n";
  printf("all of it %s\n",co);
  printf("%c\n",co[0]);
  return 0;
}
