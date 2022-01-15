#include<iostream>


// Intellisense(kod tamamlama iþlemi için ctl+space a bas


using namespace std;

int stack[100], n=100, top=-1;

void push(int value)
{
	if(top>=n)
	{
		cout<<"Stack Overflow"<<endl;
		
	}
	else
	{
		top++;
		stack[top]=value;
	}
}


void pop()
{
	if(top<=-1)
	{
		cout<<"Stack Underflow"<<endl;
		
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
		cout<<"Stack is empty!!!"<<endl;
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


int main()
{ 

	
	display();
	push(5);
	display();
	
	for(int a=0;a<10;a++)
	{
		push(a);
	}
	display();
	pop();
	display();
	
	
	
	
	
	return 0;
}
