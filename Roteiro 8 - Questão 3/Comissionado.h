#ifndef COMISSIONADO_H
#define COMISSIONADO_H
#define SALARIO 937

class Comissionado : public Fucionario
{
    private:
        double vendasSemanais;
        double percentualComissao;

    public:
        Comissionado();

        double calcularSalario()
        {
            return SALARIO + (vendasSemanais * percentualComissao);
        }

        void setVendasSemanais(double vendas)
        {
            vendasSemanais = vendas;
        }
        void setPercentualComissao(double comissao)
        {
            percentualComissao = comissao;
        }


};

#endif // COMISSIONADO_H
