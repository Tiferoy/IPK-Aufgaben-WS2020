#include <iostream>

unsigned int fibonacci(int N){
    unsigned int n;
    unsigned int n1;
    unsigned int n2;
    n2 = 0;
    n1 = 1;

    for(int i = 3; i <= N; i++){
        n = n1 + n2;
        n2 = n1;
        n1 = n;
    }
    return n;
}

int main(int argc, char** argv){
    int N;
    std::cout << "Gib eine beliebige ganze Zahl N ein: " << std::flush;
    std::cin >> N;
    std::cout << "Die " << N << "-te Fibonaccizahl lautet: " << fibonacci(N) << std::endl;
}

