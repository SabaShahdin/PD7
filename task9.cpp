# include<iostream>
using namespace std;

main()
{
    int rows;
    cout<<"entre number of rows  ";
    cin>>rows;
     for(int x=0; x<= rows ; x = x+1)
    {
        for(int y =1 ; y<= x ; y= y+1)
        {
            cout<<"*";
        }
        for(int k=0;k<rows-x;k++)
        {
            cout<<" ";
        }
        for(int k=0;k<(rows-1)-x;k++)
        {
            cout<<" ";
        }
        for(int j=0;j<x+1;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
}   