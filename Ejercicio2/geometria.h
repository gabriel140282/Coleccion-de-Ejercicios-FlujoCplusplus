#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {

    class Circulo {
    private:
        double radio;

    public:
        // Constructor
        Circulo(double r);

        // Métodos para calcular área y perímetro
        double calcularArea() const;
        double calcularPerimetro() const;
    };

    float calcularAreaTriangulo(float base, float altura);
    float calcularAreaCirculo(float radio);
}

#endif //GEOMETRIA_H
