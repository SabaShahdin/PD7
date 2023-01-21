# include<iostream>
using namespace std;
void series (int lowestBound , int highestBound);
main()
{
    int lowestBound;
    int highestBound;
    cout<<"entre lowest bound...";
    cin>>lowestBound;
    cout<<"entre highest bound...";
    cin>>highestBound;
    series(lowestBound , highestBound);
}
void series (int lowestBound , int highestBound)
{
    int amplify;
    for(lowestBound = 1 ; lowestBound <= highestBound ; lowestBound = lowestBound + 1)
    {
        if(lowestBound % 4 == 0)
        {
           amplify= lowestBound * 10;
        } 
        else
        {
            amplify = lowestBound;
        } 
         cout<<amplify<<",";
    }
}