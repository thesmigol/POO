#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

#define MAX 100

class pessoa{
    private:
        string nome;
        string cpf;
        double rendimento;
        int dependentes;
        int codigo;
    public:
    	string getNome();
    	string getcpf();
    	double getRendimento();
    	int    getDependentes();
    	int	   getCodigo();	 
    	
        void ler();
        double IRPF();
};


string pessoa::getNome()                    		{    return nome;       	}
string pessoa::getcpf()                    		    {    return cpf;        	}
double pessoa::getRendimento()						{	return rendimento;		}
int    pessoa::getDependentes()						{	return dependentes;		}
int	   pessoa::getCodigo()							{	return codigo;			}



void pessoa::ler(){
		cin.ignore();
    	getline(cin,nome);
    	getline(cin,cpf);
    	cin >> rendimento;
    	cin >> dependentes;
}

double pessoa::IRPF(){
    if(rendimento <= 1903.98){
        return 0;
    }
    else if(rendimento > 1903.98 && rendimento <= 2826.65){
        return (7.5/100) * rendimento - (200*dependentes);
    }
    else if(rendimento > 2826.65 && rendimento <= 3751.05){
        return (15.0/100) * rendimento - (200*dependentes);
    }
    else if(rendimento > 3751.05 && rendimento <= 4664.68){
        return (22.5/100) * rendimento - (200*dependentes);
    }
    else if(rendimento > 4664.68){
        return (27.5/100) * rendimento - (200*dependentes);
    }

}


class empresa{
    private:
        pessoa vet[MAX] ;
        int qtd ;
        int obterIndice(int cod);
    public:
    	int obterQtd();
    	void inserir(pessoa p); 
        void mostrar();
        empresa();
        
};

int empresa::obterIndice(int cod)
{
   bool achou;
   int i;
   i = 0;
   achou = false;
   while (!achou && i<qtd)
     if (vet[i].getCodigo() == cod)
        achou = true;
     else
        i++;
   return achou?i:-1; 
}

empresa::empresa()
{
	qtd = 0;	
}

int empresa::obterQtd()
{
    return qtd;
}

void empresa::inserir(pessoa p)
{
   vet[qtd] = p;
   qtd++;     
   cin >> qtd;
}

void empresa::mostrar(){
	
	cout << "Quantidade de Clientes: " << qtd << endl;
	
	for(int i=0; i<qtd; i++){
		pessoa p = vet[i];
		
		cout << p.getNome() << endl;
    	cout << p.getcpf() << endl; 
    	cout << p.getRendimento() << endl; 
    	cout << p.getDependentes() << endl;
    	cout << p.IRPF() << endl;
    	
	}
	
}

int main (){
    pessoa p;
    empresa e;
    
    e.inserir(p);
    for(int i=0; i< e.obterQtd(); i++){
    	p.ler();
	}
    e.mostrar();
}
