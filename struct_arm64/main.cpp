#include <iostream>

using namespace std;





int main(int argc,char** argv[])
{

    cout<<"in some cases u need to call a value with -> px at->a is similar to at.a based on the way\n";
    cout<<"u write the code \n";
    cout<<" a simple struct \n";
    struct t{int a;char b;};
    t at;
    at.a=2;
    at.b='c';
    cout<<at.a << " " << at.b <<"\n";
    cout<<"enter a ";
    cin>>at.a;
    cout<<"enter b ";
    cin>>at.b;
    cout<<at.a << " " << at.b <<"\n";
    cout<<"\n";

    cout<<"an array struct \n";
    struct ti{int k;char c;};
    ti mta[10];
    mta[0].k=1;
    mta[0].c='a';
    mta[1].k=2;
    mta[1].c='n';
    cout<<mta[0].k << " " << mta[0].c <<"\n";
    cout<<mta[1].k << " " << mta[1].c <<"\n";
    cout<<"enter 0 k \n"; cin>>mta[0].k;
    cout<<"enter 0 c \n"; cin>>mta[0].c;
    cout<<mta[0].k << " " << mta[0].c <<"\n";
    cout<<"\n";
    cout<<mta[1].k << " " << mta[1].c <<"\n";
    cout<<"enter 1 k \n"; cin>>mta[1].k;
    cout<<"enter 1 c \n"; cin>>mta[1].c;
    cout<<"\n";
    cout<<"\n";


    cout<<"an malloc struct is an array \n";
    cout<<"\n";
    struct mti{int l;char m;};
    struct mti *p=(struct mti*)malloc(sizeof(struct mti)*10);
    int kl=0;
    p[kl].l=1;
    p[kl].m='r';
    p[kl+1].l=2;
    p[kl+1].m='R';
    cout<<p[0].l << " " << p[0].m <<"\n";
    cout<<p[1].l << " " << p[1].m << "\n";
    cout<<"enter 0 l \n"; cin>>p[0].l;
    cout<<"enter 0 m \n"; cin>>p[0].m;
    cout<<p[0].l << " " << p[0].m <<"\n";
    cout<<"enter 1 l \n"; cin>>p[1].l;
    cout<<"enter 1 m \n"; cin>>p[1].m;
    cout<<p[1].l << " " << p[1].m << "\n";






    return 0;
}
