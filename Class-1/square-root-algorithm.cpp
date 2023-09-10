#include<iostream>
using namespace std;

float sqrt(float number, float guess = 1.0);
bool good_enough(float, float);
float improve_guess(float, float);

int main()
{
    float input = 36;
    cout << sqrt(input);
}

float abs(float number)
{
    if (number > 0)
        return number;
    else
        return -(number);
}

float sqrt(float number, float guess)
{
    if (good_enough(number, guess))
        return guess;
    else
        return sqrt(number, improve_guess(number, guess));
}

bool good_enough(float number, float guess)
{
    float epsilon = 0.000001;
    float temp = guess * guess - number;
    return abs(temp) < epsilon;
}

float improve_guess(float number, float guess)
{
    return (guess + number / guess) / 2;
}
