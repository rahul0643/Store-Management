/*Name-Rahul Bagate(03)
Class -SE-B
c++ certification course mini project*/
#include<iostream>
using namespace std;

  class dept
  {   int amount[20],pris[20],k,a,b,amount1;
      int code,code1,cod[20],s,last;
    public:
       float price,price1;
       dept();
       void sell();
       void total_items();
       void add_old();
       void add_new();
       void show();
     };
    dept:: dept()
    { s=0;a=10;b=40;last=5;amount[0]=0;
      for(int k=0;k<last;k++)
      { s=s+1;b=b+10;
      cod[k]=s;
      amount[k]=a;
      pris[k]=b;
      }
     }
   void dept::add_old()
    { cout<<"\nEnter item code:";
      cin>>code1;
      cout<<"\nEnter item price:";
      cin>>price1;
     for(k=0;k<last;k++)
       { if(code1==cod[k])
      { a=a+1;
        amount[k]=a;
        pris[k]=price1;
      }
      
      }}
   void dept::add_new()
   {    cout<<"\nEnter item code:";
    cin>>code1;
    cout<<"\nEnter amount of that item:";
    cin>>amount1;
    cout<<"\nEnter item price:";
    cin>>price1;

    cod[last]=code1;
    amount[last]=amount1;
    pris[last]=price1;
    last++;
     }
    void dept::show()
     { for(k=0;k<last;k++)
    {
      cout<<"\nCODE:"<<cod[k]<<"\t";
      cout<<"\nAMOUNT:"<<amount[k]<<"\t";
      cout<<"\nPRICE:"<<pris[k]<<endl;
      }
    }
  void dept::sell()
   {
    cout<<"\nEnter product code:\n";
    cin>>code;
    cout<<"\nEnter product price:\n";
    cin>>price;
    }
  void dept::total_items()
   {
     cout<<"\n\nITEM CODE:"<<code<<"\n\nITEM PRICE:"<<price;
   }
  int main()
  {
     dept d[10];
     static int j=0;
     int x,i=0,p,s=0;
    
    do{
    	  cout<<"\n \t\t MINIPROJECT\n";
       cout<<"\nMADE BY SATYAM, RAHUL, PUSHKAR, YASHWANT"<<endl;
       cout<<"\nENTER YOUR CHOICE:\n";
       cout<<"\n1. Show all stored items:";
       cout<<"\n2. Add an old item:";
       cout<<"\n3. Add a new item:";
       cout<<"\n4. Sell an item:";
       cout<<"\n5. Total sold:";
       cout<<"\n6. Show total items sold:";
       cout<<"\n7. Quit"<<endl;

      cin>>x;
    switch(x)
    {   case 1: d[i].show();
            break;
        case 2: d[i].add_old();
            d[i].show();
            break;
        case 3: d[i].add_new();
            d[i].show();
            break;
        case 4: d[i].sell();
            i++,j++;
            break;
        case 5:{ cout<<"Total Sold:";
             s=0;

             for(p=0;p<j;p++)
             { s=s+d[p].price;
             }
             cout<<s;
             cout<<" Rupees.\n";
             }
             break;
        case 6: for(i=0;i<j;i++)
              {  d[i].total_items();
               }
              break;
        case 7: break;
         }
         } while(x!=7);
      
          return 0;
       }

	
