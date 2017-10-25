#include "../fractol.h"

static void    change_color_scale(int keycode, t_fr *fr)
{
    if (keycode == 67)
        fr->color_value += 1;
    if (keycode == 75)
        fr->color_value -= 1;
    if (keycode == 69)
        fr->scale += 10;
    if (keycode == 78)
        fr->scale -= 10;

}

int    psychodelic(t_fr *fr)
{
    if (fr->psy == 1)
    {
        fr->color_value += 1;
        if (fr->mandelbrot)
            ft_thread_create(fr, draw_mandelbrot);
        if (fr->ship)
            ft_thread_create(fr, draw_burningship);
        if (fr->julia)
            ft_thread_create(fr, draw_julia);
        if (fr->add_frct == 1)
            ft_thread_create(fr, draw_julia_dendrite);
        if (fr->add_frct == 2)
            ft_thread_create(fr, draw_triple_mdb);
    }
    return (0);
}

static  void    move_fractol(int keycode, t_fr *fr)
{
    if (keycode == 123)
        fr->move_x += 10;
    if (keycode == 124)
        fr->move_x -= 10;
    if (keycode == 126)
        fr->move_y += 10;
    if (keycode == 125)
        fr->move_y -= 10;
}

int key_hook(int keycode, t_fr *fr)
{
    if (keycode == 53)
    {
        mlx_destroy_window(fr->mlx,fr->win);
        ft_close(fr);
    }
    if (keycode == 12)
        fr->psy = 1;
    if (keycode == 13)
        fr->psy = 0;
    move_fractol(keycode, fr);
    change_color_scale(keycode, fr);
    if (fr->mandelbrot)
        ft_thread_create(fr, draw_mandelbrot);
    if (fr->ship)
        ft_thread_create(fr, draw_burningship);
    if (fr->julia)
        ft_thread_create(fr, draw_julia);
    if (fr->add_frct == 1)
        ft_thread_create(fr, draw_julia_dendrite);
    if (fr->add_frct == 2)
        ft_thread_create(fr, draw_triple_mdb);
    return (0);
}
