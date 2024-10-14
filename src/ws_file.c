/*
** EPITECH PROJECT, 2024
** main file
** File description:
** main file
*/

int my_strlen(char const *str)
{
    int i = 0;

    while (str[i] != '\0')
        i++;
    return (i);
}

char *my_strdup(char const *old)
{
    char *new = malloc(sizeof(char) * (my_strlen(old) + 1));
    int i = 0;

    while (old[i] != '\0') {
        new[i] = old[i];
        i++;
    }
    new[i] = '\0';
    return (new);
}

int project(int ac, const char * const *av)
{
    char *str = my_strdup(av[1]);
    int x = 1500;
    
    for (int i = 8; x >= 20; i--) {
        x = div(x, i);
    }

    printf("%s\n", str);
}