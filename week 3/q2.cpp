#include <iostream>
#include <string>

using namespace std;

class FitnessTracker {
private:
    string userName;
    int dailyStepGoal;
    int stepsTaken;
    double burnedCalories;

public:
    FitnessTracker(string name, int stepGoal) {
        userName = name;
        dailyStepGoal = stepGoal;
        stepsTaken = 0;
        burnedCalories = 0.0;
    }

    void logSteps(int steps) {
        stepsTaken += steps;
        burnedCalories += steps * 0.04; 
        cout << steps << " steps logged. Total steps: " << stepsTaken << endl;
    }

    void displayProgress() {
        cout << " Progress for " << userName << ":" << endl;
        cout << "Steps Taken: " << stepsTaken << " / " << dailyStepGoal << endl;
        cout << "Calories Burned: " << burnedCalories << " kcal" << endl;
        if (stepsTaken >= dailyStepGoal) {
            cout << "Congratulations! you acheved your goal!" << endl;
        } else {
            cout << "Keep going! You need " << (dailyStepGoal - stepsTaken) << " more steps to reach your goal." << endl;
        }
    }
};
