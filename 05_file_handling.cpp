#include<iostream>
#include<fstream>
#include<stdio.h>

using namespace std;

//ofstream creatinng and opening file for writing 
//ifstream opening file for reading 
//fstream creatinng and opening file for both

int main()
{
	
	ofstream fl("tryout.txt");//create file for writing
	
	if(!fl)//checking existance of file
	{
		cout<<"can not open file\n";
		exit(1);
	}
	
	fl<<"Omer Faruk Fidan\n"; //writing to file
	fl<<"90";
	
	fl.close(); //closing the file
	
	
	
	
	ifstream fl2("tryout.txt");//open file for reading 
	
	string text;
	
	if(!fl2)//checking existance of file
	{
		cout<<"can not open file\n";
		exit(1);
	}
	
	while(fl2.eof()==0)//displaying what file includes
	{
		fl2 >> text;
		cout<<text<<" ";
		text="";
	}
	
	fl2.close();//closing the file
	
	
	
	
	cout<<"\n\n\n\n________________________________________________________________________________________\n\n\n\n\n\n";
	fstream fl3("tryout.txt");
	
	char letter,temp;
	bool check=0;
	cout<<"Enter the letter you want to search in file: ";
	cin>>letter;
	cout<<endl;
	
	while(fl3.eof()==0)
	{
		fl3.get(temp);
		if(temp==letter)
		{
			cout<<"The letter you entered is exists in file!"<<endl;
			check=1;
			break;
		}
		
		
		
	}
	
	if(!check)
	{
		cout<<"The letter you entered is not exists in file!!"<<endl;

	}
	
	fl3.close();
	
	int status;
	status=remove("tryout.txt");
	if(status==0)
	{
	  cout<<"File deleted succesfully!"<<endl;	
	}
	
	
	
	
	return 0;
}
