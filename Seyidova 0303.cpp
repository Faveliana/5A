// Seyidova 0303.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
//
//#include <iostream>
//#include <string>
//#include <sstream>
//
//int main()
//{
//    std::string s("qwertda yuio tre erwda dasdasdqw"), temp;
//    std::istringstream ist(s);
//    int index = 0;
//    while (ist >> temp)
//    {
//        if (*temp.rbegin() == 'rd')
//            std::cout << index + 1 << " " << temp << std::endl;
//        index++;
//    }
//    return 0;
//}


#include <stdio.h>
#include <string.h>

#define DELIM " \t\n"
#define LAST_LETTER 'a'

int main(void) {
    char buf[BUFSIZ], * p;
    size_t cnt;

    while (printf("\nString: ") && fgets(buf, BUFSIZ, stdin) && *buf != '\n')
        for (p = strtok(buf, DELIM), cnt = 0; p && ++cnt; p = strtok(NULL, DELIM))
            if (*(p + strlen(p) - 1) == LAST_LETTER)
                printf("%d\t%s\n", cnt, p);

    return 0;
}