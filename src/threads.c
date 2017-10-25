#include "../fractol.h"

void ft_thread_create(t_fr *p, void *(*f)(void*))
{
    pthread_t thread[4];
    t_fractal fractal[4];
    int i;

    i = 0;
    while (i < 4)
    {
        fractal[i].start_y = HEIGHT / 4 * i;
        fractal[i].end_y = HEIGHT / 4 * (i + 1);
        fractal[i].p = p;
        pthread_create(&(thread[i]), NULL, f, &fractal[i]);
        i++;
    }
    i = 0;
    while (i < 4)
    {
        pthread_join(thread[i], NULL);
        i++;
    }
    mlx_put_image_to_window(p->mlx, p->win, p->img, 0, 0);
}
