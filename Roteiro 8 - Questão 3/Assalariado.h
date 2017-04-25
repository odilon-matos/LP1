#ifndef ASSALARIADO_H
#define ASSALARIADO_H
#define SALARIO 937

using namespace std

class Assalariado : public Fucionario
{
    private:
        double SALARIO;

    public:
        Assalariado();

        double calcularSalario()
        {
            return SALARIO;
        }


};

#endif // ASSALARIADO_H
