#include "Actions.h"
#include <cmath>
#include <algorithm>
#include <iostream>

using namespace std;

Actions::Actions(int num1, int num2) : num1(num1), num2(num2) {}
Actions::~Actions() {}

int Actions::Sum(bool strict) {

    // TODO: возвращает сумму двух чисел
    int current_sum = num1 + num2;

    if (strict && current_sum == 0) {
        std::cerr << "sum is zewro" << std::endl;
        return 0;
    }
    return current_sum;
}

int Actions::Diff(bool strict) {
    int difference = num1 - num2;

    if (strict && difference == 0) {
        std::cerr << "diff is zero" << std::endl;
        return 0;
    }

    return difference;
}

int Actions::Mult() {
    // TODO: возвращает произведение двух чисел
    return num1 * num2;
}

int Actions::LowerNum() {
    // TODO: возвращает меньшее из двух чисел
    return min(num1, num2);
}

int Actions::UpperNum() {
    // TODO: возвращает большее из двух чисел
    return max(num1, num2);
}

int Actions::LowerAbsNum() {
    // TODO: возвращает меньшее по абсолютной величине из двух чисел
    return min(abs(num1), abs(num2));
}

int Actions::UpperAbsNum() {
    // TODO: возвращает большее по абсолютной величине из двух чисел
    return max(abs(num1), abs(num2));
}

int Actions::SumSquare() {
    // TODO: возвращает сумму квадратов двух чисел
    return (num1 * num1) + (num2 * num2);
}

float Actions::HalfSum() {
    // TODO: возвращает полусумму двух чисел
    return static_cast<float>(num1 + num2) / 2;
}

float Actions::HalfDiff() {
    // TODO: возвращает полуразность двух чисел
    return static_cast<float>(Diff()) / 2;
}

int Actions::MinSquare() {
    // TODO: возвращает квадрат наименьшего из двух чисел
    int min_num = LowerNum();
    return min_num * min_num;
}

int Actions::MinCube() {
    // TODO: возвращает куб наименьшего из двух чисел
    int min_num = LowerNum();
    return min_num * min_num * min_num;
}

int Actions::MaxSquare() {
    // TODO: возвращает квадрат наибольшего из двух чисел
    int max_num = UpperNum();
    return max_num * max_num;
}

int Actions::MaxCube() {
    // TODO: возвращает куб наибольшего из двух чисел
    int max_num = UpperNum();
    return max_num * max_num * max_num;
}

float Actions::SqrtSum() {
    // TODO: возвращает корень квадратный из суммы двух чисел
    return sqrt(static_cast<float>(Sum()));
}

float Actions::SqrtMax() {
    // TODO: возвращает корень квадратный из наибольшего из двух чисел
    return sqrt(static_cast<float>(UpperNum()));
}

float Actions::SqrtMin() {
    // TODO: возвращает корень квадратный из наименьшего из двух чисел
    return sqrt(static_cast<float>(LowerNum()));
}

int Actions::TripleProdSum() {
    // TODO: возвращает утроенное произведение суммы двух чисел
    return Sum() * 3;
}

int Actions::DoubleProdDiff() {
    // TODO: возвращает удвоенное произведение разности двух чисел
    return (Diff()) * 2;
}

float Actions::SinSum() {
    // TODO: возвращает синус суммы двух чисел
    return sin(static_cast<float>(Sum()));
}

float Actions::CosSum() {
    // TODO: возвращает косинус суммы двух чисел
    return cos(static_cast<float>(Sum()));
}

float Actions::SinDiff() {
    // TODO: возвращает синус разности двух чисел
    return sin(static_cast<float>(Diff()));
}

float Actions::CosDiff() {
    // TODO: возвращает косинус разности двух чисел
    return cos(static_cast<float>(Diff()));
}

int Actions::ProdSumDiff() {
    // TODO: возвращает произведение суммы и разности двух чисел
    return Sum() * Diff();
}

float Actions::DivSumDiff() {
    // TODO: возвращает частное от деления суммы двух чисел на их разность
    return static_cast<float>(Sum()) / static_cast<float>(Diff(true));
}

int Actions::NegateLower() {
    // TODO: меняет знак у меньшего из двух чисел
    return LowerNum() * -1;
}
