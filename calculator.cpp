#include<iostream>
#include<conio.h>
using namespace std;

int main()
{
 int b,c,kh;
 int q,w,e,r;
 float x,z;

 cout<<"############################################"<<endl;
cout<<"# --------- C A L C U L A T O R --------- #"<<endl;
cout<<"#############################################"<<endl;
while (kh!=5)
{
 cout<<"SELECT YOUR OPERATION NO. :"<<"\n";
 cout<<"[1] ADDITION"<<endl;
 cout<<"[2] MULTIPLICATION"<<endl;
 cout<<"[3] SUBSTRACTION"<<endl;
 cout<<"[4] DIVIDATION "<<endl;
 cout<<"[5] exit"<<endl;
 cout<<""<<endl;
 cin>>kh;
 switch (kh)
 {
 case 1:
    cout<<"ENTER TWO NO. :"<<"\n";
    cin>>b>>c;
    cout<< b <<"+"<< c <<endl;
    cout<<"----------------------------"<<endl;
    cout<<"|| Ans :"<<  b+c             <<"||"<<endl;   ;
    cout<<"----------------------------"<<endl;

    break;
 case 2:
     cout<<"ENTER TWO NO. :"<<"\n";
    cin>>q>>w;
    cout<< q <<"*"<< w <<endl;
    cout<<"----------------------------"<<endl;
    cout<<"|| Ans :"<<  q*w             <<"||"<<endl;   ;
    cout<<"----------------------------"<<endl;
   break;
  case 3:
      cout<<"ENTER TWO NO. :"<<"\n";
    cin>>e>>r;
    cout<< e <<"*"<< r <<endl;
    cout<<"----------------------------"<<endl;
    cout<<"|| Ans :"<<  e-r             <<"||"<<endl;   ;
    cout<<"----------------------------"<<endl;
   break;
   case 4:
        cout<<"ENTER TWO NO. :"<<"\n";
    cin>>x>>z;
    if (z==0)
    {
       cout<<" "<<endl;
    cout<<"YOU CAN NOT DIVIDE : "<< x <<" BY 0"<<endl;
    cout<<" "<<endl;
    cout<<"----------------------------"<<endl;
    cout<<"|| Ans :"<<  x/z             <<"||"<<endl;   ;
    cout<<"----------------------------"<<endl;
    }
    else
    {
          
    cout<< x <<"/"<< z <<endl;
    cout<<"----------------------------"<<endl;
    cout<<"|| Ans :"<<  x/z             <<"||"<<endl;   ;
    cout<<"----------------------------"<<endl;
    }
   cout<<" ";
    break;
 }

}
 
cout<<"________________________________"<<endl<<endl;
cout<<"# H A V E  A  N I C E  D A Y ! #"<<endl;
cout<<"________________________________"<<endl<<endl;



   return 0;
}

