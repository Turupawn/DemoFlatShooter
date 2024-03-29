#ifndef MENUIMAGEN_H
#define MENUIMAGEN_H

#include "Elemento.h"

class MenuImagen:Elemento
{
private:
public:
    int fade_in_current;
    int fade_in_speed;
    Image* imagen;
    Image* imagen_seleccionado;
    std::string value;
    MenuImagen(RosalilaGraphics*painter,int x, int y, int displacement_x, int displacement_y,int stop_displacement_x_at,int stop_displacement_y_at,int fade_in_current,int fade_in_speed,int width, int height,Image* imagen,std::string value);
    virtual std::string getTipo();
    virtual void dibujar();
};

#endif
