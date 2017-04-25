#ifndef CASA_H_INCLUDED
#define CASA_H_INCLUDED

class Casa: public Imovel
{
private:
    int numeroDePavimentos;
    int quantidadeDeQuartos;
    double areaDoTerreno;
    double areaConstruida;
public:
    std::string getDescricao(){return "Casa";}
    int getNumeroDePavimentos(){return numeroDePavimentos;}
    int getQuantidadeDeQuartos(){return quantidadeDeQuartos;}
    double getAreaDoTerreno(){return areaDoTerreno;}
    double getAreaConstruida(){return areaConstruida;}
    void setNumeroDePavimentos(int ndp){numeroDePavimentos = ndp;}
    void setQuantidadeDeQuartos(int qdq){quantidadeDeQuartos = qdq;}
    void setAreaDoTerreno(double adt){areaDoTerreno = adt;}
    void setAreaConstruida(double ac){areaConstruida = ac;}
};

#endif // CASA_H_INCLUDED
