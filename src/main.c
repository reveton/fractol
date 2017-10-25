#include "../fractol.h"

int main(int ac, char **av)
{
    t_fr *fr;

    if (check_arg_err(ac) == 0)
        return (0);
    init_struct(&fr);
    check_arg(av, fr);
    mlx_expose_hook(fr->win, expose_hook, fr);
    mlx_hook(fr->win, 2, 5, key_hook, fr);
    mlx_hook(fr->win, 6, 1L << 6, mouse_move_hook, fr);
    mlx_mouse_hook(fr->win, mouse_click_hook, fr);
    mlx_hook(fr->win, 17, 1L << 17, exit_x, fr);
    mlx_loop_hook(fr->mlx, psychodelic,fr);
    mlx_loop(fr->mlx);
}
