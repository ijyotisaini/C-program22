#include <iostream>
#include<string>

using namespace std;

class Flight{
	int F_no;
	string source;
	string destination;
	float fare;
	
	public:
		 Flight(int f, string s, string d, float fa){
			this->F_no=f;
			this->source=s;
			this->destination=d;
			this->fare=fa;
		}
		
		void display(){
			cout<<"flight number:"<<this->F_no<<endl;
			cout<<"Source:"<<this->source<<endl;
			cout<<"Destination:"<<this->destination<<endl;
			cout<<"Fare:"<<this->fare<<endl;
		}
};
int main() {
	Flight *F1= new Flight(1001,"Delhi","Mumbai",4200.0);
	F1->display();
	
	return 0;
}
