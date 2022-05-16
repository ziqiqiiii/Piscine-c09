#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>

// int charset_check(char c, char *charset)
// {
//     int i;

//     i = 0;
//     while (charset[i] != '\0' || c != charset[i])
//         i++;
//     if(c = charset[i])
//         return (1);
//     else
//         return (0);
// }

int number_wd(char *str, char *charset)
{
    int i;
    int j;
    int number;

    i = 0;
    number = 0;
    while (str[i])
    {
        j = 0;
        printf("%p %s\n", str, str);
        while (str[i] != charset[j] && charset[j] != '\0')
            j++;
        if (str[i] == charset[j])
            number += 1;
        i++;
    }
    return (number);
}

// int ft_word_len(char *str, char *charset)
// {
//     int i;
//     int j;

//     i = 0;
//     while(*str)
//     {
//         while(str[i] != charset[j] || charset[j] != '\0')
//             j++;
//         if (str[i] == charset[j])
//             return (i);
//     }
//     return (0);
// }

// char    **ft_split(char *str, char *charset)
// {
//     int number;
//     char **output;
//     int a;
//     int k;

//     a = 0;
//     number = number_wd(str, charset);
//     output = malloc(sizeof(char*) * (number + 1));
//     if (!output)
//         return (NULL);
//     output[0] = 0;
//     while(*str)
//     {
//         k = 0;
//         output[a] = malloc(sizeof(char) * ft_word_len(str, charset));
//         while (!charset_check(*str, charset) && *str)
//         {
//             output[a][k++] = *str;
//             str++;
//         }
//         output[a][k] = '\0';
//         a++;
//     }
//     return (output);
// }

int main(void)
{
    // char charset[100] = "|||";
    char str[100] = "abc|||def|||gef|||";

    //char **outcome = ft_split(str,charset);

    int i;
    printf("%i\n", number_wd(str, "|||"));
    return (0);
    // i = 0;
    /*while(outcome[i])
    {
        printf(outcome[i]);
        i++;
    }*/
}