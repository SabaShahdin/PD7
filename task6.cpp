# include<iostream>
using namespace std;
int patientsArrive (int period);
void untreatedPtients (int patient , int period);
main()
{
    int period;
    int numberOfPtients;
    int patient;
    cout<<"entre period of calculations....";
    cin>>period;
    patient = patientsArrive (period);
}
int patientsArrive (int period)
{
int numberOfPatients;
int counter= 0;
int totalDoctor  = 7;
int untreated;
int sum = 0 ;
int counter1 = 0;
int treated;
int sum1 = 0;
for(int x=1 ; x<= period ; x++)
{
    for(int day =1 ; day<= period ; day = day +1)
    {
        if(day % 3 == 0)
        {
            totalDoctor = totalDoctor + 1; 
        }
        else 
        {
            totalDoctor = totalDoctor;
        }   
         cin>>numberOfPatients;
         counter = counter + 1;
         sum1 = sum1 + numberOfPatients;
       if(numberOfPatients > totalDoctor)
      {
         untreated  = numberOfPatients - totalDoctor ;         
         sum = sum + untreated;
      }
    }
      cout<<"total untreated "<<sum<<endl;
       if(numberOfPatients <= totalDoctor )
      {
         treated = sum1 - sum ;
        cout<<"total treated  "<<treated;
      }
      }
}
