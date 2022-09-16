#include <iostream> 
#include <string>


using namespace std;


//Model a room class, whose member data is three integers length, width and height. 
class Room{
private:
	int length;
	int width;
	int height;
public:


	//The class contains two constructors to initialize the room class objects, first is no argument constructor, while the second in three arguments constructor. 
	Room(){}


	Room(int length,int width,int height){
		this->length=length;
		this->width=width;
		this->height=height;
	}


	//Class also contains three member functions:
	//getdatat() to get the data from user and store in the memory of calling object
	void getdata(){
		cout<<"Enter length: ";
		cin>>length;
		cout<<"Enter width: ";
		cin>>width;
		cout<<"Enter height: ";
		cin>>height;
	}


	//showdata() to show the room data of calling object. 
	void showdata(){
		cout<<"The length: "<<length<<"\n";
		cout<<"The width: "<<width<<"\n";
		cout<<"The height: "<<height<<"\n";
	}




	int getLength(){
		return this->length; 
	}
	int getWidth(){
		return this->width;
	}
	int getHeight(){
		return this->height;
	}
	//int volume(int l, int w, int h) function should receive the length, width and height 
	//values from the objects one by one and return the volumes of the three objects respectively. 
	int volume(int l, int w, int h) {
		return l*w*h;
	}
};


int main (){
	//Write a main program to declare the three object r1, r2, and r3 of room class. 
	//Two object will store the values through three argument constructor
	Room r1(5,10,5),r2(2,2,2),r3;
	
	//third object will get the data from user by calling getdata() function. 
	r3.getdata();
	//Then all three objects should call the volume functions to calculate their volumes and store them in three variables of type integer.
	r1.showdata();
	cout<<"The volume of r1: "<<r1.volume(5,10,5)<<"\n";
	cout<<"\n";
	r2.showdata();
	cout<<"The volume of r2: "<<r2.volume(2,2,2)<<"\n";
	cout<<"\n";
	r3.showdata();
	cout<<"The volume of r3: "<<r3.volume(r3.getLength(),r3.getWidth(),r3.getHeight())<<"\n";


	system("pause");
	return 0;
}