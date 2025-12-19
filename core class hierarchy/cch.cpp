#include <iostream>
using namespace std;

class Person
{
    int id;
    string name;
    string email;

    public:
    Person()
    {
        id = 0;
        name = "noname";
        email = "noemail";
    }

     Person(int i, string n, string e)
    {
        id = i;
        name = n;
        email = e;
    }

    int getID() const
    { return id; }
    void setID(int i)
    {id = i;}

    string getName() const
    { return name;}
    void setName(string n)
    {name = n;}

    string getEmail() const
    {return email;}
    void setEmail(string e)
    {email = e;}


   virtual ~Person()
   {cout<<"Person Destructor called"<<'\n';};
    
    virtual void printProfile()
    {
        cout << "Details:" << '\n';
        cout << "ID: " << id << '\n';
        cout << "Name: " << name << '\n';
        cout << "Email: " << email << '\n';
    }
};

class User : public Person
{
    public:
    string username;
    User() : Person(), username("noname"){
        cout<<"User object created"<<'\n';
    }
    User(int i, string n, string e, string u) : Person(i, n, e), username(u){
        username = u;
    }
    void printProfile() override{
        Person::printProfile();
        cout<<"Username: "<<username<<'\n';
    }
    ~User(){
        cout<<"User destructor called"<<'\n';
    }
};

class Student : public Person
{
public:
    double cgpa;
    Student() : Person(), cgpa(0.0)
    {
        cout<<"Student Object created"<<'\n';
    }

    Student(int r, string n, string e, double c) : Person(r, n, e), cgpa(c)
    {}

    void printProfile() override
    {
        Person::printProfile();
        cout<<"CGPA: "<< cgpa <<'\n';
    }


    ~Student()
    { cout<<"Student Destructor Called"<<'\n';}

};

class Teacher : public Person
{
    public:
    string department;
    Teacher() : Person(), department("none"){
        cout<<"Teacher Object Created"<<'\n';
    };

    Teacher(int i, string n, string e, string d) : Person(i, n, e), department(d)
    {}

    void printProfile() override
    {
        Person::printProfile();
        cout<<"Department: "<< department <<'\n';
    }   

    ~Teacher()
    { cout<<"Teacher destructor called"<<'\n'; }
};

class Admin : public Person
{
};

int main()
{
    Person *ptr;
    Student s1(0, "aarav", "abc@gamil.com", 8.3);
    s1.setID(15);
    ptr = &s1;
    ptr -> printProfile();

    Teacher t1(0,"Tawqeer","t@gmail.com","CSE");
    t1.setID(2433);
    ptr = &t1;
    ptr -> printProfile();

    User u1(0, "Sachin", "sachin@gmail.com", "MasterBlaster");
    u1.setID(10);
    ptr = &u1;
    ptr -> printProfile();
}
