/* Q.No. 2
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' 
with a function named 'Area' which returns the area. Length */

#include<iostream>

using namespace std;

class Rectangle
{
	private:
	 
	float length;
	float breath;
	
	public:
		
		Rectangle(float a=0.0,float b=0.0)
		{
			length = a;
			breath = b;
		}
		
		float Area()
		{
			return length * breath;
		}
		
		~Rectangle()
		{
			
		}
};

int main()
{
	Rectangle R1(4,5);
	
	Rectangle R2(5,8);
	
	float a = R1.Area();
	
	cout<<"Area of R1 : "<<a<<endl;
	
	float b = R2.Area();
	
	cout<<"Area of R2 : "<<b<<endl;
	
	return 0;
 
