#ifndef GEOMETRIA_H
#define GEOMETRIA_H

namespace Geometria {

    class Circulo {
    private:
        float radio;

    public:
        // Constructor
        Circulo(float r);

        // Métodos para calcular área y perímetro
        void calcularArea() const;
        void calcularPerimetro() const;
    };

    float calcularAreaTriangulo(float base, float altura);
    float calcularAreaCirculo(float radio);
}

#endif //GEOMETRIA_H
