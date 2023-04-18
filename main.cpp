#include <iostream>

using namespace std;

class Personagem{
    public:
        Personagem(string nome, int tipo){
            this->nome = nome;
            this->tipo = tipo;
            skillGenerator();
        }

        void setNome(string nome){
            this->nome = nome;
        }
        string getNome(){
            return nome;
        }


        void setTipo(int tipo){
            this->tipo = tipo;
        }
        int getTipo(){
            return tipo;
        }


        void setResistencia(float resistencia){
            this->resistencia = resistencia;
        }
        float getResistencia(){
            return resistencia;
        }


        void setAtaque(float ataque){
            this->ataque = ataque;
        }
        float getAtaque(){
            return ataque;
        }


        void setDef(float def){
            this->def = def;
        }
        float getDef(){
            return def;
        }


        void setMagia(float magia){
            this->magia = magia;
        }
        float getMagia(){
            return magia;
        }

        void setAgilidade(float agilidade){
            this->agilidade = agilidade;
        }
        float getAgilidade(){
            return agilidade;
        }


        void skillGenerator(){
            int maximo = 40;
            while(true){
                ataque = (rand()%20)+1;
                def = (rand()%20)+1;
                magia = (rand()%20)+1;
                agilidade = (rand()%20)+1;
                if((ataque + def + magia + agilidade) == 40){
                    break;
                }
            }
            resistencia = 10+(rand()%20);
        }


    private:
        string nome;
        int tipo;
        float resistencia, ataque, def, magia, agilidade;
};

bool validarClasse(int classe){
    if(classe == 1 || classe == 2 || classe == 3){
        return true;
    }
    return false;
}

string returnClasse(int classe){
        if(classe == 1){
            return "Guerreiro";
        }else if(classe == 2){
            return "Mago";
        }else if(classe == 3){
            return "Arqueiro";
        }
}

int main()
{   srand(time(NULL));
    const int GUERREIRO = 1;
    const int MAGO = 2;
    const int ARQUEIRO = 3;
    string nome1, nome2;
    int tipo1, tipo2;

    cout << "Digite o nome do personagem: ";
    cin >> nome1;
    do{
        cout << "\nEscolha a classe do personagem: \n[1]Guerreiro [2]Mago [3]Arqueiro\n";
        cin >> tipo1;
    }while(!validarClasse(tipo1));

    Personagem p1(nome1, tipo1);

    cout << "Digite o nome do segundo personagem: ";
    cin >> nome2;
    do{
        cout << "\nEscolha a classe do personagem: \n[1]Guerreiro [2]Mago [3]Arqueiro\n";
        cin >> tipo2;
    }while(!validarClasse(tipo2));
    Personagem p2(nome2, tipo2);


    cout << "P1 tem nome, tipo, resistencia, ataque, defesa, magia, agilidade respectivamentes:\n" << p1.getNome() << "/" << returnClasse(p1.getTipo()) << "/" << p1.getResistencia() << "/" << p1.getAtaque() << "/" << p1.getDef() << "/" << p1.getMagia() << "/" << p1.getAgilidade();
    cout << "\nP2 tem nome, tipo, resistencia, ataque, defesa, magia, agilidade respectivamentes:\n" << p2.getNome() << "/" << returnClasse(p2.getTipo()) << "/" << p2.getResistencia() << "/" << p2.getAtaque() << "/" << p2.getDef() << "/" << p2.getMagia() << "/" << p2.getAgilidade();





}
