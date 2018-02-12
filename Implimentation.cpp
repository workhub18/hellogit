 #include<iostream>
 #include<string>
 #include<vector>
 #include "Student.h"
 using namespace std;
 
 void Enterpupil(vector<Student>&newpupil)
 {
	 string pupilname;
	 int pupilid;
 
 for (int a=0;0<5;a++)
 {
	 cout<<"Enter Student Name"<<endl;
	 cin>>pupilname;
	 cout<<"Enter Student Id"<<endl;
	 cin>>pupilid;
	 
	 Student pupil(pupilname,pupilid);
	 newpupil.push_back(pupil);
 }
 }
 
 void Printpupil(const vector<Student>&newpupil)
 {
	 for (int a=0;a<5;a++)
	 {
		 cout<<"Name "<<newpupil.GetName();
		 cout<<"Id "<<newpupil.GetId();
	 }
 }
 
