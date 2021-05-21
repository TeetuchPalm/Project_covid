#include<iomanip>
using namespace std;
#include "NODE.h"
class people: public NODE<people>{
    long people_id,hos_id;
    string name, vaccine_type, un_disease;
    int age;

  public:
    people(long id,long hd, string n, string vac, int a, string un = "NA"):NODE(){
      people_id = id;
      name = n;
      vaccine_type = vac;
      un_disease = un;
      age = a;
      hos_id = hd;
    }
    ~people(){}

    void display(){
      cout<<left<<setw(14)<<people_id<<setw(30)<<name<<setw(18)<<vaccine_type<<setw(4)<<age<<endl;
    }

    int get_age(){return age;}

    long get_id(){return people_id;}

    string get_name(){return name;}

    long get_hos(){return hos_id;}

    string get_vac(){return vaccine_type;}

    string get_un(){return un_disease;}
};

class Vac_Infected{
  string vac_name;
  float percent,count,count_all;
public:
  Vac_Infected(string n){vac_name = n; count = 0; percent = 0; count_all = 0;}
  void infected(){count = count+1;}
  void add_count_all(){count_all = count_all+1;}
  void set(string n,float c, float call,float p){vac_name = n;count = c; percent = p; count_all = call;}

  float get_count(){return count;}
  float get_count_all(){return count_all;}

  string get_name(){return vac_name;}

  float get_per(){return percent;}

  void cal_per(){
    if(count == 0){percent = 0;}
    else{percent = (count/count_all)*100;}
  }
};