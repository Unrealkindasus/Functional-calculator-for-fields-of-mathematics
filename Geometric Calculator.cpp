#include <iostream>
#include <cmath>

// Function to calculate the area of a circle
double berechneKreisBereich(double radius) {
    return M_PI * radius * radius;
}

// Function to calculate the circumference of a circle
double berechneKreisUmfang(double radius) {
    return 2 * M_PI * radius;
}

// Function to calculate the area of a rectangle
double berechneRechteckBereich(double laenge, double breite) {
    return laenge * breite;
}

// Function to calculate the perimeter of a rectangle
double berechneRechteckUmfang(double laenge, double breite) {
    return 2 * (laenge + breite);
}

// Function to calculate the area of a square
double berechneQuadratBereich(double seite) {
    return seite * seite;
}

// Function to calculate the perimeter of a square
double berechneQuadratUmfang(double seite) {
    return 4 * seite;
}

// Add more shape functions here...

int main() {
    int formwahl;
    std::cout << "Bitte wählen Sie eine Form aus:\n";
    std::cout << "1. Kreis\n";
    std::cout << "2. Rechteck\n";
    std::cout << "3. Quadrat\n";
    // Add more shape options here...
    std::cin >> formwahl;

    int berechnungswahl;
    std::cout << "Bitte wählen Sie eine Berechnung aus:\n";
    std::cout << "1. Fläche\n";
    std::cout << "2. Umfang\n";
    // Add more calculation options here...
    std::cin >> berechnungswahl;

    double ergebnis = 0.0;

    if (formwahl == 1) {
        double radius;
        std::cout << "Bitte geben Sie den Radius des Kreises ein: ";
        std::cin >> radius;

        if (berechnungswahl == 1) {
            ergebnis = berechneKreisBereich(radius);
        }
        else if (berechnungswahl == 2) {
            ergebnis = berechneKreisUmfang(radius);
        }
    }
    else if (formwahl == 2) {
        double laenge, breite;
        std::cout << "Bitte geben Sie die Länge des Rechtecks ein: ";
        std::cin >> laenge;
        std::cout << "Bitte geben Sie die Breite des Rechtecks ein: ";
        std::cin >> breite;

        if (berechnungswahl == 1) {
            ergebnis = berechneRechteckBereich(laenge, breite);
        }
        else if (berechnungswahl == 2) {
            ergebnis = berechneRechteckUmfang(laenge, breite);
        }
    }
    else if (formwahl == 3) {
        double seite;
        std::cout << "Bitte geben Sie die Seitenlänge des Quadrats ein: ";
        std::cin >> seite;

        if (berechnungswahl == 1) {
            ergebnis = berechneQuadratBereich(seite);
        }
        else if (berechnungswahl == 2) {
            ergebnis = berechneQuadratUmfang(seite);
        }
    }
    // Add more shape calculations here...

    // Print the result
    std::cout << "Das Ergebnis beträgt: " << ergebnis << std::endl;

    return 0;
}