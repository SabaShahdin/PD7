# include<iostream>
using namespace std;
void printPercentage (float n);
main()
{
    float n;
    cout<<"entre any number ";
    cin>>n;
    printPercentage (n);
}

void printPercentage (float n)
{
    float counter2=0;
    float counter1=0;
    float counter3=0;
    int  number;
    float p1;
    float p2;
    float p3;
    float p4;
    float p5;
    float percentage1;
    float percenatge2;
    float percentage3;
    for( float x = 1 ; x <= n ; x = x + 1) 
    {
        cin>>number;
        if(number %  2 == 0)
        {
         counter1 = counter1 + 1;
        }
        if(number % 3 == 0)
        {
        counter2 = counter2 + 1;
        }
        if(number % 4 == 0)
        {
          counter3 = counter3 + 1;
        }
    }
      percentage1  = counter1 / n;
       p1 = percentage1 * 100;
      cout<<p1<<endl;
      percenatge2 = counter2 / n;
      p2 = percenatge2 * 100;
      cout<<p2<<endl;
      percentage3 = counter3 / n;
      p3 = percentage3 * 100;
      cout<<p3<<endl;
}  