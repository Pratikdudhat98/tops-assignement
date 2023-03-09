#include<iostream>
using namespace std;

class lectur
{

    string Lecturer_name;
    string Subject_name;
    string Cours_name;
    int lecture_number;

    public:

    void getdata()
    {
        cout<<"Enter Lacturer Name : ";
        cin>>Lecturer_name;
        cout<<"Enter Subject Name : ";
        cin>>Subject_name;
        cout<<"Enter Cours Name : ";
        cin>>Cours_name;
        cout<<"Enter Lecture Number : ";
        cin>>lecture_number;
    }

    void Showdata()
    {
        cout<<"--------------------------------"<<endl;
        cout<<"Enter Lecturer Name : "<<Lecturer_name<<endl;
        cout<<" ";
        cout<<"Enter Subject Name : "<<Subject_name<<endl;
        cout<<"Enter Cours Name : "<<Cours_name<<endl;
        cout<<"Enter Lecturs Number : "<<lecture_number<<endl;
        cout<<"--------------------------------"<<endl;
    }


};

int main()
{

    int num;
    cout<<"number of lectures: ";
    cin>>num;

    lectur l[num];

    for (int i = 0; i < num; i++)
    {
        l[i].getdata();
        l[i].Showdata();
    }
    

    return 0;
}