#include <iostream>
#include <string>

using namespace std;


class Pruebas
{

    // declaraciones de elementos privados

    private:

        string nombre;
        string apellidos;
        int edad;
    
    // declaraciones de elementos públicos

    public:
        
        // métodos Getters
        string getNombre ();
        string getApellidos();
        int getEdad ();
        // métodos Setters
        void setNombre (string nombre);
        void setApellidos (string apellidos);
        void setEdad (int edad);
        Pruebas(string nom, string ape, int ed);
};

/* A partir de aquí, fuera de la definición de la clase se desarrolla el constructor y métodos.
siempre referenciando el ámbito de la clase a través de los ::. ES como se le dijeras: esto se refiere a la clase.
*/

// forma 1 de poner constructores

   /*
    Pruebas::Pruebas (string nom, string ape, int ed)
    {
        this->nombre = nom;
        this->apellidos = ape;
        this->edad=ed;
    }
*/


//forma 2 de hacer constructores

    Pruebas::Pruebas (string nom, string ape, int ed):nombre(nom), apellidos(ape), edad(ed){};


// Desarrollo de los métodos setter

void Pruebas::setNombre(string n)
{
    this->nombre = n;
    
}

void Pruebas::setApellidos (string ape)
{
    this->apellidos = ape;
}

void Pruebas::setEdad (int ed)
{
    this->edad = ed;
}

// Desarrollo de los métodos Getter.

string Pruebas::getNombre()
{
    return this->nombre;
}

string Pruebas::getApellidos()
{
    return this->apellidos;
}


int Pruebas::getEdad()
{
    return this->edad;
}

int main ()
{
    
    string nomb;
    string ape;
    int edad;

    Pruebas colega (nomb,ape,edad);
    
   
    cout << "Introduce el nombre\n"; 
    cin >> nomb; 
    cout << "Introduce los apellidos\n";
    cin >> ape;
    cout << "Introduce la edad\n";
    cin >> edad;    
    
    colega.setNombre(nomb);
    colega.setApellidos(ape);
    colega.setEdad(edad);
    
    cout << "el resultado es: " << colega.getNombre() << colega.getApellidos() << colega.getEdad() << endl;
    return 0;

}


