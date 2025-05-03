#include<iostream>          //Declaring two constructors in a program at the same time is called **constructor overloading**
#include<string>
using namespace std;

class Teacher{
	private:
		double salary;
		
	public:
		string name;
		string dept;
		string subject;
	
//	    Constructor
//		non-parameterized constructor                                          
		Teacher(){
			cout<<"This is a non-parameterized constructor call"<<endl;
			dept = "CSE"; // by default the department of the teacher becomes this if not entered
		} 
		
//		parameterized constructor
		Teacher(string name,string dept,string subject,double salary){
			cout<<"This is a parameterized constructor call"<<endl;	
			this->name = name;	
			this->dept = dept;
			this->subject = subject;
			this->salary = salary;
		}
		
		void setSalary(double sal){
			salary = sal;
		}
		
		double getSalary(){
			return salary;
		}
		
		void getDetails(){
			cout<<"Teacher's name: "<<name<<endl;
			cout<<"Teaches : "<<subject<<endl;
			cout<<"Department: "<<dept<<endl;
		}
};

class Student: public Teacher{
	public:
		string name;
		double *cgpaptr;
		
		Student(string name,double cgpa){              // this is called SHALLOW COPY by using DYNAMIC MEMORY ALLOCATION
			this->name = name;
			cgpaptr = new double;
			*cgpaptr = cgpa;
		}
		
//		copy constructor                                 // this is called DEEP COPY by using DYNAMIC MEMORY ALLOCATION
		Student(Student &obj){
			this->name = obj.name;
			cgpaptr = new double;
			*cgpaptr = *obj.cgpaptr;
		}
		
		void getDetails(){
			cout<<"Student's name: "<<name<<endl;
			cout<<"CGPA: "<<*cgpaptr<<endl;
		}
		
		
//		Destructor
		~Student(){
			cout<<"This is destructor";
			delete cgpaptr;
		}
};

int main(){
	Teacher t1;
	t1.name = "Anushmita";
	t1.subject = "Reproduction";
	t1.dept = "Bio";
	t1.setSalary(12000);
	t1.getDetails();
	
	Teacher t2("Priyanshu","EEE","c++",20000);
	t2.getDetails();
	
	Student s1("Sagun",9.5);
	Student s2(s1);
	
	s1.getDetails();
	*(s2.cgpaptr) = 9.7;
	s1.getDetails();
	s2.name = "Priyanshu";
	s2.getDetails();		
	return 0;
}
