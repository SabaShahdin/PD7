# include<iostream>
using namespace std;
int triangle (int numberOfSquence);

main()
{   
     int numberOfSquence;
     int dots;
    cout<<"entre number Ofsquence..";
    cin>>numberOfSquence;
    dots = triangle (numberOfSquence);
    cout<<dots;
}
int triangle (int numberOfSquence)
{
    int numberOfDots = 1;
    int next; 
    int x = 1 ;
    int n1 = 0;
    while (x <= numberOfSquence)
    {
       next = n1 + numberOfDots;
        x = x + 1;
        numberOfDots =  numberOfDots + 1;
        n1 = next;
    }

        return next;
}
  