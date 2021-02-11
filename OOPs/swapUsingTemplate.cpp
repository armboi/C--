#include<iostream>

using namespace std;

template <class t>
class test
{
	public:
	t x;
	t y;
	void swap(t x, t y)
	{
		cout<<"Before swapping : x = "<<x<<" y = "<<y<<endl;
		t temp;
		temp = x;
		x = y;
		y = temp;
		cout<<"After swapping : x = "<<x<<" y = "<<y;
	}
};
int main(){
	test<int> t1;
	t1.swap(10,20);
}
