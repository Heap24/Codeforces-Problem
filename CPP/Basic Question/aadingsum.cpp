#include <bits/stdc++.h>
using namespace std;

class Human
{
 private:
  string name;
  string gender;
  int height;
  int weight;
  
};

class student : public Human
{
    int rl;
    int id;
    int sec;
    int branch;
    
    public:
    student ()
    {
        
    }
    student ( string name , string gender , int rl , int id)
    {
        this->name = name;
        this->gender = gender;
        this->rl = rl;
        this->id = id;
    }
    void display ()
    {
        cout<<name<<" "<<gender<<" "<<rl<<" id";
    }
};

int main()
{
    
    student A1("aman","male",78,29258);
    A1.display();
}