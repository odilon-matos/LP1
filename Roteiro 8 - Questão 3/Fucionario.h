#ifndef FUCIONARIO_H
#define FUCIONARIO_H
#define SALARIO 937

using namespace std

class Fucionario
{
    private:
    string nome;
    int matricula;

    public:
        Fucionario() { } // construtor

        virtual double calcularSalario() = 0; // metodo abstrato puro

        void setNome(string n)
        {
            nome = n;
        }
        string getNome()
        {
            return nome;
        }
        void setMatricula(int mat)
        {
            matricula = mat;
        }
        int getMatricula()
        {
            return matricula;
        }

};

#endif // FUCIONARIO_H
