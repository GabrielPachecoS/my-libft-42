#include "libft.h"

static int	count_words(const char *s, char c)
{
    int count;
    int in_word;

    count = 0;
    in_word = 0;
    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return (count);
}

static char *get_next_word(const char **s, char c)
{
    const char  *start;
    size_t      len;
    size_t      i;
    char        *word;

    i = 0;
    while (**s == c && **s)
        (*s)++;
    start = *s;
    while (**s && **s != c)
        (*s)++;
    len = *s - start;
    word = (char *)malloc(sizeof(char) * (len + 1));
    if (word)
    {
        while (i < len)
        {
            word[i] = start[i];
            i++;
        }
        word[len] = '\0';
    }
    return (word);
}

char    **ft_split(char const *s, char c)
{
    int     word_count;
    int     i;
    char    **result;
    if (!s)
        return (NULL);
    i = 0;
    word_count = count_words(s,c);
    result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result)
        return (NULL);
    while (i < word_count)
    {
        result[i] = get_next_word(&s, c);
        if (!result[i])
        {
            while (i--)
                free (result[i]);
            free (result);
            return (NULL);
        }
        i++;
    }
    result[i] = '\0';
    return (result);
}