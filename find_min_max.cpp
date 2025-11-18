#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long int a,b,c;
   cin>>a>>b>>c;
   int max =0,min =0;
   if(a>b&&a>c)
   {
    max =a;
    if(b>c)
    {
        min = c;
    }
    else
    {
        min =b;
    }
   }


 else if(b>c&&b>c)
   {
    max =b;
    if(a>c)
    {
        min = c;
    }
    else
    {
        min =b;
    }
   }
else if (c>a && c>a)
   {
         max =c;
    if(a>b)
    {
        min = b;
    }
    else
    {
        min =a;
    }
   }

   cout<<min<<" "<<max;


    
        
   
    return 0;
}
