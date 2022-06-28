#include<iostream>

using namespace std;

      class student

      {

             char Name[25];

             int uid;

             char percentage[8];

             char grade[2];

             public:

             void GetData();

             void PutData();

      };

      void student :: GetData()          //Statement 1 : Defining GetData()

      {

              cout<<"\n\tEnter student Name : ";

             cin>>Name;

             cout<<"\n\tEnter student uid : ";

             cin>>uid;

                     cout<<"\n\tEnter student percentage:";

             cin>>percentage;



             cout<<"\n\tEnter student grade : ";

             cin>>grade;

      }



      void student :: PutData()          //Statement 2 : Defining PutData()

      {

             cout<<"\nstudent Name : "<<Name;

             cout<<"\nstudent uid : "<<uid;

             cout<<"\nstudent percentage:"<<percentage;

             cout<<"\nstudent grade : "<<grade;

      }



      int main()

      {

             student S[1];          //Statement 3 : Creating Object

             int i;

             for(i=0;i<1;i++)

             {

               S[i].GetData();         //Statement 4 : Calling GetData()

             }

             for(i=0;i<1;i++)

             {

               S[i].PutData();         //Statement 5 : Calling PutData()

             }

             return 0;



      }