// Temperaturile Orasului V1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    // Declara si intializeaza un array cu temperaturile medii zilnice
    double temperatures[] = { 11.1, 13.6, 16.3, 19.8, 20.5, 21.9, 23.1 };

    // Calculeaza suma temperaturilor pentru saptamana
    double weeklyTotal = 0;
    for (double temp : temperatures) {
        weeklyTotal += temp;
    }

    // Calculeaza media temperaturilor pentru saptamanala
    double weeklyAverage = weeklyTotal / 7.0;

    // Rotunjim media la doua zecimale
    weeklyAverage = static_cast<int>(weeklyAverage * 100 + 0.5) / 100.0;

    // Afiseaza temperatura medie saptamanala
    std::cout << "Temperatura medie saptamanala este: " << weeklyAverage << " grade Celsius." << std::endl;

    return 0;
}