
#ifndef FRACTOL_FRACTOL_H
#define FRACTOL_FRACTOL_H

//# include "miniLibX/mlx.h"
# include <mlx.h>
# include <fcntl.h>
# include "libft/libft.h"
# include <pthread.h>
# include <math.h>
# define HEIGHT 700
# define WIDTH 900

typedef struct	s_fr
{
    int					s_line;
    char				*pxl;
    int     scale;
    void    *win;
    void    *mlx;
    void    *img;
    int					bpp;
    int ed;
    int					i_max;
    unsigned int		color_max;
    int					color_value;
    int         mandelbrot;
    int julia;
    int ship;
    int psy;
    struct s_jul *mdb;
    int					option_x;
    int					option_y;
    int					mouse_stop;
    double 			z;
    int move_x;
    int move_y;
    int add_frct;
}               t_fr;

typedef struct s_jul
{
     double			minre;
     double			maxre;
     double         minim;
     double         maxim;
}              t_jul;

typedef struct s_fractal
{
    t_fr *p;
    int start_y;
    int end_y;
}               t_fractal;

void	ft_close(t_fr *e);
int     key_hook(int keycode, t_fr *fr);
void    init_struct(t_fr **fr);
void    check_arg(char **av, t_fr *fr);
int		exit_x(void *par);
void    *draw_mandelbrot(void *thread);
unsigned int	get_color(int a, t_fr *e);
void    *draw_julia(void *thread);
int     psychodelic(t_fr *fr);
void    *draw_burningship(void *thread);
void    ft_thread_create(t_fr *p, void *(*f)(void*));
void    *draw_julia_dendrite(void *thread);
void    *draw_triple_mdb(void *thread);
int		mouse_move_hook(int x, int y, t_fr *fr);
int		mouse_click_hook(int k, int x, int y, t_fr *e);
int    min_julia(t_fr *e, intmax_t x, intmax_t y,int i);
void    ft_put_image(t_fr *p, int x, int y, unsigned int c);
void apply_zoom(t_fr *e, double mousere, double mouseim, double zoom);
double interpolate(double start, double end, double interpolation);
int    min_burningship(t_fr *e, intmax_t x, intmax_t y,int i);
t_jul		*init_mandelbrot(t_jul *m);
int     check_arg_err(int ac);
int		expose_hook(t_fr *e);
int    min_julia_den(t_fr *e, intmax_t x, intmax_t y,int i);
int    min_mandelbrot(t_fr *e, intmax_t x, intmax_t y,int i);

#endif
