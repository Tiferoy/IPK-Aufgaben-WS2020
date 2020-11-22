#include <iostream>

void collatz(int number){
    while(true){       
        if(number % 2 == 0){
            number = number/2;
            std::cout << number << std::endl;
            if(number == 1 || number == 0 || number == -1 ||number == -5 ||number == -17){
                break;
            }
         }
        else{
            number = number*3 +1; 
            std::cout << number << std::endl;
            if(number == 1 || number == 0 || number == -1 ||number == -5 ||number == -17){
                break;
            }
        }
    }  
    std::cout << "letzte Zahl: " << number << std::endl;
}

int main(int argc, char** argv){
    int number;
    std::cout << "Gebe eine beliebige ganze Zahl ein: " << std::flush;
    std::cin >> number;
    collatz(number);
    std::cout << "Die Zahl 1 kann nur erreicht werden von positiven ganzen Startzahlen." << std::endl;
    std::cout << "Die Zahl 0 kann nur durch die Startzahl 0 erreicht werden. Das liegt daran, dass alle anderen (zumindest positiven Zahlen) ein 421421421-Loop durchlaufen, das ohne einen Abbruch unendlich lange weiter laufen würde." << std::endl;
    std::cout << "für negative Startzahlen gilt, dass sie entweder -5 oder -17 erreichen und lediglich die -1 die -1 erreicht." << std::endl;
}