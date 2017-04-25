#ifndef HORISTA_H
#define HORISTA_H
#define SALARIO 937
#define SALARIOPORHORA 25.00
class Horista : public Fucionario

{
    private:

        double horasTrabalhadas;

    public:
        Horista();

        double calcularSalario()
        {
            return SALARIO + (1.5 * horasTrabalhadas * SALARIOPORHORA);
        }

        void setHorasTrabalhadas(double horas)
        {
            horasTrabalhadas = horas;
        }


};

#endif // HORISTA_H
