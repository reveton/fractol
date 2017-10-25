#include "../fractol.h"

t_jul		*init_mandelbrot(t_jul *m)
{
    m = (t_jul *)malloc(sizeof(t_jul));
    m->minre = -2.0;
    m->maxre = 1.0;
    m->minim = -1.2;
    m->maxim = m->minim + (m->maxre - m->minre) * HEIGHT / WIDTH;
    return (m);
}

void    init_struct(t_fr **fr)
{
    t_fr *tmp;

    tmp = (t_fr*)malloc(sizeof(t_fr));
    tmp->scale = 0;
    tmp->i_max = 50;
    tmp->color_max = 0x000000;
    tmp->color_value = 1;
    tmp->julia = 0;
    tmp->mandelbrot = 0;
    tmp->ship = 0;
    tmp->psy = 0;
    tmp->z = 1;
    tmp->mlx = mlx_init();
    tmp->win = mlx_new_window(tmp->mlx, WIDTH, HEIGHT, "afomenko");
    tmp->img = mlx_new_image(tmp->mlx, WIDTH, HEIGHT);
    tmp->pxl = mlx_get_data_addr(tmp->img, &(tmp->bpp), &(tmp->s_line), &(tmp->ed));
    tmp->mdb = init_mandelbrot(tmp->mdb);
    tmp->option_x = WIDTH / 2;
    tmp->option_y = HEIGHT / 2;
    tmp->move_x = 1;
    tmp->move_y = 1;
    *fr = tmp;
}
