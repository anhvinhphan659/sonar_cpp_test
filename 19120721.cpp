#include <iostream>
#include"Gate.h"
#include"Prince.h"

using namespace std;

vector<Gate*> createChallenge()
{
    int n;
    cout << "Input n: ";
    cin >> n;
    
    vector<Gate*>challenges;
    if (n <= 0)
        return challenges;

    for (int i = 0; i < n; i++)
    {
        int type;
        cout << "Gate type: 1.Bussiness 2.Academic 3. Power\nInput type of gate: ";
        cin >> type;
        while (type < 1 || type>3)
        {
            cout << "Input type: ";
            cin >> type;
        }
        Gate* gate;
        switch (type)
        {
        case 1:
            gate = new BussinessGate();
            break;
        case 2:
            gate = new AcademicGate();
            break;
        default:
            gate = new PowerGate();
            break;
        }
        gate->inputData();
        challenges.push_back(gate);
    }

    return challenges;
}

void printChallenges(vector<Gate*>challenges)
{
    for (int i = 0; i < challenges.size(); i++)
    {
        challenges[i]->outputParam();
    }
}

int main()
{
    vector<Gate*> challenges=createChallenge();
    cout << "-------------------------------------------------" << endl;
    cout << "The challenge is setting up!"<<endl;
    printChallenges(challenges);
    cout << "-------------------------------------------------" << endl;
    Prince pr(40, 20, 9);
    cout << "The beginning state of prince: " << endl;
    cout << "-------------------------------------------------" << endl;
    pr.outputState();
    cout << "-------------------------------------------------" << endl;
    cout << "-------------------SAVE PRINCESSS----------------" << endl;
    pr.savePrincess(challenges);

    for (int i = 0; i < challenges.size(); i++)
        delete challenges[i];
}
