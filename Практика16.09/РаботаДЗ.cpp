#include <iostream>

int main() {
    int a = 5;
    int b = 10;
    int c = 15;
    int d = 20;
    int e = 25;

    std::cout << "Arifmeticheskie operacii:" << std::endl;

    std::cout << (a + b == 15) << " (5 + 10 == 15)" << std::endl; // true
    std::cout << (c - b == 5) << " (15 - 10 == 5)" << std::endl; // true
    std::cout << (d - a == 15) << " (20 - 5 == 15)" << std::endl; // true

    std::cout << (a * 2 == 10) << " (5 * 2 == 10)" << std::endl; // true
    std::cout << (b * 1 == 10) << " (10 * 1 == 10)" << std::endl; // true
    std::cout << (c / 3 == 5) << " (15 / 3 == 5)" << std::endl; // true

    std::cout << (d / 2 == 10) << " (20 / 2 == 10)" << std::endl; // true
    std::cout << (e / 5 == 5) << " (25 / 5 == 5)" << std::endl; // true
    std::cout << (c / 1 == 15) << " (15 / 1 == 15)" << std::endl; // true

    std::cout << (d % 3 == 2) << " (20 % 3 == 2)" << std::endl; // true
    std::cout << (e % 6 == 1) << " (25 % 6 == 1)" << std::endl; // true
    std::cout << (b % 2 == 0) << " (10 % 2 == 0)" << std::endl; // true

    std::cout << "\nLogicheskie operacii:" << std::endl;

    std::cout << ((a < b) && (b < c)) << " ((5 < 10) && (10 < 15))" << std::endl; // true
    std::cout << ((e > d) && (d > c)) << " ((25 > 20) && (20 > 15))" << std::endl; // true
    std::cout << ((a + b == 15) && (c - d == -5)) << " ((5 + 10 == 15) && (15 - 20 == -5))" << std::endl; // true

    std::cout << ((a < c) || (b > e)) << " ((5 < 15) || (10 > 25))" << std::endl; // true
    std::cout << ((d < e) || (c < b)) << " ((20 < 25) || (15 < 10))" << std::endl; // true
    std::cout << ((c == 15) || (a == 10)) << " ((15 == 15) || (5 == 10))" << std::endl; // true

    std::cout << (!((a == 10))) << " (!(5 == 10))" << std::endl; // true
    std::cout << (!((b == 10))) << " (!(10 == 10))" << std::endl; // true
    std::cout << (!((e < d))) << " (!(25 < 20))" << std::endl; // true

    std::cout << "\nOperaciya sravneniya:" << std::endl;

    std::cout << (a == 5) << " (5 == 5)" << std::endl; // true
    std::cout << (b == 10) << " (10 == 10)" << std::endl; // true
    std::cout << (c == 15) << " (15 == 15)" << std::endl; // true

    std::cout << (d != 15) << " (20 != 15)" << std::endl; // true
    std::cout << (e != 10) << " (25 != 10)" << std::endl; // true
    std::cout << (a != 1) << " (5 != 1)" << std::endl; // true

    std::cout << (a < b) << " (5 < 10)" << std::endl; // true
    std::cout << (d > c) << " (20 > 15)" << std::endl; // true
    std::cout << (e > b) << " (25 > 10)" << std::endl; // true

    std::cout << (a <= 5) << " (5 <= 5)" << std::endl; // true
    std::cout << (b >= 10) << " (10 >= 10)" << std::endl; // true
    std::cout << (c <= 15) << " (15 <= 15)" << std::endl; // true

    // Logicheskoe ILI (OR)
    std::cout << ((a < c) || (b > e)) << " ((5 < 15) || (10 > 25))" << std::endl; // true
    std::cout << ((d < e) || (a == c)) << " ((20 < 25) || (5 == 15))" << std::endl; // true
    std::cout << ((b > a) || (c < d)) << " ((10 > 5) || (15 < 20))" << std::endl; // true

    // Logicheskoe NOT
    std::cout << (!(a > b)) << " (!(5 > 10))" << std::endl; // true
    std::cout << (!(c == d)) << " (!(15 == 20))" << std::endl; // true
    std::cout << (!(e < d)) << " (!(25 < 20))" << std::endl; // true

    // Sravneniya
    std::cout << "\nSravneniya:" << std::endl;

    std::cout << (a == 5) << " (5 == 5)" << std::endl; // true
    std::cout << (b != 20) << " (10 != 20)" << std::endl; // true
    std::cout << (c <= 15) << " (15 <= 15)" << std::endl; // true
    std::cout << (d >= 20) << " (20 >= 20)" << std::endl; // true

    // Smeshanie operatsii
    std::cout << "\nSmeshanie operatsii:" << std::endl;

    std::cout << (((a + b) == 15) && (d > c)) << " (((5 + 10) == 15) && (20 > 15))" << std::endl; // true
    std::cout << (((c / 5) * 3) == 9) << " (((15 / 5) * 3) == 9)" << std::endl; // true
    std::cout << ((e - a + b) >= 20) << " ((25 - 5 + 10) >= 20)" << std::endl; // true

    // Uvelicheniye i umenshenie
    std::cout << "\nUvelicheniye i umenshenie:" << std::endl;

    a++;
    std::cout << (a == 6) << " (a++ dolzhno byt 6)" << std::endl; // true
    b--;
    std::cout << (b == 9) << " (b-- dolzhno byt 9)" << std::endl; // true

    // Ispolzuyushchye druie peremennye
    int f = 30;
    int g = 10;

    std::cout << "\nIspolzuyushchye druie peremennye:" << std::endl;
    std::cout << (f / g == 3) << " (30 / 10 == 3)" << std::endl; // true
    std::cout << (f % g == 0) << " (30 % 10 == 0)";

    return 0;
}