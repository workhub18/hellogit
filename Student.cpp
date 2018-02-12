 #include "Student.h"
 
 Student::SetStudent(string studentname,int studentid)
 {
	 name=studentname;
	 id=studentid;
 }
 Student::SetName(string studentname)
 {
	 name=studentname;
 }
 Student::SetId(int studentid)
 {
	 id=studentid;
 }
Student::GetName const 
{
	return name;
}
Student::GetId const
{
	return id;
}
