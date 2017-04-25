#include <iostream>
#include <cstring>
#include "Imovel.h"
#include "Terreno.h"
#include "Casa.h"
#include "Apartamento.h"

int main()
{
    double a, adt, ac, vdc;
    int ndp, qdq, ndvng;
    std::string p;
    Casa casa0, casa1;
    Terreno terreno0, terreno1;
    Apartamento apartamento0;
    casa0.setEndereco();
    std::cout << "Casa 0 - Pavimentos: ";
    std::cin >> ndp;
    casa0.setNumeroDePavimentos(ndp);
    std::cout << "Casa 0 - Quartos: ";
    std::cin >> qdq;
    casa0.setQuantidadeDeQuartos(qdq);
    std::cout << "Casa 0 - Area do Terreno: ";
    std::cin >> adt;
    casa0.setAreaDoTerreno(adt);
    std::cout << "Casa 0 - Area Construida: ";
    std::cin >> ac;
    casa0.setAreaConstruida(ac);
    casa1.setEndereco();
    std::cout << "Casa 1 - Pavimentos: ";
    std::cin >> ndp;
    casa1.setNumeroDePavimentos(ndp);
    std::cout << "Casa 1 - Quartos: ";
    std::cin >> qdq;
    casa1.setQuantidadeDeQuartos(qdq);
    std::cout << "Casa 1 - Area do Terreno: ";
    std::cin >> adt;
    casa1.setAreaDoTerreno(adt);
    std::cout << "Casa 1 - Area Construida: ";
    std::cin >> ac;
    casa1.setAreaConstruida(ac);
    terreno0.setEndereco();
    std::cout << "Terreno 0 - Area: ";
    std::cin >> a;
    terreno0.setArea(a);
    terreno1.setEndereco();
    std::cout << "Terreno 1 - Area: ";
    std::cin >> a;
    terreno1.setArea(a);
    apartamento0.setEndereco();
    std::cout << "Apartamento 0 - Posicao: ";
    std::cin >> p;
    apartamento0.setPosicao(p);
    std::cout << "Apartamento 0 - Condominio: R$";
    std::cin >> vdc;
    apartamento0.setValorDoCondominio(vdc);
    std::cout << "Apartamento 0 - Vagas na Garagem: ";
    std::cin >> ndvng;
    apartamento0.setNumeroDeVagasNaGaragem(ndvng);
    Imovel * imoveis[5];
    imoveis[0] = &casa0;
    imoveis[1] = &casa1;
    imoveis[2] = &terreno0;
    imoveis[3] = &terreno1;
    imoveis[4] = &apartamento0;
    for(int i = 0;i < 5;i++){
        std::cout << "Descricao: " << imoveis[i]->getDescricao() << std::endl;
        std::cout << "Endereco: ";
        imoveis[i]->getEndereco();
        const char * d = imoveis[i]->getDescricao().c_str();
        if(strcmp(d,"Terreno")==0){
            std::cout << "Area: " << imoveis[i]->getArea() << std::endl;
        }
        if(strcmp(d,"Casa")==0){
            std::cout << "Numero de Pavimentos: " << imoveis[i]->getNumeroDePavimentos() << std::endl;
            std::cout << "Quantidade de Quartos: " << imoveis[i]->getQuantidadeDeQuartos() << std::endl;
            std::cout << "Area do Terreno: " << imoveis[i]->getAreaDoTerreno() << std::endl;
            std::cout << "Area Construida: " << imoveis[i]->getAreaConstruida() << std::endl;
        }
        if(strcmp(d,"Apartamento")==0){
            std::cout << "Posicao: " << imoveis[i]->getPosicao() << std::endl;
            std::cout << "Valor do Condominio: R$" << imoveis[i]->getValorDoCondominio() << std::endl;
            std::cout << "Numero de Vagas na Garagem: " << imoveis[i]->getNumeroDeVagasNaGaragem() << std::endl;
        }
    }
    return 0;
}
