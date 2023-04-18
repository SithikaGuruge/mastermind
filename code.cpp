#include<iostream>
#include<vector>
using namespace std;

class TrainingProgramme{
private:
    vector<string> availableProgrammes =  {"professional qualifications in Red Hat certifications", "Java Programming", "Web Development", "soft skills development"};
    void addNewTrainingProgram(string program){
        availableProgrammes.push_back(program);
    }
public:
    void displayTrainingPrograms(){
        for(int i =0;i<availableProgrammes.size();i++){
            cout<<availableProgrammes[i]<<endl;
        }
    }
};

class CourseDetails{
private:
        string courseName;
        string courseId;
        int duration;
        int courseFee; 

public:
CourseDetails(string courseName,string courseId,int duration,int courseFee){
        this->courseName = courseName;
        this->courseId = courseId;
        this->duration = duration;
        this->courseFee = courseFee;
    } 
};

class manageCourses{
private:
    vector<CourseDetails*> courseList;
    void addCourses(){
        CourseDetails* course = new CourseDetails("course1","123",2,2000);
        courseList.push_back(course);
        delete course;

    }
public:
    void displayCourses(){
        for(int j =0;j<courseList.size();j++){
            cout<<courseList[j]<<endl;
        }
    }
};

class StudentRegistration{
private:
    string name;
    string id;
    string contactNumber;
    string registeredCourse;

public:
    StudentRegistration(string name,string contactNumber){
        this->name = name;
        this->contactNumber = contactNumber;
        this->id = "ST"+name;
    }
    void getDetails(){
        cout<<name<<endl;
        cout<<contactNumber<<endl;
        cout<<id<<endl;
        cout<<registeredCourse<<endl;

    }
    
};

class User{
private:
    string correctPassword = "Pass123";
    string correctUserName = "User1";
    string password;
    string userName;
    bool check(string userName,string password){
        return userName == correctUserName && password == correctPassword;
    }
public:
    void login(string userName,string password){
        this->userName = userName;
        this->password= password;
        if (!check(userName,password)){
            cout<<"Invalid UserName or Password"<<endl;
        }

    }
    void logout(){
        cout<<"Log out"<<endl;
    }
    void exit(){
        cout<<"Exit"<<endl;
    }
};

class CompanyDetails{
private:
    string name;
    string location;
    string contactNumber;

public:
    void viewCompanyDetails(){
        cout<<name<<endl;
        cout<<location<<endl;
        cout<<contactNumber<<endl;

    }
};



int main(){
    User* user1 = new User();
    return 0;

}
