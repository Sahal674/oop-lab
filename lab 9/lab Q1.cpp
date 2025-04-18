# include <iostream>
# include <string>
using namespace std;

class patients {
    protected:
        string name;
        string id;
    public:
        patients(){}

        virtual void dislpaytreatment() = 0;
        virtual int calculateCost() =0;

};

class inPatient : public patients{
    void dislpaytreatment(){
        cout << "treatment 1 room 8"<<endl;
        

    }
    int calculateCost(){
        return 2000 + 4555;
    }
};

class outpatient : public patients{
      void dislpaytreatment(){
        cout << "treatment 5 room 7"<<endl;
        

    }
    int calculateCost(){
        return 20007 + 4555;
    }
};

int main (){
    inPatient p1;
    outpatient p2;
    p1.dislpaytreatment();
    p1.calculateCost();
    p2.dislpaytreatment();
    p2.calculateCost();
    



    return 0;
}