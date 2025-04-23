# include <iostream>
# include<string>
using namespace std;
#ifndef course
#define course


class course{
    protected:
        string coursecode;
        int credits;

    public:
        course()

        virtual void  calcualtegrade() = 0;
        virtual void displayinfo() = 0;


        

};