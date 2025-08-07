//Preprossor
#include<iostream>
#include <cstdlib>
//#include<graphics.h>
#include<Windows.h>
#include<conio.h>
#include<iomanip>
//#include"MMSystem.h" 
#include<string>
#include<fstream>
#include <ctime>
//phototype of function
int menu();
int login();
int New_Account();
int LIST();
int exit();
int DEPOSIT_AMOUNT();
int APPLY_FOR_LOAN();
int WITHDRAW_AMOUNT();
int BALANCE_CHECK();
int SUBMITTED_LOAN_MONEY();
int MODIFY_AN_ACCOUNT();
int CLOSE_AN_ACCOUNT();
//Global variable
using namespace std;
int s[10],money[10],k,i=0,PSS[20],loan[80],q=1;
char ch[10],j;
string f[10],Gender[100];
//starting main function
int main() 
{

//"C:\\tc\\bgi";

//	int initwindow((688,588));
//   int	readimagefile(("a.BMP",0,0,688,388));
//	getche();
//PlaySound(TEXT ("Music.WAV"), NULL,SND_SYNC);
		system("color 4F"); //chanaging the color
	    cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\b\bWELCOME";
		cout<<"\n\n\t\t\t\t\t\t\t\t\b\b  TO";
		cout<<"\n\n\t\t\t\t\t\t\t\b\bBANK MANAGEMENT SYSTEM";
		Sleep(2000);
		Beep(800,500);
		system("cls");
		login();
	}
int login()	
	{
	string name;
	system("color 2f");
		system("color 2");
	cout <<"\n\n\n\n**************Welcome to  Bank Management System**************";
	cout<<endl;
	cout<<"Group Members:"<<endl;
	cout << "Enter a name:";
	cin>>name;
	//Password hidden
	char c=' ';
	string password="";
	cout << "Enter a password:";
	while(c!=13)
	{
		c=getch(); //it donot allow an character to move 
		if(c!=13)
		{
         password+=c;
		cout<<"*"; //we see a * instead of character
	}
      if (password=="AHMED"||password=="ahmed") //OR operator 
{
       if(name=="shahyan"||name=="taimoor"||name=="harrib"||name=="abdus")
     {
	 system("cls");
		menu();
	}
	else
	{
		system("cls");
		Beep(1000,1000); // Sound lesson
		system("cls");
	    main();
}
}

}
}	int menu() 
	{
		int num;
	system("color 2f");
	system("color 2");
		char a = 177, b = 219; //unicode
		cout << "\n\n\n\t\t\t\tLoading....";
		cout << "\n\n\n";
		cout << "\t\t\t\t";
		for (int i = 0; i <= 25; i++)
			cout << a;
		Sleep(200);
		cout << "\r"; //move to top line in the start
		cout << "\t\t\t\t"; //tab (8 spaces)
		for (int i = 0; i <= 25; i++)
		{
			cout << b;
			Sleep(200);
		}
		system("cls");
		cout<<"\n\n"<<endl;
		//*****************Main menu*****************

	cout << "\n\n\t\t\t**************Bank Management System**************";
	cout<<endl;
	cout<<"\t\t*********************************************************************"<<endl;
	cout<<"\t\t\t\t\t\tMain Menu"<<endl;
	cout<<"\t\t*********************************************************************"<<endl;	
	cout<<"\t\t\t1)New Account"<<endl;
	Sleep(200);
	cout<<"\t\t\t2)DEPOSIT AMOUNT"<<endl;
Sleep(200);
        cout<<"\t\t\t3)WITHDRAW AMOUNT"<<endl;
        Sleep(200);
        cout<<"\t\t\t4)BALANCE CHECK"<<endl;
        Sleep(200);

        cout<<"\t\t\t5)ALL ACCOUNT HOLDER LIST"<<endl;
Sleep(200);
        cout<<"\t\t\t6)CLOSE AN ACCOUNT"<<endl;
Sleep(200);
        cout<<"\t\t\t7)MODIFY AN ACCOUNT"<<endl;
        Sleep(200);
        cout<<"\t\t\t8)APPLY FOR LOAN"<<endl;
        Sleep(200);
        cout<<"\t\t\t9)SUBMITTED LOAN MONEY"<<endl;
        Sleep(200);
        cout<<"\t\t\t10)EXIT"<<endl;
        Sleep(200);
        cout<<"\t\t*********************************************************************"<<endl;
        Sleep(200);
	cout<<"Select an option that you want(1-8):";
	cin>>num;
	//Calling of function according to our choice
	if(num==1){
	system("cls");
	New_Account();}
	else if(num==2){
		system("cls");
	DEPOSIT_AMOUNT();
	}
	else if(num==3){
		system("cls");
		WITHDRAW_AMOUNT();
	}
	else if(num==4)
	{
		system("cls");
		BALANCE_CHECK();
	}
	else if(num==5){
	system("cls");
		LIST();	
	}
	else if(num==6){
		system("cls");
	CLOSE_AN_ACCOUNT();}
	else if(num==7){
		system("cls");
		MODIFY_AN_ACCOUNT();
	}
		else if(num==8){
		system("cls");
		APPLY_FOR_LOAN();
	}
		else if(num==9){
		system("cls");
		SUBMITTED_LOAN_MONEY();
	}
	else if(num==10){
		system("cls");
		exit();	
	}
	}
	//Defination of New_Account function
