#include <iostream>
#include <cmath>

using namespace std;

void displayUsage()
{
    cout << "Usage: calculator -o [operation] [operand]" << endl;
    cout << "Supported operations:" << endl;
    cout << "-o tangens (calculate tangens)" << endl;
    cout << "-o cotangens (calculate cotangens)" << endl;
}

int main(int argc, char** argv)
{
    if (argc == 1) {
        displayUsage();
        return 0;
    }

    string operation = argv[2];
    double operand = stod(argv[3]);

    if (operation == "tangens") {
        double result = tan(operand);
        cout << "tangens ot " << operand << " bydet: " << result << endl;
    } else if (operation == "cotangens") {
        double result = 1 / tan(operand);
        cout << "kotangens ot " << operand << " bydet: " << result << endl;
    } else {
        cout << "Unsupported operation: " << operation << endl;
    }

    return 0;
}
