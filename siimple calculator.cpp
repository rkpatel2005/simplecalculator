#include<iostream>
using namespace std;
int main()
{
    float a,b,d;
    int label;
    char c;
       label:
    cout<<"which operation do you want to perform from this:"<<endl;
    cout<<"(1)addition(+)\n"
          "(2)subtraction(-)\n"
          "(3)multiplication(*)\n"
          "(4)division(/)\n";
          cin>>c;
          cout<<"enter first number:"<<endl;
          cin>>a;
          cout<<"enter second number:"<<endl;
          cin>>b;
          if(c=='+')
           cout<<"your anwser is:"<<a+b<<endl;
          else if(c=='-')
          {
              if(a>b)
                cout<<"your anwser is:"<<a-b<<endl;
              else
                cout<<"your anwser is:-"<<(b-a)<<endl;
          }
          else if(c=='*')
           cout<<"your anwser is:"<<a*b<<endl;
          else if(c=='/')
          cout<<"your anwser is:"<<a/b<<endl;
          else
         {cout<<"enter an appropriate operator:"<<endl;}
         cout<<"-------------------------------------------------------------------"<<endl;

         cout<<"if you want perform another operation then press 1:\n"
               "and you want to exit from the programme then press 0:"<<endl;
        cin>>d;


               if(d==1)
                {goto label;}
               else
                {

                 return 0;}

}

