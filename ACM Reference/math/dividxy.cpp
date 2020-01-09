#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    string d1,s,a;
    stringstream n1  ,d2;
    long long  n ,d,b,c=0,t,f,z=0,x;
    cin>>s>>d1;


    t=d1.size();

    d2<<d1;

    d2>>d;

    a=s.substr(0,t);

    n1<<a;
    n1>>n;

    c=t;
if(t>s.size())
        cout<<"0"<<endl;
else
{


    while(true)
    {

        z++;

        x=n/d;
            if(z==1 && x==0)
                {
                   if(t==s.size())
                        cout<<"0"<<endl;

                }
            else
           cout<<x;

        b=x*d;

        n=n-b;

        if(c==s.size())
            break;

        n=n*10+(s[c]-'0');
        c++;



    }


        cout<<endl;

}


}