#include <iostream>
using namespace std;
class Teacher{
public:
	void teach(){
		cout<<"Im teaching students in the uni"<<endl;
	}
	};
	class Researcher {
	public:
		void research(){
			cout<<"Im doing research at R&D"<<endl;
	}
	};
	class Professor: public Teacher, public Researcher{
	public:
		void role(){
			cout<<"Im a professor,teacher and researcher"<<endl;
	}
	};
	int main (){
		Professor p;
		p.teach();
		p.research();
		p.role();
		return 0;
	}
