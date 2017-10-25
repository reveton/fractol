#include "../fractol.h"

int     check_arg_err(int ac)
{
    if (ac < 2)
    {
        ft_printf("Usage:./fractol mandelbrot | julia | burningship | rose | triplemdb");
        return (0);
    }
    else if (ac >= 3)
    {
        ft_printf("This version doesn't support two fractals, please use only one");
        return (0);
    }
    return (1);
}

void    check_fractol(char **av, t_fr *fr)
{
    if (ft_strequ("mandelbrot", av[1]))
    {
        fr->mandelbrot = 1;
        ft_thread_create(fr, draw_mandelbrot);
    }
    if (ft_strequ("julia", av[1]))
    {
        fr->julia = 1;
        ft_thread_create(fr, draw_julia);
    }
    if (ft_strequ("burningship", av[1]))
    {
        fr->ship = 1;
        ft_thread_create(fr, draw_burningship);
    }
    if (ft_strequ("rose", av[1]))
    {
        fr->add_frct = 1;
        ft_thread_create(fr, draw_julia_dendrite);
    }
    if (ft_strequ("triplemdb", av[1]))
    {
        fr->add_frct = 2;
        ft_thread_create(fr, draw_triple_mdb);
    }
}

void        check_arg(char **av, t_fr *fr)
{
    if (!ft_strequ("mandelbrot", av[1])
        && !ft_strequ("julia", av[1])
        && !ft_strequ("burningship", av[1])
        && !ft_strequ("rose", av[1])
        && !ft_strequ("triplemdb", av[1]))
    {
        ft_printf("Usage:./fractol mandelbrot | julia | burningship | rose | triplemdb");
        exit(0);
    }
    check_fractol(av,fr);
}

int		expose_hook(t_fr *e)
{
    if (e->mandelbrot)
        ft_thread_create(e, draw_mandelbrot);
    if (e->ship)
        ft_thread_create(e, draw_burningship);
    if (e->julia)
        ft_thread_create(e, draw_julia);
    if (e->add_frct == 1)
        ft_thread_create(e, draw_julia_dendrite);
    if (e->add_frct == 2)
        ft_thread_create(e, draw_triple_mdb);
    return (0);
}
