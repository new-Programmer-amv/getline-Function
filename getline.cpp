#include<iostream>
using namespace std;

int main()
{

    // UNDERSTAnding getline
    string name;
    string f_name;
    string age;
   string caste;
   string address;
    cout<<"Enter Your Name : ";
//     cin>>name;
    getline (cin , name);
    cout<<"Enter your age ";
    getline(cin, age);
    cout<<"Enter your Father name ";
    // cin>>f_name;
    getline (cin, f_name);
    cout<<"Enter your Caste ";
    // cin>>caste;
    getline(cin, caste );
    cout<<"Enter Your Address ";
    cin>>address;
    return 0;

}
