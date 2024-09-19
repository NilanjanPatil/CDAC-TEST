/* Q.No. 2
Write a program to print the area of two rectangles having sides (4,5) and (5,8) respectively by creating a class named 'Rectangle' 
with a function named 'Area' which returns the area. Length */

#include<iostream>
using namespace std;
class rectange
{
	private:
		int lenghth, breadth;
	public:
		void rectangle_1 ()
		{
			cout<<"\n Enter the lenghth of the rectangle_1";
			cin>>lenghth;
			cout<<"\n Enter the breadth of the rectangle_1";
			cin>>breadth;
		}
		public:
		void rectangle_2 ()
		{
			cout<<"\n Enter the lenghth of the rectangle_2";
			cin>>lenghth;
			cout<<"\n Enter the breadth of the rectangle_2";
			cin>>breadth;
		}
		
};
int main()
{
	int lenghth, breadth;
	
	cout<<"\n Enter the lenghth of the rectangle";
	cin>>lenghth;
	cout<<"\n Enter the breadth of the rectangle";
	cin>>breadth;
	cout<<"\n The area of the rectangle is "<< l*b;
}
 
