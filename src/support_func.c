#include "../fractol.h"

void	ft_close(t_fr *e)
{
    free(e);
    exit(0);
}

int		exit_x(void *par)
{
    par = NULL;
    exit(0);
    return (0);
}

void    ft_put_image(t_fr *p, int x, int y, unsigned int c)
{
    int  i;
    unsigned int d;

    d = get_color(c, p);
    if (x > 0 && x < WIDTH && y > 0 && y < HEIGHT)
    {
        p->pxl = mlx_get_data_addr(p->img, &(p->bpp), &(p->s_line), &(p->ed));
        i = (x * 4) + (y * p->s_line);
        p->pxl[i] = (char) d;
        p->pxl[i + 1] = (char) (d >> 8);
        p->pxl[i + 2] = (char) (d >> 16);
    }
}

void apply_zoom(t_fr *e, double mousere, double mouseim, double zoom)
{
    double interpolation = 1 / zoom;
    e->mdb->minre = interpolate(mousere, e->mdb->minre, interpolation);
    e->mdb->minim = interpolate(mouseim, e->mdb->minim, interpolation);
    e->mdb->maxre = interpolate(mousere, e->mdb->maxre, interpolation);
    e->mdb->maxim = interpolate(mouseim, e->mdb->maxim, interpolation);
}

double interpolate(double start, double end, double interpolation)
{
    return start + ((end - start) * interpolation);
}