int New_Account()
{
	cout<<"\t\t*********************************************************************"<<endl;
	cout<<"\t\t\t\t\t\tNew Account"<<endl;
	cout<<"\t\t*********************************************************************"<<endl;
for(k=i;k<=i;k++) //starting and ending points same that why only one data is entered at the same time
{
	cout<<"serial #";
	cout<<k<<endl;
	s[k]=k+1;
cout<<"Add account :"<<s[k]<<endl;
cout<<"Add accounter name:";
cin>>f[k];
cout<<"Gender:";
cin>>Gender[k];
cout<<"enter a account type(s/c):";
cin>>ch[k];
cout<<"Enter your password:";
cin>>PSS[k];
cout<<"Enter a money that you want to deposit initially:";
cin>>money[k];
if(money[k]<1000)
{
	cout<<"\nyou must have money greater and equal than 1000";
cout<<"Enter a money that you want to deposit initially:";
cin>>money[k];	
}
cout<<"account creat successfully........"; 
i=i+1;
//writing in file i.e file handling
ofstream myfile; //ofstream means that output file 
//cin.getline(account,50);
		myfile.open("account.txt",ios::app); //account.text is the name of file ios::app meansthat this file ovrwrite even when computer is turn  off
		if(myfile.good()) //good is the keyword
		{
			myfile<<"Account no:"<<s[k]<<endl;
			myfile<<"Accounter name:"<<f[k]<<endl;
			myfile<<"Gender:"<<Gender[k]<<endl;
			myfile<<"Account type:"<<ch[k]<<endl;
			myfile<<"Password:"<<PSS[k]<<endl;
			myfile<<"Enter a money that you want to deposit initially:"<<money[k]<<endl;
		}

menu();
}}
//defination of DEPOSIT_AMOUNT function
int DEPOSIT_AMOUNT()
{ 
int k,h,g=0,m;
	cout<<"\t\t*********************************************************************"<<endl;
	cout<<"\t\t\t\t\t\tDEPOSIT MENU"<<endl;
	cout<<"\t\t*********************************************************************"<<endl;
      cout<<"Enter a serial #:";
     cin>>k;
     cout<<"Enter your password:";
cin>>m;
if(PSS[k]==m){

     cout<<"A.no:"<<s[k]<<endl;
     cout<<"Accounter name:"<<f[k]<<endl;
     cout<<"Gender"<<Gender[k]<<endl;
     cout<<"Account Type:"<<ch[k]<<endl;
cout<<"Money that you deposit initially:"<<money[k]<<endl;
cout<<"Enter a money you want to deposit:";
cin>>h;
g=h+money[k];
money[k]=g;
cout<<"New Blance become:"<<money[k]<<endl;
cout<<"Deposite money successfully........";
menu();
}
else
menu();
}
//Defination of WITH_DRAW function
int WITHDRAW_AMOUNT(){
int k,h,g=0,n;
	cout<<"\t\t*********************************************************************"<<endl;
	cout<<"\t\t\t\t\t\tDRAW MONEY MENU"<<endl;
	cout<<"\t\t*********************************************************************"<<endl;
      cout<<"Enter a serial #:";
     cin>>k;
     cout<<"Enter your password:";
cin>>n;
if(PSS[k]==n)
{
     cout<<"A.no:"<<s[k]<<endl;
     cout<<"Accounter name:"<<f[k]<<endl;
     cout<<"Gender"<<Gender[k]<<endl;
     cout<<"Account Type:"<<ch[k]<<endl;
cout<<"Money that you deposit initially:"<<money[k]<<endl;
cout<<"Enter a money you want to draw:";
cin>>h;
g=money[k]-h;
money[k]=g;
cout<<"New Blance become:"<<money[k]<<endl;
cout<<"draw money successfully........";
menu();	
}
else
menu();}
int CLOSE_AN_ACCOUNT()
{ char t;int g=0,q;
cout<<"\t\t*********************************************************************"<<endl;
	cout<<"\t\t\t\t\tDelete an Account"<<endl;
cout<<"\t\t*********************************************************************"<<endl;
cout<<"Enter a serial number you want to delete:";
cin>>k;
cout<<"Enter a password:";
cin>>q;
if(PSS[k]==q)
{
cout<<"Do you want to delete an account (N/Y)or(n/y):";
cin>>t;

if(t=='y'||t=='Y')
{
	if(loan[k]==0){
	s[k]=0;
	f[k]="-";
	Gender[k]="-";
	ch[k]='-';
	money[k]=0;
}
cout<<"your account is delete successfully.............";
menu();
}
else
{
cout<<"First submit loan";
menu();	
}
} 
else
menu();
}
int BALANCE_CHECK()
{ 
	int k,v;
	cout<<"\t\t*********************************************************************"<<endl;
	cout<<"\t\t\t\t\t\tYour Balance is"<<endl;
	cout<<"\t\t*********************************************************************"<<endl;
      cout<<"Enter a serial #:";
     cin>>k;
     cout<<"Enter your password:";
cin>>v;
if(PSS[k]==v)
{

     cout<<"Your A.No:"<<s[k]<<endl;
     cout<<"Your Name:"<<f[k]<<endl;
     cout<<"Gender:"<<Gender[k]<<endl;
     cout<<"Account Type:"<<ch[k]<<endl;
     cout<<"Balance:"<<money[k]<<endl;
     cout<<"Loan:"<<loan[k]<<endl;
     menu();	
	 }
	 else
menu();}
	  int LIST()
{
	cout<<"\n\n\n\t\t\t\t\tFor office use only"<<endl;
	int g;
	cout<<"\t\t\t\t\tPassword:";
	cin>>g;
	if(g==12345678)
	{
		ofstream myfile;
		myfile.open("List.txt");
	{
		myfile<<"*************************************************************************************************************************"<<endl;
		myfile<<"\t\t\t\t\tALL ACCOUNT HOLDER LIST()"<<endl;
		myfile<<"************************************************************************************************************************"<<endl;
    	myfile<<"serial#\t\tA.no\t\tName\t\tGender\t\ttype\t\tmoney\t\tpassword\t\tloan"<<endl;
    	myfile<<"*****************************************************************************************************************************"<<endl;

     for(k=0;k<=i;k++)
	 {
	 myfile<<""<<k<<"\t\t"<<s[k]<<"\t\t"<<f[k]<<"\t\t"<<Gender[k]<<"\t\t"<<ch[k]<<"\t\t"<<money[k]<<"\t\t"<<PSS[k]<<"\t\t\t"<<loan[k]<<endl;
	}
	myfile.close();}
	cout<<"**************************************************************************************************************************"<<endl;
	cout<<"\t\t\t\t\tALL ACCOUNT HOLDER LIST()"<<endl;
	cout<<"*****************************************************************************************************************************"<<endl;
    cout<<"serial#\t\tA.no\t\tName\t\tGender\t\ttype\t\tmoney\t\tpassword\t\tloan"<<endl;
    cout<<"****************************************************************************************************************************"<<endl;
     for(k=0;k<=i;k++)
	 {
	 cout<<""<<k<<"\t\t"<<s[k]<<"\t\t"<<f[k]<<"\t\t"<<Gender[k]<<"\t\t"<<ch[k]<<"\t\t"<<money[k]<<"\t\t"<<PSS[k]<<"\t\t\t"<<loan[k]<<endl;
}
     cout<<"Do you want to continuous:";
     cin>>j;
     if(j=='y'||j=='Y')
     menu();
}
else
 exit();
 }
 int APPLY_FOR_LOAN()
 {
 int z,dd;
 char aa,kk;
 	cout<<"\t\t*********************************************************************"<<endl;
	cout<<"\t\t\t\t\tApply Loan"<<endl;
	cout<<"\t\t*********************************************************************"<<endl;
 	cout<<"Enter a serial #:";
     cin>>k;
      cout<<"Enter your password:";
   cin>>z;
 if(PSS[k]==z)
 {
 	 cout<<"Your A.No:"<<s[k]<<endl;
     cout<<"Your Name:"<<f[k]<<endl;
     cout<<"Gender:"<<Gender[k]<<endl;
     cout<<"Account Type:"<<ch[k]<<endl;
     cout<<"Balance:"<<money[k]<<endl;
     if(money[k]<=100000)
     {
     	cout<<"Are you a government servant:";
     	cin>>aa;
     	if(aa=='y'||aa=='Y')
     	{
     		cout<<"To Apply loan you have to submit \nPay slip \nproperty paper"<<endl;
			 cout<<"Is"<<f[k]<<" "<<"submitted following things";
			 cin>>kk;
			 	if(kk=='y'||kk=='Y')
			 	cout<<"How many money we want as a loan:";
     	cin>>loan[k];
     	cout<<"Return in how many year:";
     	cin>>dd;
     	menu();
     	}
     	else
     	{
     			cout<<"To Apply loan you have to submit \n1)jellewary \n2)other precision item"<<endl;
			 cout<<"Is"<<" "<<f[k]<<" submitted following things";
			 cin>>kk;
			 	if(kk=='y'||kk=='Y')
			 	cout<<"How many money we want as a loan:";
     	cin>>loan[k];
     	cout<<"Return in how many year:";
     	cin>>dd;
     	cout<<"loan successfully........";
     	Sleep(2000);
     	menu();
     	}
     	
     }
     else
     {
     cout<<"You have enough money in your account";
     menu();}
 }
 else
 {
 cout<<"wrong Password";
 menu();
}
 }
 int SUBMITTED_LOAN_MONEY()
 { int ll, hh;char ss;
 cout<<"Enter a serial #:";
     cin>>k;
 cout<<"Enter your password:";
cin>>ll;
     if(PSS[k]==ll)
     {
 	cout<<"Your A.No:"<<s[k]<<endl;
     cout<<"Your Name:"<<f[k]<<endl;
     cout<<"Gender:"<<Gender[k]<<endl;
     cout<<"Account Type:"<<ch[k]<<endl;
     cout<<"Balance:"<<money[k]<<endl;
     cout<<"Loan:"<<loan[k]<<endl;
     cout<<"enter loan that you want to submit:";
     cin>>hh;
     hh=hh-loan[k];
     cout<<"Do you get your things:";
     cin>>ss;
     if(ss=='y'||ss=='Y'&&hh==0){
     	loan[k]=hh;
     cout<<"Loan submitted successfully............";
     menu();}
     else
     menu();
 }}
