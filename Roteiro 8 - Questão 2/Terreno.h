#ifndef TERRENO_H_INCLUDED
#define TERRENO_H_INCLUDED

class Terreno: public Imovel
{
private:
    double area;
public:
    std::string getDescricao(){return "Terreno";}
    double getArea(){return area;}
    void setArea(double a){area = a;}
};

#endif // TERRENO_H_INCLUDED
