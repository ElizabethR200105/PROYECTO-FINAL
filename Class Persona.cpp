#include <iostream>
using namespace std;

class Persona {
    private:
    string nombre;
    string apellido;
    public: 
    Persona(string _nombre="",string _apellido=""){
        nombre = _nombre;
        apellido = _apellido;
    }
    string getNombre()
    {
        return nombre;
    }

    void setNombre(string _nombre)
    {
        nombre = _nombre;
    }

    string getApellido()
    {
        return apellido;
    }

    void setApellido(string _apellido)
    {
        apellido = _apellido;
    }

};