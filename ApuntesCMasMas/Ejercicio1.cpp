#include "Ejercicio1.h"

#include <iostream>

/*int main()
{
    float dinero = 200;

    Producto dedeador;
    dedeador.nombre = "Dedeador";
    dedeador.priceCompra = 80;
    dedeador.priceVenta = 50;
    dedeador.cantidad = 5;

    Producto consolador;
    consolador.nombre = "Consolador";
    consolador.priceCompra = 50;
    consolador.priceVenta = 30;
    consolador.cantidad = 3;

    Producto aniquilador;
    aniquilador.nombre = "Aniquilador";
    aniquilador.priceCompra = 100;
    aniquilador.priceVenta = 80;
    aniquilador.cantidad = 1;

    Producto miLibroFeminista;
    miLibroFeminista.nombre = "Libro de Literatura Feminista";
    miLibroFeminista.priceCompra = 100;
    miLibroFeminista.priceVenta = 60;
    miLibroFeminista.cantidad = 0;

    Producto miMango;
    miMango.nombre = "Mango";
    miMango.priceCompra = 30;
    miMango.priceVenta = 10;
    miMango.cantidad = 2;

    Producto misHeces;
    misHeces.nombre = "Heces";
    misHeces.priceCompra = 40;
    misHeces.priceVenta = 15;
    misHeces.cantidad = 0;

    std::vector<Producto> productosTienda;
    productosTienda.push_back(dedeador);
    productosTienda.push_back(consolador);
    productosTienda.push_back(aniquilador);

    std::vector<Producto> productosUsuario;
    productosUsuario.push_back(miMango);
    productosUsuario.push_back(misHeces);
    productosUsuario.push_back(miLibroFeminista);

    char opcion = 'x';

    while (opcion != 'S')
    {
        std::cout << std::endl;
        std::cout << "Tu dinero: " << dinero << std::endl;
        std::cout << std::endl;
        std::cout << "Vendedor ambulante - Buenas caballero, quiere comprarme (C) algun objeto, venderme (V) algo que usted posee o irse (S)? ¿Que elige?" << std::endl;
        std::cin >> opcion;

        while (opcion != 'C' && opcion != 'V' && opcion != 'S')
        {
            std::cout << "Vendedor - Disculpa, ¿puede repetir?" << std::endl;
            std::cin >> opcion;
        }

        if (opcion == 'C')
        {
            std::cout << "--- Tienda ---" << std::endl;

            for (int i = 0; i < productosTienda.size(); i++)
            {
                std::cout << i + 1 << ". " << productosTienda[i].nombre << " | Compra: " << productosTienda[i].priceCompra << " | Venta: " << productosTienda[i].priceVenta << " | Cantidad: " << productosTienda[i].cantidad << std::endl;
            }
            std::cout << "0. Volver" << std::endl;

            bool terminado = false;

            while (terminado == false)
            {
                int eleccion;
                std::cout << "Vendedor: Que quieres llevarte? (escribe el numero)" << std::endl;
                std::cin >> eleccion;
                std::cout << std::endl;

                if (eleccion == 0)
                {
                    terminado = true;
                }
                else
                {
                    eleccion = eleccion - 1;

                    if (eleccion >= 0 && eleccion < productosTienda.size() && productosTienda[eleccion].cantidad > 0 && dinero >= productosTienda[eleccion].priceCompra)
                    {
                        dinero = dinero - productosTienda[eleccion].priceCompra;
                        productosTienda[eleccion].cantidad = productosTienda[eleccion].cantidad - 1;

                        productosUsuario.push_back(productosTienda[eleccion]);
                        productosUsuario[productosUsuario.size() - 1].cantidad = 1;

                        std::cout << "Vendedor: Trato hecho!" << std::endl;
                        terminado = true;
                    }
                    else
                    {
                        std::cout << "Vendedor: Lo siento, no puedo venderte eso. (0 para volver)" << std::endl;
                    }
                }
            }
        }
        else if (opcion == 'V')
        {
            std::cout << "--- Inventario ---" << std::endl;

            for (int i = 0; i < productosUsuario.size(); i++)
            {
                std::cout << i + 1 << ". " << productosUsuario[i].nombre << " | Compra: " << productosUsuario[i].priceCompra << " | Venta: " << productosUsuario[i].priceVenta << " | Cantidad: " << productosUsuario[i].cantidad << std::endl;
            }
            std::cout << "0. Volver" << std::endl;

            bool terminado = false;

            while (terminado == false)
            {
                int eleccion;
                std::cout << "Vendedor: Que quieres venderme? (escribe el numero)" << std::endl;
                std::cin >> eleccion;
                std::cout << std::endl;

                if (eleccion == 0)
                {
                    terminado = true;
                }
                else
                {
                    eleccion = eleccion - 1;

                    if (eleccion >= 0 && eleccion < productosUsuario.size() && productosUsuario[eleccion].cantidad > 0)
                    {
                        dinero = dinero + productosUsuario[eleccion].priceVenta;
                        productosUsuario[eleccion].cantidad = productosUsuario[eleccion].cantidad - 1;
                        std::cout << "Vendedor: Trato hecho!" << std::endl;
                        terminado = true;
                    }
                    else
                    {
                        std::cout << "Vendedor: No tienes ese objeto. (0 para volver)" << std::endl;
                    }
                }
            }
        }
        else
        {
            std::cout << "Vendedor: Hasta la proxima, caballero." << std::endl;
        }
    }
}*/