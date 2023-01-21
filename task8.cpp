# include<iostream>
using namespace std;
void tonsOfCargo (float  numberOfCargo);
main()
{
    float  numberOfCargo;
    cout<<"entre number of cargo ...";
    cin>>numberOfCargo;
    tonsOfCargo (numberOfCargo);
}
void tonsOfCargo (float  numberOfCargo)
{
    float  tons;
    float  counter = 0;
    float  sum =0;
    float  priceOfMiniBus;
    float  priceOfTruck;
    float  priceOfTrain;
    float  percentageOfBus;
    float  percentageOfTruck;
    float  percentageOfTrain;
    float ton1 = 0;
    float ton2 =0;
    float ton3 = 0;
    float average;
    float result;
    for(float  x =1 ; x<= numberOfCargo ; x= x + 1)
    {
        cin>>tons;
        counter = counter + 1;
        sum = sum + tons;
    if(tons <= 3)
    {
        ton1 = ton1 + tons;
    }
    else if(tons> 3 && tons<=11 )
    {
      ton2 = tons + ton2;
    }
    else if(tons > 11 )
    {
       ton3 = tons + ton3;

    }
} 
    percentageOfBus = (ton1 / sum )*100;
   cout<<percentageOfBus<<"%"<<endl;
     percentageOfTruck = (ton2 / sum )*100;
   cout<<percentageOfTruck<<"%"<<endl;
    percentageOfTrain = (ton3 / sum )*100;
   cout<<percentageOfTrain<<"%"<<endl;
   priceOfMiniBus = ton1 * 200;
   priceOfTruck = ton2 * 175;
   priceOfTrain = ton3 * 120;
   average = priceOfMiniBus + priceOfTruck + priceOfTrain; 
   result = average / sum;
   cout<<result<<"%"<<endl;
} 
   