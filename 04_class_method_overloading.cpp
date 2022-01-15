#include<iostream>


using namespace std;

class mathematicalOperations
{
	public:
		int multiplication(int value1, int value2)
		{
			return value1*value2;
		}
		int multiplication(int value1, int value2, int value3)
		{
			return value1*value2*value3;
		}
};


int main()
{
	mathematicalOperations object;
	cout<<"2x3= "<<object.multiplication(2,3)<<endl;
	cout<<"5x2x6= "<<object.multiplication(5,2,6)<<endl;
	
	return 0;
}
