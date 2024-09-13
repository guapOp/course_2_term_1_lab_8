#include "iostream"
#include "actions.h"
#include <windows.h>
#include <iomanip>
#define YELLOW  14
using namespace std;

void SetColor(int textColor, int bgColor) {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, (bgColor << 4) | textColor);
}

void DrawTable(int num1, int num2) {
    SetColor(YELLOW, BACKGROUND_BLUE);
    cout << "+------+------+" << endl;
    cout << "|  x   |  Y   |" << endl;
    cout << "+------+------+" << endl;
    cout << "| " << setw(4) << num1 << " | " << setw(4) << num2 << " |" << endl;
    cout << "+------+------+" << endl;
}



int main (int argc, char * argv[]) {
    if (argc != 3) {
        cerr << "using: " << argv[0] << " <first int> <second int>" << endl;
        return 1;
    }

    int int1 = stoi(argv[1]);
    int int2 = stoi(argv[2]);

    DrawTable(int1, int2);

    Actions NumActions(int1, int2);

    SetColor(FOREGROUND_GREEN, BACKGROUND_BLUE);
    cout << "1. sum: " << NumActions.Sum() << endl;
    cout << "2. product: " << NumActions.Mult() << endl;
    cout << "3. lower number: " << NumActions.LowerNum() << endl;
    cout << "4. upper number: " << NumActions.UpperNum() << endl;
    cout << "5. lower absolute number: " << NumActions.LowerAbsNum() << endl;
    cout << "6. upper absolute number: " << NumActions.UpperAbsNum() << endl;
    cout << "7. sum of squares: " << NumActions.SumSquare() << endl;
    cout << "8. half sum: " << NumActions.HalfSum() << endl;
    cout << "9. half difference: " << NumActions.HalfDiff() << endl;
    cout << "10. min square: " << NumActions.MinSquare() << endl;
    cout << "11. min cube: " << NumActions.MinCube() << endl;
    cout << "12. max square: " << NumActions.MaxSquare() << endl;
    cout << "13. max cube: " << NumActions.MaxCube() << endl;
    cout << "14. sqrt of sum: " << NumActions.SqrtSum() << endl;
    cout << "15. sqrt of max: " << NumActions.SqrtMax() << endl;
    cout << "16. sqrt of min: " << NumActions.SqrtMin() << endl;
    cout << "17. triple product of sum: " << NumActions.TripleProdSum() << endl;
    cout << "18. double product of difference: " << NumActions.DoubleProdDiff() << endl;
    cout << "19. sin of sum: " << NumActions.SinSum() << endl;
    cout << "20. cos of sum: " << NumActions.CosSum() << endl;
    cout << "21. sin of difference: " << NumActions.SinDiff() << endl;
    cout << "22. cos of difference: " << NumActions.CosDiff() << endl;
    cout << "23. product of sum and difference: " << NumActions.ProdSumDiff() << endl;
    cout << "24. division of sum by difference: " << NumActions.DivSumDiff() << endl;
    cout << "25. negated lower number: " << NumActions.NegateLower() << endl;


}
