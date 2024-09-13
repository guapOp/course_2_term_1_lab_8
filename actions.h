#ifndef LAB_8_ACTIONS_H
#define LAB_8_ACTIONS_H

#include <string>
#include <cmath>

class Actions {
private:
    int num1;
    int num2;

public:
    Actions(int num1, int num2);

    int Diff(bool strict = false);

    int Sum(bool strict = false);                        // 1. Получить их сумму
    int Mult();                       // 2. Получить их произведение
    int LowerNum();                  // 3. Найти меньшее из них
    int UpperNum();                  // 4. Найти большее из них
    int LowerAbsNum();               // 5. Найти меньшее по абсолютной величине
    int UpperAbsNum();               // 6. Найти большее по абсолютной величине
    int SumSquare();                 // 7. Найти сумму квадратов этих чисел
    float HalfSum();                 // 8. Получить их полусумму
    float HalfDiff();                // 9. Получить их полуразность
    int MinSquare();                 // 10. Наименьшее из них возвести в квадрат
    int MinCube();                   // 11. Наименьшее из них возвести в куб
    int MaxSquare();                 // 12. Наибольшее из них возвести в квадрат
    int MaxCube();                   // 13. Наибольшее из них возвести в куб
    float SqrtSum();                 // 14. Найти корень квадратный суммы этих чисел
    float SqrtMax();                 // 15. Найти корень квадратный наибольшего из них
    float SqrtMin();                 // 16. Найти корень квадратный наименьшего из них
    int TripleProdSum();             // 17. Получить утроенное произведение суммы этих чисел
    int DoubleProdDiff();            // 18. Получить удвоенное произведение их разности
    float SinSum();                  // 19. Получить синус суммы этих чисел
    float CosSum();                  // 20. Получить косинус суммы этих чисел
    float SinDiff();                 // 21. Получить синус разности этих чисел
    float CosDiff();                 // 22. Получить косинус разности этих чисел
    int ProdSumDiff();              // 23. Получить произведение суммы и разности этих чисел
    float DivSumDiff();             // 24. Получить частное от деления суммы на разность этих чисел
    int NegateLower();              // 25. Поменять знак у меньшего из этих чисел

    ~Actions();

};

#endif // LAB_8_ACTIONS_H
