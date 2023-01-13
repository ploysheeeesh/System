#include<iostream>
#include <Windows.h> //system
#include <stdio.h> //printf
#include<conio.h>
//#include<time.h>>
using namespace std;

int main()

{

    double balance , deposit , withdraw,amount;
    string name,username;
    int option,pin,password;

    balance=000; //default balance
    system("COLOR 0e");
    system("cls");
    printf("\e[?25l");
 cout<<"\n\t\t\t\t*************Log In*****************"<<endl;
 cout<<"\t\t\t\tEnter Your Name: ";cin>>name;
 cout<<"\t\t\t\tEnter Your Pin : ";cin>>pin;
 if (name == "Ploy"){
    if (pin == '1234'){
    cout<<"\t\t\t\tCongratulation!!"<<endl;
    }else{
        cout<<"\t\t\t\tCongratulation!!"<<endl;
    }
 }else{
    cout<<"\t\t\t\tOpp! Wrong"<<endl;
 }
    do{



 cout<<"\n\t\t\t\t*************MENU*****************";

 cout<<"\n\t\t\t\t*                                *";

 cout<<"\n\t\t\t\t*      1. Check Balance          *";

 cout<<"\n\t\t\t\t*      2. Deposit                *";

 cout<<"\n\t\t\t\t*      3. Withdraw               *";

 cout<<"\n\t\t\t\t*      4. Transfer               *";

 cout<<"\n\t\t\t\t*      5. Exit                   *";

 cout<<"\n\t\t\t\t*                                *";

 cout<<"\n\t\t\t\t**********************************";

 cout<<"\n\t\t\t\t Please Choose an Option: ";cin>>option;
     //Set ASCII to print special character.
    //Code page 437
    SetConsoleCP(437);
    SetConsoleOutputCP(437);
    int bar1 = 177, bar2 = 219;

    cout << "\n\n\n\t\t\t\tLoading...";
    cout << "\n\n\n\t\t\t\t";

    for(int i = 0; i < 20; i++)
        cout << (char)bar1;

    cout <<"\r";
    cout <<"\t\t\t\t";
    for(int i = 0; i < 20; i++)
    {
        cout <<(char)bar2;
        Sleep(150);
    }
 switch(option)

 {

  case 1:
   cout<<"\n\n\t\t\t\t______________________________"<<endl;
   cout<<"\n\t\t\t\tYour Balance is: $"<<balance<<endl;
   cout<<"\t\t\t\t______________________________"<<endl;

   break;

  case 2:

   cout<<"\n\n\t\t\t\tAmount You Want to deposit: $";


   cin>>deposit;

   balance += deposit; // balance =balance + deposit;
    cout<<"\t\t\t\t_____________________________________"<<endl;
    cout<<"\t\t\t\t\t Deposit Success"<<endl;
    cout<<"\n\t\t\t\tName         : "<<name<<endl;
    cout<<"\n\t\t\t\tTransfer time: ";
    //time_t ct=time(0);
    //string currenttime=ctime(&ct)
    //cout<<currenttime;

cout<<__DATE__;cout<<"( ";cout<<")";
cout<<__TIME__<<endl;
     cout<<"\n\t\t\t\t_____________________________________"<<endl;

   break;

  case 3:

   cout<<"\n\t\t\t\tHow much do you want to withdraw? $";

               cin>>withdraw;

   if(balance<withdraw)

      cout<<"\n\t\t\t\tYou do not have enough money in your account to withdraw"<<endl;

   else

   balance -= withdraw; // balance =balance - deposit;

   break;

  case 4:
     cout<<"\n\t\t\t\t_____________________________________"<<endl;
    cout<<"\n\t\t\t\t   Enter name                 : ";cin>>username;
    cout<<"\n\t\t\t\t   Enter amount               : ";cin>>amount;
   if (balance<amount)
    cout<<"\n\t\t\t\t********Transfer not Success***********"<<endl;
   else
   balance -= amount; // balance = balance - amount;
   if (balance>=amount)
    cout<<"\n\t\t\t\t********Transfer Success***********";
    cout<<"\n\t\t\t\tFrom name    : "<<username<<endl;
    cout<<"\n\t\t\t\tTransfer time: ";
    //time_t ct=time(0);
    //string currenttime=ctime(&ct)
    //cout<<currenttime;

cout<<__DATE__;cout<<", ";
cout<<__TIME__<<endl;

   break;

  default:

   if(option !=5)

   cout<<"\n\n\n\t\t\t\t Invalid Option Please Try Again"<<endl;

   break;



   }



}while(option !=5);

system("pause");



 return 0;

}
