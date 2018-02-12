 #ifndef STUDENT_H
 #define STUDENT_H
 #include<string>
using namespace std;
class Student
{
public:
Student ();
Student(string,int);
void SetName(string);
void SetId(int);
string GetName();
int GetId();

private :
string name;
int id;
};
#endif
