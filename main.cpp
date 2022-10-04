#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

//Prototype
void welcome();

class University
{
    public:
        University()
        {
            name = "Aksu", location = "Akpaden";
        };
        University(string n, string l)
        {
            name = n; location = l;
        };
        void displayInfo()
        {
            cout << "Name: " << name << endl;
            cout << "Location: " << location << endl;
        };
        float getfees(){return fees;};
    private:
        string name, location;
        float fees;
};

class Result
{
    public:
        void show_result(){
            cout << "Your result is " << gpa << endl;
        };
        void set_result(float g)
        {
            gpa = g;
        };
    private:
        float gpa;
};

class Student
{
    public:
        Student()
        {
            name = "John";
            age = "18";
            dept = "None";
        }
        
        void admit()
        {
            if(getAge() >= "18")
            {
                cout << " \n\n YOU HAVE BEEN ADDMITTED! " << endl;
                noOfStud++; // increase no. of student
                // generate regno
                //cout << "Your registration no is " << generate() << endl;`
                status = "Admitted";
            }else{
                status = "Rejected";
                cout << "You've not been admitted" << endl;
            }

        };
        
      // // void studentMenu(){
      //       int p;
      //       //system("CLS");
      //       cout << " STUDENT MENU " << endl;
      //       cout << "1 to upload result" << endl;
      //       cout << "2 to exit " << endl;
      //       cin >> p;
      //       switch(p)
      //       {
      //       case 1:
      //           cout << "Enter cpga: " <<endl;
      //           cin >> p;
      //           r.set_result(p);
      //           break;
      //       case 2:
      //           break;
      //       }
      //       //welcome();
      //   };
        void setName(string n){ name = n; };
        string getName() { return name; };

        void setAge(string a){ age = a; };
        string getAge() {return age; };

        void setDept(string d){ dept = d; };
        string getDept() { return dept; };

        string getStatus() {return status; };

        void display()
        {
            cout << "Name " << name <<endl;
            cout << "Department: " << dept << endl;
            cout << "Age: " << age << endl;

            //cout << "You "
            uu.displayInfo();
        };
        
        void displayResult()
        {
            r.show_result();
        };
        
        void set_result(float g){
            r.set_result(g);
        };
        void payfees(float f){
          float fees = uu.getfees();
          fees -= f;
          cout << "fees paid successfully" << endl;
        }

    private:
        string name, age, dept, status;
        int noOfStud;
        Result r; University uu;
};

void welcome()
{
    string name, dept, age;
    University u;
    Student s;
    int op; float g, f; bool state = true;
    
    // system("CLS");
    cout << "\t\t ============== Welcome to Aksu Admission portal ============== " << endl;

    cout << "\t\t\t\t select 1 for request for admission " << endl;
    cout << "\t\t\t\t select 2 to check admission status " << endl;
    cout << "\t\t\t\t select 3 to check result " << endl;
    cout << "\t\t\t\t select 4 to make payment " << endl;
    cout << "\t\t\t\t select 5 to set student result " << endl;
    cout << "\t\t\t\t select 6 to exit " << endl;
    cout << "Enter options : ";
    cin >> op;
    
    switch(op){
        case 1:
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your department ";
            cin >> dept;
            cout << "Enter your age ";
            cin >> age;
            s.setAge(age); s.setDept(dept); s.setName(name);
            s.admit();
            cout << endl;
            cout << endl;
            // system("pause");
            //sleep(1000);
            break;
        case 2:
            cout << "Your admission status is" << s.getStatus() << endl;
            //system("pause");
            break;
        case 3:
            s.displayResult();
            //system("pause");
            break;
        case 4:
            cout << "your fees is 53000"<<endl;
            cin >> f;
            s.payfees(f);
           // system("pause");
            break;
        case 5:
          cout << "enter result " ;
          cin >> g;
          s.set_result(g);
           // system("pause");
            break;
        case 6: break;
        }
    
    while( op != 6 )
    {
      // system("CLS");
      cout << "\t\t ============== Welcome to Aksu Admission portal ============== " << endl;

      cout << "\t\t\t\t select 1 for request for admission " << endl;
      cout << "\t\t\t\t select 2 to check admission status " << endl;
      cout << "\t\t\t\t select 3 to check result " << endl;
      cout << "\t\t\t\t select 4 to make payment " << endl;
      cout << "\t\t\t\t select 5 to set student result " << endl;
      cout << "\t\t\t\t select 6 to exit " << endl;
      cout << "Enter options : ";
      cin >> op;

      switch(op){
        case 1:
            cout << "Enter your name: ";
            cin >> name;
            cout << "Enter your department ";
            cin >> dept;
            cout << "Enter your age ";
            cin >> age;
            s.setAge(age); s.setDept(dept); s.setName(name);
            s.admit();
            cout << endl;
            cout << endl;
            // system("pause");
            //sleep(1000);
            break;
        case 2:
            cout << "Your admission status is" << s.getStatus() << endl;
            //system("pause");
            break;
        case 3:
           s.displayResult();
            //system("pause");
            break;
        case 4:
            
           // system("pause");
            break;
        case 5:
          cout << "enter result " ;
          cin >> g;
          s.set_result(g);
           // system("pause");
            break;
        case 6: break;
        }
    }
}

int main()
{
    welcome();
    return 0;
}
