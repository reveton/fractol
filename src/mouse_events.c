#include "../fractol.h"

int		mouse_move_hook(int x, int y, t_fr *fr)
{
    if (x < 0 || x >= WIDTH || y < 0 || y >= HEIGHT ||
        fr->mouse_stop == 1)
        return (0);
    fr->z = 1;
    fr->option_x = x;
    fr->option_y = y;
    if (fr->julia)
        ft_thread_create(fr, draw_julia);
    return (0);
}

int		mouse_click_hook(int k,int x, int y, t_fr *e)
{
	x = 0;
	y = 0;
    e->z = 1;
    if (k == 5)
        e->z = e->z + 0.01;
    if (k == 4)
        e->z -= 0.01;
    if (e->mandelbrot)
        ft_thread_create(e, draw_mandelbrot);
    if (e->julia)
        ft_thread_create(e, draw_julia);
    if (e->ship)
        ft_thread_create(e, draw_burningship);
    if (e->add_frct == 1)
        ft_thread_create(e, draw_julia_dendrite);
    if (e->add_frct == 2)
        ft_thread_create(e, draw_triple_mdb);
    return (0);
}
