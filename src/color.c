#include "../fractol.h"

unsigned int	get_color(int a, t_fr *e)
{
    unsigned int	c;
    unsigned char	r;
    unsigned char	g;
    unsigned char	b;

    if (a == e->i_max + e->scale)
        return (e->color_max);
    r = (unsigned char) ((a * 5) * e->color_value);
    g = (unsigned char) ((255 - (a * 10)) * e->color_value);
    b = (unsigned char) ((255 - (a * 2)) * e->color_value);
    c = (r << 16) + (g << 8) + b;
    return (c);
}
