#include<iostream>


// Intellisense(kod tamamlama) iþlemi için ctl+space a bas


using namespace std;

int stack[7], n=7, top=-1;

void push()
{
	if(top>=n-1)
	{
		cout<<"Raf Dolu"<<endl;
		
	}
	else
	{
		top++;
		stack[top]=top+1;
	}
}


void pop()
{
	if(top<=-1)
	{
		cout<<"Raf Zaten Boþ"<<endl;
		
	}
	else
	{
		top--;
	}
}

void display()
{
	
	if(top==-1)
	{
		cout<<"Raf bos!!"<<endl;
	}
	else
	{
		int i;
		
		for(i=0;i<top+1;i++)
		{
			cout<<stack[top-i]<<" ";
		}
		cout<<endl;
	}
}

void isFullorEmpty()
{
	if(top>-1 && top<n-1)
	{
		cout<<"Raf dolu ama yer var!"<<endl;
	}
	else if(top==n-1)
	{
		cout<<"Raf tamamen dolu!"<<endl;
	}
	else if(top<=-1)
	{
		cout<<"Raf bos!"<<endl;
	}
	
	
	
	
}


int main()
{ 

	

	isFullorEmpty();
	for(int a=0;a<7;a++)
	{
		push();
	}
	isFullorEmpty();
	display();
	isFullorEmpty();
	
	
	
	
	
	
	return 0;
}
