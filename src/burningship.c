#include "../fractol.h"

int    min_burningship(t_fr *e, intmax_t x, intmax_t y,int i)
{
    long double im_factor;
    long double re_factor;
    long double cim;
    long double cre;
    long double z_re;
    long double z_im;
    long double z_re2;
    long double z_im2;

    re_factor = (e->mdb->maxre-e->mdb->minre) / (WIDTH - 1);
    im_factor = (e->mdb->maxim-e->mdb->minim) / (HEIGHT - 1);
    cim = e->mdb->maxim - ((y - 180) + e->move_y) * im_factor;
    cre = e->mdb->minre + (x + e->move_x) * re_factor;
    z_re = cre;
    z_im = cim;
    while (++i < e->i_max + e->scale)
    {
        z_re2 = z_re * z_re;
        z_im2 = z_im * z_im;
        z_im = 2 * fabsl(z_re * z_im) - cim;
        if (z_re2 + z_im2 > 4)
            return (i);
        z_re = z_re2 - z_im2 + cre;
    }
    return (i);
}

void    *draw_burningship(void *thread)
{
    int x;
    int y;
    t_fractal *data;
    double mousere;
    double mouseim;

    data = (t_fractal*)thread;
    mousere = (double)data->p->option_x
              / (WIDTH / (data->p->mdb->maxre - data->p->mdb->minre))
              + data->p->mdb->minre;
    mouseim = (double)data->p->option_y
              / (HEIGHT / (data->p->mdb->maxim - data->p->mdb->minim))
              + data->p->mdb->minim;
    apply_zoom(data->p, mousere, mouseim, data->p->z);
    x = -1;
    while (++x < WIDTH)
    {
        y = data->start_y;
        while (y++ < data->end_y)
            ft_put_image(data->p, x, y,
                         (unsigned int) min_burningship(data->p, x, y, -1));
    }
    pthread_exit(NULL);
}
