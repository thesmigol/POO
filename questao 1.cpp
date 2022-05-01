#include <iostream>
#include <iomanip>
#include <string>
#include <conio.h>

using namespace std;

class PessoaFisica{
    private:
        string nome;
        string cpf;
        double tRndAn;
        int dependentes;

    public:
        void entrada();
        double ImpostoEhRoubo();
        string getNome();
        string getCpf();
        double getRnd();
        int getdep();
};

    string PessoaFisica::getNome(){return nome;}
    string PessoaFisica::getCpf(){return cpf;};
    double PessoaFisica::getRnd(){return tRndAn;}
    int PessoaFisica::getdep(){return dependentes;}

    void PessoaFisica::entrada(){
        //cin >> nome;
        //cin >> cpf;
        cin >> tRndAn;
        cin >> dependentes;
    };

    double PessoaFisica::ImpostoEhRoubo(){
        double mensal = (tRndAn/12);
        if (tRndAn <= 1903.98){
            return 0;
        }
        else if (1903,99 <= mensal <= 2826,65){
           return ((75/100)*mensal) + (dependentes*200);
       }
       else if (2826,66 <= mensal <= 3751,05){
           return ((15/100)*mensal) + (dependentes*200);
       }
        else if (3751,06 <= mensal <= 4664,68){
           return ((22.5/100)*mensal) + (dependentes*200);
       }
        else if (mensal > 4664,68){
           return ((27.5/100)*mensal) + (dependentes*200);
       } 
    }

int main(void){
    PessoaFisica user;
    user.entrada();
    cout << user.ImpostoEhRoubo() << endl;
    return 0;
}