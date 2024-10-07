#include <iostream> 
#include <gtest/gtest.h>
#include <cmath> 

 

typedef double (*Func)(double); 
 
double f_square(double x) { 
    return x * x; 
} 
 
double f_sin(double x) { 
    return sin(x); 
} 
 
double f_cos(double x) { 
    return cos(x); 
} 
 
// Функция для вычисления второй производной с заданной точностью 
double second_derivative(Func func, double x, double eps) { 
    double h = 1.0; // Начальный шаг 
    double derivative_prev; // Предыдущее значение второй производной 
    double derivative_curr = (func(x - h) - 2 * func(x) + func(x + h)) / (h * h); // Начальное значение 
 
    // Понижаем h пока не достигнем желаемой точности 
    do { 
        h /= 2.0; // Уменьшаем шаг вдвое 
        derivative_prev = derivative_curr; 
        derivative_curr = (func(x - h) - 2 * func(x) + func(x + h)) / (h * h); // Пересчитываем вторую производную 
    } while (fabs(derivative_curr - derivative_prev) > eps); // Проверяем, достигли ли нужной точности 
 
    return derivative_curr; // Возвращаем окончательное значение второй производной 
} 

TEST(HelloTest, BasicAssertions) {
  // Expect two strings not to be equal.
//   EXPECT_STRNE("hello", "world");
	EXPECT_TRUE(second_derivative(f_sin, 0, 0.001) + f_sin(0) < 0.001);
	
	EXPECT_EQ(second_derivative(f_square, 1, 0.01), 2);

}