#include <iostream>

namespace power{
    int iterative(int q, int n){
        
        if (n < 0){
            std::cout << "? ...5 Fehlermeldung, da negativer Exponent." << std::endl;
            return 0;
        }
        else if (n > 0){
            int number = 1;    
            for (int i = 1; i <= n; i++){
                number = number * q;
            }    
            return number;
        }
        else{  
            return 1;
        }      
    }

    int recursive(int q, int n){
        if (n < 0){
            std::cout << "? ...5 Fehlermeldung, da negativer Exponent." << std::endl;
            return 0;
        }
        if (n != 0){
            return q * recursive(q, n - 1);
        }
        else{
            return 1;
        }
    }


    int recursiveVerbessert(int q, int n){
        if (n < 0){
            std::cout << "? ...5 Fehlermeldung, da negativer Exponent." << std::endl;
            return 0;
        }
        if (n != 0){
            if (n % 2 == 0){
                return recursive(q, n/2) * recursive(q, n/2);
            }
            else{
                return q * recursive(q, n - 1);
            }
        }
        else{
            return 1;
        }
    }
}





int main(int argc, char** argv){
    std::cout << "Es soll q^n berrechnet werden. " << std::endl;
    std::cout << "Gib ein q an: " ;
    int q;
    std::cin >> q;
    std::cout << "Gib ein n an: ";
    int n;
    std::cin >> n;
    std::cout << "q^n = " << power::iterative(q,n) << "   (rekursiv)"<< std::endl;
    std::cout << "q^n = " << power::recursive(q,n) << "   (iterativ)"<<std::endl;
    std::cout << "q^n = " << power::recursiveVerbessert(q,n) << "   (rekursiv verbessert)"<<std::endl;
}