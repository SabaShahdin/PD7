# include<iostream>
using namespace std;
void printPattren(int rows) ;
  
main()
{
    int rows;
    cout<<"entre number of rows..";
    cin>>rows;
    printPattren(rows);
}
   void printPattren(int rows) 
   {
    for(int x=1 ; x<= rows ; x = x+1)
    {
        for(int y =1 ; y<= x ; y= y+1)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}
