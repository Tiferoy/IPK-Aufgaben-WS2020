#include <iostream>
#include <cmath>

double root_iterative(double q, int n, int steps){   
    
    if (q > 0){ 
        double number = 1;      
        for (int i = 0; i < steps; i++){
            number = number + pow(n,-1) * (q/(std::pow(number, n-1)) - number); 
            std::cout << number << std::endl;
        }
        std::cout << "Absoluter Fehler = " << std::pow(number, n) - q << std::endl;
        return number;
    }
    else if (q == 0){
        return 0;
    }
    else {
        std::cout << "??? ... Error, da Wurzeleintrag negativ." << std::endl;
        return 0;
    }
}



int main(int argc, char** argv){
    double q;
    std::cout << "Es soll schrittweise (als Näherung) die n-te Wurzel von q berrechnet werden." << std::endl;
    std::cout << "Gib ein q an: ";
    std:: cin >> q;
    std::cout << "Gib ein n an: ";
    int n;
    std:: cin >> n;
    std::cout << "Gib die Anzahl der steps an: ";
    int steps;
    std::cin >> steps;
    std::cout << root_iterative(q, n, steps) << std::endl; 
}
