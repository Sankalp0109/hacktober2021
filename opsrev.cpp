#include<iostream>
using namespace std;
class employee{
    private:
    string name;
    string company;
    int age;
    public:
    void information(){
        cout<<"name-"<<name<<endl;
        cout<<"company-"<<company<<endl;
        cout<<"age-"<<age<<endl;

    }

employee(string Name,string Company,int Age)
{  name=Name;
company=Company;
age=Age;
}
};
class developer : employee{
    public:
    string favlan;
    developer(string name,string company,int age,string Favlan)
    :employee(name,company,age)
    {
        favlan=Favlan;
    }
};
int main(){
    employee emp1=employee("harry","amazon",25);
    /*emp1.name="harry";
    emp1.company="amazon";
    emp1.age=25;*/
    emp1.information();
    

}