#ifndef IMOVEL_H_INCLUDED
#define IMOVEL_H_INCLUDED

#include "Endereco.h"

class Imovel
{
private:
    Endereco local;
public:
    void setEndereco()
    {
        std::string l, b, c, cp;
        int n;
        std::cout << "Logradouro: ";
        std::cin >> l;
        local.setLogradouro(l);
        std::cout << "Bairro: ";
        std::cin >> b;
        local.setBairro(b);
        std::cout << "Numero: ";
        std::cin >> n;
        local.setNumero(n);
        std::cout << "Cidade: ";
        std::cin >> c;
        local.setCidade(c);
        std::cout << "Cep: ";
        std::cin >> cp;
        local.setCep(cp);
    }
    Endereco getEndereco()
    {
        //std::cout << local.getLogradouro() << ", " << local.getBairro() << ", " << local.getNumero() << ", " << local.getCidade() << ", " << local.getCep() << std::endl;
        return local;
    }
    virtual std::string getDescricao() = 0;
};

#endif // IMOVEL_H_INCLUDED