int MODIFY_AN_ACCOUNT()
{
int t;
		cout<<"\t\t*********************************************************************"<<endl;
	cout<<"\t\t\t\t\tModify you account"<<endl;
	cout<<"\t\t*********************************************************************"<<endl;
 cout<<"Enter a serial #:";
     cin>>k;
      cout<<"Enter your password:";
cin>>t;
     if(PSS[k]==t)
     {
     cout<<"A.no:"<<s[k]<<endl;
     cout<<"Accounter name:";
     cin>>f[k];
     cout<<"Gender:";
     cin>>Gender[k];
     cout<<"Enter your password:";
       cin>>PSS[k];
     cout<<"Account Type(s/c):";
	 cin>>ch[k];
cout<<"Balance:"<<money[k]<<endl;
cout<<"loan"<<loan[k]<<endl;
cout<<"Modify Account Successfullly...........";
     menu();
}
else
     menu();
}
int exit()
{ char l;
char  pp[50];
		cout<<"\t\t*********************************************************************"<<endl;
	cout<<"\t\t\t\t\tFEED BACK"<<endl;
	cout<<"\t\t*********************************************************************"<<endl;
 cout<<"Do you like our service(Y/N)OR (n/y)"<<endl;
 cin>>l;
 if(l=='n'||l=='N'){
 	cout<<"Enter your complaint"<<endl;
   
   cin.ignore();
   cin.getline(pp,50);
    cout<<"complaint"<<pp<<endl;
    cout<<"__________________________________________________________"<<endl;
   
    ofstream myfile;
		myfile.open("compliants.txt",ios::app);
		myfile<<pp<<endl;
		myfile.close();
 	cout<<"Your comlaint is submitted successfully.We will try to solve your complaint"<<endl;	
 cout<<"THANK  YOU"<<endl;
 Sleep(2000);
 system("cls");
 	login();
 	
 }
 else
 {
 cout<<"THANKYOU TO CHOICING OUR MANAGEMENT SYSTEM";
  Sleep(2000);
 system("cls");
 login();
}

 return 0;
}

