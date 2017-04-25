#ifndef APARTAMENTO_H_INCLUDED
#define APARTAMENTO_H_INCLUDED

class Apartamento: public Imovel
{
private:
    std::string posicao;
    double valorDoCondominio;
    int numeroDeVagasNaGaragem;
public:
    std::string getDescricao(){return "Apartamento";}
    std::string getPosicao(){return posicao;}
    double getValorDoCondominio(){return valorDoCondominio;}
    int getNumeroDeVagasNaGaragem(){return numeroDeVagasNaGaragem;}
    void setPosicao(std::string p){posicao = p;}
    void setValorDoCondominio(double vdc){valorDoCondominio = vdc;}
    void setNumeroDeVagasNaGaragem(int ndvng){numeroDeVagasNaGaragem = ndvng;}
};

#endif // APARTAMENTO_H_INCLUDED
