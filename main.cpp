#include <iostream>

int main(){

    std::string resposta = "Leonardo";
    std::cout << "Qual nome eh a resposta? " << std::endl;
    std::string responda;
    std::getline(std::cin, responda);

    if (!responda.empty() && responda != resposta)
    {
        std::cout << "Voce errou, a resposta correta eh: "  << resposta << std::endl;
        return false;
    }
    else{
        std::cout << "Voce acertou, a resposta correra era: " << resposta << std::endl;
    }
}