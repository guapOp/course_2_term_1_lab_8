#include <gtest/gtest.h>
#include "../actions.h"

TEST(ActionsTest, Sum) {
    Actions action(5, 10);
    EXPECT_EQ(action.Sum(), 15);

    Actions strictAction(0, 0);
    EXPECT_EQ(strictAction.Sum(true), 0); // ошибка
}

TEST(ActionsTest, Diff) {
    Actions action(10, 5);
    EXPECT_EQ(action.Diff(), 5);

    Actions strictAction(5, 5);
    EXPECT_EQ(strictAction.Diff(true), 0); // ошибка
}

TEST(ActionsTest, Mult) {
    Actions action(5, 10);
    EXPECT_EQ(action.Mult(), 50);
}

TEST(ActionsTest, LowerNum) {
    Actions action(5, 10);
    EXPECT_EQ(action.LowerNum(), 5);
}

TEST(ActionsTest, UpperNum) {
    Actions action(5, 10);
    EXPECT_EQ(action.UpperNum(), 10);
}

TEST(ActionsTest, LowerAbsNum) {
    Actions action(-5, 10);
    EXPECT_EQ(action.LowerAbsNum(), 5);
}

TEST(ActionsTest, UpperAbsNum) {
    Actions action(-5, 10);
    EXPECT_EQ(action.UpperAbsNum(), 10);
}

TEST(ActionsTest, SumSquare) {
    Actions action(3, 4);
    EXPECT_EQ(action.SumSquare(), 25); // 3^2 + 4^2 = 9 + 16
}

TEST(ActionsTest, HalfSum) {
    Actions action(5, 7);
    EXPECT_FLOAT_EQ(action.HalfSum(), 6.0);
}

TEST(ActionsTest, HalfDiff) {
    Actions action(10, 4);
    EXPECT_FLOAT_EQ(action.HalfDiff(), 3.0);
}

TEST(ActionsTest, MinSquare) {
    Actions action(3, 5);
    EXPECT_EQ(action.MinSquare(), 9); // 3^2
}

TEST(ActionsTest, MinCube) {
    Actions action(2, 4);
    EXPECT_EQ(action.MinCube(), 8); // 2^3
}

TEST(ActionsTest, MaxSquare) {
    Actions action(3, 5);
    EXPECT_EQ(action.MaxSquare(), 25); // 5^2
}

TEST(ActionsTest, MaxCube) {
    Actions action(2, 4);
    EXPECT_EQ(action.MaxCube(), 64); // 4^3
}

TEST(ActionsTest, SqrtSum) {
    Actions action(3, 4);
    EXPECT_FLOAT_EQ(action.SqrtSum(), 2.6457512); // sqrt(7)
}

TEST(ActionsTest, SqrtMax) {
    Actions action(3, 4);
    EXPECT_FLOAT_EQ(action.SqrtMax(), 2.0); // sqrt(4)
}

TEST(ActionsTest, SqrtMin) {
    Actions action(3, 4);
    EXPECT_NEAR(action.SqrtMin(), 1.73205, 1e-5); // sqrt(3)
}

TEST(ActionsTest, TripleProdSum) {
    Actions action(3, 4);
    EXPECT_EQ(action.TripleProdSum(), 21); // (3 + 4) * 3
}

TEST(ActionsTest, DoubleProdDiff) {
    Actions action(10, 3);
    EXPECT_EQ(action.DoubleProdDiff(), 14); // (10 - 3) * 2
}

TEST(ActionsTest, SinSum) {
    Actions action(0, 3);
    EXPECT_FLOAT_EQ(action.SinSum(), sin(3));
}

TEST(ActionsTest, CosSum) {
    Actions action(0, 3);
    EXPECT_FLOAT_EQ(action.CosSum(), cos(3));
}

TEST(ActionsTest, SinDiff) {
    Actions action(3, 1);
    EXPECT_FLOAT_EQ(action.SinDiff(), sin(2));
}

TEST(ActionsTest, CosDiff) {
    Actions action(3, 1);
    EXPECT_FLOAT_EQ(action.CosDiff(), cos(2));
}

TEST(ActionsTest, ProdSumDiff) {
    Actions action(5, 2);
    EXPECT_EQ(action.ProdSumDiff(), 21); // (5 + 2) * (5 - 2)
}

TEST(ActionsTest, DivSumDiff) {
    Actions action(10, 5);
    EXPECT_FLOAT_EQ(action.DivSumDiff(), 3.0); // (10 + 5) / (10 - 5)
}

TEST(ActionsTest, NegateLower) {
    Actions action(5, 10);
    EXPECT_EQ(action.NegateLower(), -5);
}

