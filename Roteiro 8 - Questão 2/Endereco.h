#ifndef ENDERECO_H_INCLUDED
#define ENDERECO_H_INCLUDED

class Endereco
{
private:
    std::string logradouro;
    std::string bairro;
    int numero;
    std::string cidade;
    std::string cep;
public:
    std::string getLogradouro(){return logradouro;}
    std::string getBairro(){return bairro;}
    int getNumero(){return numero;}
    std::string getCidade(){return cidade;}
    std::string getCep(){return cep;}
    void setLogradouro(std::string l){logradouro = l;}
    void setBairro(std::string b){bairro = b;}
    void setNumero(int n){numero = n;}
    void setCidade(std::string c){cidade = c;}
    void setCep(std::string cp){cep = cp;}
};

#endif // ENDERECO_H_INCLUDED
