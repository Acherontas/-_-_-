#include "intheader.h"

intheader::intheader()
{
    //ctor
}

intheader::~intheader()
{
    //dtor
}

intheader::intheader(const intheader& other)
{
    //copy ctor
}

intheader& intheader::operator=(const intheader& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

int intheader::inthead(){
  cout<<"using single array declaration variable\n";
  int ar[10];
  ar[0]=1;
  ar[1]=2;

  int tmp=0;
  for(int i=2;i<=9;i++){
     cout<<"enter next number : \n";
     cin>>tmp;
     ar[i]=tmp;
  }
  cout<<"\n";
  for(int i=0;i<=9;i++){
     cout<<"@i " << i << " " << ar[i] <<"\n";
  }

  cout<<"using variable and malloc declaration\n";
  int *ak;
  ak=(int*)malloc(sizeof(ak)*10);
  int k=0;
  ak[k]=1;
  ak[k+1]=2;
  tmp=0;
  for(k=2;k<=9;k++){
    cout<<"enter next number : \n";
    cin>>tmp;
    ak[k]=tmp;
    cout<<"@k " << k << " insert value on ak[k] " << ak[k] <<"\n";
  }
  for(int i=0;i<=9;i++){
     cout<<*(ak+i) <<" " ;
  }

return 0;
}
