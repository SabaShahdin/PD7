# include<iostream>
# include<windows.h>
using namespace std;
void  printPattren1(int rows);
void printPattren2(int rows);

main()
{
    int rows;
    cout<<"entre number of rows...";
    cin>>rows;
    printPattren1(rows);
    printPattren2(rows);
}
void printPattren1 (int rows)
{
    for(int i=1 ; i<= rows ; i = i+1)
    {
        for(int k=0; k<(rows-i); k++)
        {
            cout<<" ";
        }
        for(int j =1 ; j<= i ; j= j+1)
        {

            cout<<"*";
        }
        cout<<endl;
    }
}
void printPattren2(int rows)
{
    for(int i=rows ; i>= 1 ; i = i- 1)
    {
        for(int k=0; k<(rows-i); k++)
        {
            cout<<" ";
        }
        for(int j =i ; j>=1; j= j-1)
        {
             cout<<"*";
        }
        cout<<endl;
    }
}
