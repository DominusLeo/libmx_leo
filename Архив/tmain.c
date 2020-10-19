#include "libmx.h"
/*
 static bool cmp_sort_list(void *a, void *b) {
     return (int)a > (int)b ? true : false;
 }*/

/*int main(int argc, char *argv[]) {
    int a = 0;
    if (argc)
        if (argv)
             a = 6;
     mx_printstr(" **********************\n *\tUTILS PACK    *\n **********************\n\n");
     mx_printstr("----------------MX_PRINTCHAR-------------------\n");
         mx_printstr("mx_printchar 'h' | "); mx_printchar('h'); mx_printstr("\n");
         mx_printstr("mx_printchar 'A' | "); mx_printchar('A'); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_PRINT_UNICODE-------------------\n");
         mx_printstr("1 bytes:\n"); mx_print_unicode(65); mx_printstr("\n");
         mx_printstr("2 bytes:\n"); mx_print_unicode(162); mx_printstr("\n");
         mx_printstr("3 bytes:\n"); mx_print_unicode(8364); mx_printstr("\n");
         mx_printstr("4 bytes:\n"); mx_print_unicode(128525); mx_printstr("\n");
    mx_printstr("4 bytes:\n"); mx_print_unicode(78008); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_PRINTSTR-------------------\n");
         mx_printstr("function works correctly"); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_PRINT_STRARR-------------------\n");
         char *print_strarr[5] = {"abc", "xyz", "ghi", "def", NULL};
         mx_printstr("mx_print_strarr return \"abc xyz ghi def\"? | "); mx_print_strarr(print_strarr, " ");
         mx_printstr("mx_print_strarr return nothing? | "); mx_print_strarr(print_strarr, NULL); mx_printstr("\n");
         mx_printstr("mx_print_strarr return nothing? | "); mx_print_strarr(NULL, NULL); mx_printstr("\n");
         mx_printstr("mx_print_strarr return nothing? | "); mx_print_strarr(NULL, " "); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_PRINTINT-------------------\n");
         mx_printstr("mx_printint -2147483648 | "); mx_printint(-2147483648); mx_printstr("\n");
         mx_printstr("mx_printint -1 | "); mx_printint(-1); mx_printstr("\n");
         mx_printstr("mx_printint 0 | "); mx_printint(0); mx_printstr("\n");
         mx_printstr("mx_printint 1 | "); mx_printint(1); mx_printstr("\n");
         mx_printstr("mx_printint of 2147483647 | "); mx_printint(2147483647); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_POW-------------------\n");
         mx_printstr("mx_pow 3, 3 is 27? | ");
         printf("%.0f\n", mx_pow(3, 3));
         mx_printstr("mx_pow 2.5, 3 is 15.625? | ");
         printf("%.3f\n",mx_pow(2.5, 3));
         mx_printstr("mx_pow 2, 0 is 1 | ");
         printf("%.0f\n",mx_pow(2, 0));

     mx_printstr("\n\n----------------MX_SQRT-------------------\n");
         mx_printstr("mx_sqrt 3 is 0? | "); mx_printint(mx_sqrt(3)); mx_printstr("\n");
         mx_printstr("mx_sqrt 4 is 2? | "); mx_printint(mx_sqrt(4)); mx_printstr("\n");
         mx_printstr("mx_sqrt 625 is 25? | "); mx_printint(mx_sqrt(625)); mx_printstr("\n");
         mx_printstr("mx_sqrt 2147395600 is 46340? | "); mx_printint(mx_sqrt(2147395600)); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_NBR_TO_HEX-------------------\n");
         char *hex1 = mx_nbr_to_hex(52);
         char *hex2 = mx_nbr_to_hex(1000);
         mx_printstr("mx_nbr_to_hex of 52 is 34? | "); mx_printstr(hex1); mx_printstr("\n");
         mx_printstr("mx_nbr_to_hex of 1000 is 3e8? | "); mx_printstr(hex2); mx_printstr("\n");


     mx_printstr("\n\n----------------MX_HEX_TO_NBR-------------------\n");
         mx_printstr("mx_hex_to_nbr of \"c4\" is 196? | "); mx_printint(mx_hex_to_nbr("c4")); mx_printstr("\n");
         mx_printstr("mx_hex_to_nbr of \"fade\" is 64222? | "); mx_printint(mx_hex_to_nbr("FADE")); mx_printstr("\n");
         mx_printstr("mx_hex_to_nbr of NULL is 0 | "); mx_printint(mx_hex_to_nbr(NULL)); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_ITOA-------------------\n");
         char *integer1 = mx_itoa(-2147483648);
         printf("mx_itoa return -2147483648? | "); printf("%s\n", integer1);
         char *integer2 = mx_itoa(-11);
         printf("mx_itoa return -11? | "); printf("%s\n", integer2);
         char *integer3 = mx_itoa(-1);
         printf("mx_itoa return -1? | "); printf("%s\n", integer3);
         char *integer4 = mx_itoa(0);
         printf("mx_itoa return 0? | "); printf("%s\n", integer4);
         char *integer5 = mx_itoa(1);
         printf("mx_itoa return 1? | "); printf("%s\n", integer5);
         char *integer6 = mx_itoa(10);
         printf("mx_itoa return 10? | "); printf("%s\n", integer6);
         char *integer7 = mx_itoa(1234);
         printf("mx_itoa return 1234? | "); printf("%s\n", integer7);
         char *integer8 = mx_itoa(2147483647);
         printf("mx_itoa return 2147483647? | "); printf("%s\n", integer8);
     system ("leaks -q a.out");


//    printf ("-----------------------------------Mx_Itoa-----------------------------------------------------------\n");
//     printf ("%s\n", mx_itoa(3));
//     printf ("%s\n", mx_itoa(32));
//     printf ("%s\n", mx_itoa(56436));
//     printf ("%s\n", mx_itoa(-32));
//     printf ("%s\n", mx_itoa(-2));
//    printf ("%s\n", mx_itoa(-1));
//    printf ("%s\n", mx_itoa(-11));
//     printf ("%s\n", mx_itoa(0));
//    printf ("%s\n", mx_itoa(INT_MIN));
//    printf ("%s\n", mx_itoa(INT_MAX));

     mx_printstr("\n\n----------------MX_FOREACH-------------------\n");
         int foreach[5] = {1, 2, 3, 4, 5};
         mx_printstr("mx_foreach result is 12345? | "); mx_foreach(foreach, 5, mx_printint); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_BINARY_SEARCH-------------------\n");
         char *binary_arr[6] = {"222", "Abcd", "aBc", "ab", "az", "z"};
         int binary_count = 0;
         mx_printstr("mx_binary_search return 3 and 3? | "); mx_printint(mx_binary_search(binary_arr, 6, "ab", &binary_count)); mx_printchar(' '); mx_printint(binary_count); mx_printstr("\n");
         binary_count = 0;
         mx_printstr("mx_binary_search return 2 and 1? | "); mx_printint(mx_binary_search(binary_arr, 6, "aBc", &binary_count)); mx_printchar(' '); mx_printint(binary_count); mx_printstr("\n");
         binary_count = 0;
         mx_printstr("mx_binary_search return -1 and 0? | "); mx_printint(mx_binary_search(binary_arr, 6, "aBz", &binary_count)); mx_printchar(' '); mx_printint(binary_count); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_BUBBLE_SORT-------------------\n");
         char *bubble_arr[4] = {"abc", "xyz", "ghi", "def"};
         mx_printstr("mx_bubble_sort return 3? | "); mx_printint(mx_bubble_sort(bubble_arr, 4)); mx_printstr("\n");
         char *bubble_arr2[3] = {"abc", "acb", "a"};
         mx_printstr("mx_bubble_sort return 2? | "); mx_printint(mx_bubble_sort(bubble_arr2, 3)); mx_printstr("\n");
//
//     mx_printstr("\n\n----------------MX_QUICK_SORT-------------------\n");
//         char *quicksort_arr1[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
//         char *quicksort_arr2[] = {"DMC", "Clint Eastwood", "Dr Brown", "Einstein", "Jessica", "Biff Tannen"};
//         mx_printstr("mx_quicksort return 2? | "); mx_printint(mx_quicksort(quicksort_arr1, 0, 3)); mx_printstr("\n");
//         mx_printstr("arr1 is \"Raphael\" \"Leonardo\" \"Donatello\" \"Michelangelo\" | \n\t");
//         for (int i = 0; i < 4; i++) {
//             mx_printstr("\""); mx_printstr(quicksort_arr1[i]); mx_printstr("\"");
//             mx_printstr(" ");
//         }
//         mx_printstr("\n");
//         mx_printstr("mx_quicksort return 2? | "); mx_printint(mx_quicksort(quicksort_arr2, 0, 5)); mx_printstr("\n");
//         mx_printstr("arr2 is \"DMC\" \"Jessica\" \"Dr Brown\" \"Einstein\" \"Biff Tannen\" \"Clint Eastwood\" | \n\t");
//         for (int i = 0; i < 6; i++) {
//             mx_printstr("\""); mx_printstr(quicksort_arr2[i]); mx_printstr("\"");
//             mx_printstr(" ");
//         }
//         mx_printstr("\n");
//         mx_printstr("mx_quicksort return -1? | "); mx_printint(mx_quicksort(NULL, 0, 5)); mx_printstr("\n");
//
//
     mx_printstr("\n\n **********************\n *\tSTRING PACK   *\n **********************\n\n");
     mx_printstr("\n\n----------------MX_STRLEN-------------------\n");
         mx_printstr("mx_strlen return 9? | "); mx_printint(mx_strlen("game over")); mx_printstr("\n");
         mx_printstr("mx_strlen return 12? | "); mx_printint(mx_strlen("hello world!")); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_SWAP_CHAR-------------------\n");
         char swap_char[] = "ONE";
         mx_printstr("mx_swap_char return NOE? | "); mx_swap_char(&swap_char[0], &swap_char[1]); mx_printstr(swap_char); mx_printstr("\n");
         mx_printstr("mx_swap_char return NEO? | "); mx_swap_char(&swap_char[1], &swap_char[2]); mx_printstr(swap_char); mx_printstr("\n");

    mx_printstr("\n\n----------------MX_STR_REVERSE-------------------\n");
    char str_reverse[] = "game over";
    mx_str_reverse(str_reverse);
    mx_printstr("mx_str_reverse of \"game over\" is revo emag | "); mx_printstr(str_reverse); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_STRDEL-------------------\n");
         char *strdel = strdup("full string");
         mx_printstr("before mx_strdel string is \"full string\"? | "); mx_printstr(strdel); mx_printstr("\n");
         mx_strdel(&strdel);
         mx_printstr("after mx_strdel string is (null)? | "); printf("%s\n", strdel);

     mx_printstr("\n\n----------------MX_DEL_STRARR-------------------\n");
         char **strarr = (char **)malloc(sizeof(char *) * 3);
         strarr[0] = strdup("abc"); strarr[1] = strdup("xyz"); strarr[2] = NULL;
         mx_printstr("strarr before mx_del_strarr is abc  xyz  (null)? | "); printf("%s  %s  %s\n", strarr[0], strarr[1], strarr[2]);
         mx_del_strarr(&strarr);
         mx_printstr("strarr after mx_del_strarr is (null)? | "); printf("%s\n", (char *) strarr);

     mx_printstr("\n\n----------------MX_GET_CHAR_INDEX-------------------\n");
         char *get_char_index = "123456789";
         mx_printstr("mx_get_char_index return 4? | "); mx_printint(mx_get_char_index(get_char_index, '5')); mx_printstr("\n");
         mx_printstr("mx_get_char_index return -1? | "); mx_printint(mx_get_char_index(get_char_index, 'A')); mx_printstr("\n");
         mx_printstr("mx_get_char_index return -2? | "); mx_printint(mx_get_char_index(NULL, '5')); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_STRDUP-------------------\n");
         char *strdup1 = mx_strdup("123456789");
         mx_printstr("mx_strdup return \"123456789\"? | "); mx_printstr(strdup1); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_STRNDUP-------------------\n");
         char *strndup = mx_strndup("hello", 20);
         mx_printstr("mx_strndup return \"hello\"? | "); mx_printstr(strndup); mx_printstr("\n");


     mx_printstr("\n\n----------------MX_STRCPY-------------------\n");
         const char *strcpy = "123456789"; char dstcpy[15];
         mx_printstr("mx_strcpy return \"123456789\"? | "); mx_printstr(mx_strcpy(dstcpy, strcpy)); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_STRNCPY-------------------\n");
         const char *strncpy = "123456789"; char dstncpy[15];
         mx_printstr("mx_strncpy return \"12345\"? | "); mx_printstr(mx_strncpy(dstncpy, strncpy, 5)); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_STRCMP-------------------\n");
         char *strcmp1 = "aaaaaaa"; char *strcmp2 = "aaaaaaaA"; char *strcmp3 = "aaaaaaa";
         mx_printstr("strcmp \t  return   \t   | "); mx_printint(strcmp(strcmp2, strcmp1));
         mx_printstr("\nmx_strcmp return the same? | "); mx_printint(mx_strcmp(strcmp2, strcmp1)); mx_printstr("\n");
         mx_printstr("strcmp \t  return   \t   | "); mx_printint(strcmp(strcmp1, strcmp2));
         mx_printstr("\nmx_strcmp return the same? | "); mx_printint(mx_strcmp(strcmp1, strcmp2)); mx_printstr("\n");
         mx_printstr("strcmp \t  return   \t   | "); mx_printint(strcmp(strcmp1, strcmp3));
         mx_printstr("\nmx_strcmp return the same? | "); mx_printint(mx_strcmp(strcmp1, strcmp3)); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_STRCAT-------------------\n");
         char strcat1[10] = "12345"; char strcat2[5] = "6789";
         char strcat3[10] = "12345"; char strcat4[5] = "6789";
         mx_printstr("strcat \t  return   \t   | "); mx_printstr(strcat(strcat1, strcat2));
         mx_printstr("\nmx_strcat return the same? | "); mx_printstr(strcat(strcat3, strcat4)); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_STRSTR-------------------\n");
         char *strstr1 = "12345679";
         char *cmp = "5";
         printf("strstr return \"%s\". mx_strstr return the same? | %s\n", strstr(strstr1, cmp), mx_strstr(strstr1, cmp));

     mx_printstr("\n\n----------------MX_GET_SUBSTR_INDEX-------------------\n");
         mx_printstr("mx_get_substr_index \"2\"? | "); mx_printint(mx_get_substr_index("McDonalds", "Don")); mx_printstr("\n");
         mx_printstr("mx_get_substr_index \"3\"? | "); mx_printint(mx_get_substr_index("McDonalds Donuts", "on")); mx_printstr("\n");
         mx_printstr("mx_get_substr_index \"-1\"? | "); mx_printint(mx_get_substr_index("McDonalds", "Donatello")); mx_printstr("\n");
         mx_printstr("mx_get_substr_index \"-2\"? | "); mx_printint(mx_get_substr_index("McDonalds", NULL)); mx_printstr("\n");
         mx_printstr("mx_get_substr_index \"-2\"? | "); mx_printint(mx_get_substr_index(NULL, "Don")); mx_printstr("\n");

     write(1, "\n\n----------------MX_COUNT_SUBSTR-------------------\n", 53);
         char *count_substr = "yo, yo, yo Neo";
         mx_printstr("mx_count_substr return \"3\"? | "); mx_printint(mx_count_substr(count_substr, "yo")); mx_printstr("\n");
         mx_printstr("mx_count_substr return \"-1\"? (null's check) | "); mx_printint(mx_count_substr(count_substr, NULL)); mx_printstr("\n");
         mx_printstr("mx_count_substr return \"-1\"? (null's check) | "); mx_printint(mx_count_substr(NULL, "yo")); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_COUNT_WORDS-------------------\n");
         char *count_words = "   follow  *    the   white   rabbit";
         mx_printstr("mx_count_words return \"2\"? | "); mx_printint(mx_count_words(count_words, '*')); mx_printstr("\n");
         mx_printstr("mx_count_words return \"5\"? | "); mx_printint(mx_count_words(count_words, ' ')); mx_printstr("\n");
         mx_printstr("mx_count_words return \"-1\"? (null's check) | "); mx_printint(mx_count_words(NULL, ' ')); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_STRNEW-------------------\n");
         char *strnew = mx_strnew(5);
         mx_printstr("mx_strnew return \"^@^@^@^@^@$\"? (check with cat -e) | "); write( 1, strnew, 5); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_STRTRIM-------------------\n");
         char strtrim[] = "\f    My name... is Neo   \t\n ";
         char strtrim2[] = "My name... is Neo   \t\n ";
         char strtrim3[] = "           \t             \n ";
         char *cleared_trim = mx_strtrim(strtrim);
         char *cleared_trim2 = mx_strtrim(strtrim2);
         char *cleared_trim3 = mx_strtrim(strtrim3);
         mx_printstr("mx_strtrim return \"My name... is Neo\"? | "); mx_printstr(cleared_trim); mx_printstr("\n");
         mx_printstr("mx_strtrim return \"My name... is Neo\"? | "); mx_printstr(cleared_trim2); mx_printstr("\n");
         mx_printstr("mx_strtrim return \"\"? | "); printf("\"%s\"\n", cleared_trim3);
         mx_printstr("mx_strtrim return (null)? | "); printf("%s\n", mx_strtrim(NULL));

     printf("\n\n----------------MX_DEL_EXTRA_SPACES-------------------\n");
//    char *name_space = "\f My name... is \r Neo \t\n \nda";
    char *name_space = "\f  \r  \t\n  \n";
    //char *name = " a  \na ";
    char *clear_space;

    clear_space = mx_del_extra_spaces(name_space);
    printf("%s", clear_space);

         char del_spaces[] = "\f    My name...      is    \r  Neo   \t\n ";
         char del_spaces2[] = "           \t             \n ";
         char *cleared_del_spaces = mx_del_extra_spaces(del_spaces), *cleared_del_spaces2 = mx_del_extra_spaces(del_spaces2);
         mx_printstr("mx_del_extra_spaces return \nMy name... is Neo\n? | "); mx_printstr(cleared_del_spaces); mx_printstr("\n");
         mx_printstr("mx_del_extra_spaces return \n\n? | "); printf("\n%s\n\n", cleared_del_spaces2);
         mx_printstr("mx_del_extra_spaces return (null)? | "); printf("%s\n", mx_del_extra_spaces(NULL));

     mx_printstr("\n\n----------------MX_STRSPLIT-------------------\n");
         char strsplit[] = "**Good bye,**Mr.*Anderson.****";
         char **splited = mx_strsplit(strsplit, '*');
         char strsplit2[] = "       Knock, knock,         Neo.         ";
         char **splited2 = mx_strsplit(strsplit2, ' ');
         char **splited3 = mx_strsplit(NULL, ' ');
         printf("mx_strsolit return is \"Good bye,\" \"Mr.\" \"Anderson.\" (null)? | "); printf("\"%s\"  \"%s\"  \"%s\" \"%s\"\n", splited[0], splited[1], splited[2], splited[3]);
         printf("mx_strsolit return is \"Knock,\" \"knock,\" \"Neo.\" (null)? | "); printf("\"%s\"  \"%s\"  \"%s\" \"%s\"\n", splited2[0], splited2[1], splited2[2], splited2[3]);
         printf("mx_strsolit return (null)? | "); printf("%s\n", (char *)splited3);

     mx_printstr("\n\n----------------MX_STRJOIN-------------------\n");
         char *strjoin1 = "this", *strjoin2 = "dodge ", *strjoin3 = NULL;
         char *strjoin_result1 = mx_strjoin(strjoin2, strjoin1);
         char *strjoin_result2 = mx_strjoin(strjoin1, strjoin3);
         char *strjoin_result3 = mx_strjoin(strjoin3, strjoin2);
         char *strjoin_result4 = mx_strjoin(strjoin3, strjoin3);
         mx_printstr("mx_strjoin return \"dodge this\"? | "); mx_printstr(strjoin_result1); mx_printstr("\n");
         mx_printstr("mx_strjoin return \"this\"? | "); mx_printstr(strjoin_result2); mx_printstr("\n");
         mx_printstr("mx_strjoin return \"dodge \"? | "); mx_printstr(strjoin_result3); mx_printstr("\n");
         mx_printstr("mx_strjoin return \"(null)\"? | "); printf("%s\n", strjoin_result4);

     mx_printstr("\n\n----------------MX_FILE_TO_STR-------------------\n"); // HOW TO CHECK??????????
         mx_printstr("check function with ./a.out src/mx_strlen.c\n");
         if (argc > 1) {
             char *file_to_str = mx_file_to_str(argv[1]);
             mx_printstr(file_to_str);
         }
//
//     mx_printstr("\n\n----------------MX_READ_LINE-------------------\n"); // CORRECT IT !!!!!!
//         int fd = open("fragment", O_RDONLY);
//         // int fd = -1;
//         char *lineptr1 = NULL;
//         int res1;
//         res1 = mx_read_line(&lineptr1, 20, 'f', fd);
//         printf("\nres1 = %d\nlineptr1 = %s|\n\n", res1, lineptr1);
//         printf("==============================================\n");
//         char *lineptr2 = NULL;
//         int res2;
//         res2 = mx_read_line(&lineptr2, 35, 't', fd);
//         printf("\nres2 = %d\nlineptr2 = %s|\n\n", res2, lineptr2);
//         printf("==============================================\n");
//         char *lineptr3 = NULL;
//         int res3;
//         res3 = mx_read_line(&lineptr3, 4, '.', fd);
//         printf("\nres3 = %d\nlineptr3 = %s|\n\n", res3, lineptr3);
//         printf("==============================================\n");
//         char *lineptr4 = NULL;
//         int res4;
//         // printf("\nlineptr4 = %s|\n\n", lineptr4);
//         res4 = mx_read_line(&lineptr4, 4, '5', fd);
//         printf("\nres4 = %d\nlineptr4 = %s|\n\n", res4, lineptr4);
//         printf("==============================================\n");
//         char *lineptr5 = NULL;
//         int res5;
//         res5 = mx_read_line(&lineptr5, 4, 'a', fd);
//         printf("\nres5 = %d\nlineptr5 = %s|\n\n", res5, lineptr5);
//         printf("==============================================\n");
//         close(fd);
//         // system("leaks -q a.out");
//         mx_printstr("\n");
//
//
     mx_printstr("\n\n----------------MX_REPLACE_SUBSTR-------------------\n");
         char replace_substr1[] = "McDonalds";
         char replace_substr2[] = "Ururu turu";
         char *repleced1 = mx_replace_substr(replace_substr1, "alds", "uts");
         char *repleced2 = mx_replace_substr(replace_substr2, "ru", "ta");
         char *repleced3 = mx_replace_substr(replace_substr2, NULL, "ta");
         char *repleced4 = mx_replace_substr(NULL, "ru", "ta");
         char *repleced5 = mx_replace_substr(replace_substr2, "ru", NULL);
         mx_printstr("mx_replace_substr return \"McDonuts\"? | "); mx_printstr(repleced1); mx_printstr("\n");
         mx_printstr("mx_replace_substr return \"Utata tuta\"? | "); mx_printstr(repleced2); mx_printstr("\n");
         mx_printstr("mx_replace_substr return \"(null)\"? | "); printf("%s\n", repleced3);
         mx_printstr("mx_replace_substr return \"(null)\"? | "); printf("%s\n", repleced4);
         mx_printstr("mx_replace_substr return \"(null)\"? | "); printf("%s\n", repleced5);
         char *rep = mx_replace_substr("Ururu turu", "r", "t");
            printf("\n| %s |\n", rep);

     mx_printstr(" *************************************\n *\t      MEMORY PACK\t     *\n *************************************\n");
     mx_printstr("\n----------------MX_MEMSET-------------------\n");
             char memset1[13]= "1234567890";
             char memset2[13]= "1234567890";
         mx_printstr("memset    return\t   | "); mx_printstr(memset(memset1, 'a', 5));
         mx_printstr("|\nmx_memset return the same? | "); mx_printstr(mx_memset (memset2, 'a', 5)); mx_printstr("|\n");

     mx_printstr("\n----------------MX_MEMCPY-------------------\n");
         char memcpy_dest1[11] = "1234567890";
         char memcpy_dest2[11] = "1234567890";
         char *memcpy_src = "54321";
         mx_printstr("memcpy    return\t   | "); mx_printstr(memcpy(memcpy_dest1, memcpy_src, 5));
         mx_printstr("|\nmx_memcpy return the same? | "); mx_printstr(mx_memcpy(memcpy_dest2, memcpy_src, 5)); mx_printstr("|\n");

     mx_printstr("\n----------------MX_MEMCCPY-------------------\n");
         char memccpy_dest1[10] = "123456789";
         char memccpy_dest2[10] = "123456789";
         mx_printstr("memccpy    return\t    | "); mx_printstr(memccpy(memccpy_dest1, "54321", '3', 8));
         mx_printstr("|\nmx_memccpy return the same? | "); mx_printstr(mx_memccpy(memccpy_dest2, "54321", '3', 8)); mx_printstr("|\n");
         printf("dst after memccpy    is | %s|\ndst after mx_memccpy is | %s|\n", memccpy_dest1, memccpy_dest2);
         printf("memccpy    return\t    | %s|\n", memccpy(memccpy_dest1, "54321", 'a', 8));
         printf("mx_memccpy return the same? | %s|\n", mx_memccpy(memccpy_dest2, "54321", 'a', 8));

     mx_printstr("\n----------------MX_MEMCMP-------------------\n");
         char *memcmp1 = "aaaaa";
         char *memcmp2 = "aaaaA";
         char *memcmp3 = "aaaaaaa";
         mx_printstr("memcmp \t  return   \t   | "); mx_printint(memcmp(memcmp2, memcmp1, 5));
         mx_printstr("|\nmx_memcmp return the same? | "); mx_printint(mx_memcmp(memcmp2, memcmp1, 5)); mx_printstr("|\n");
         mx_printstr("memcmp \t  return   \t   | "); mx_printint(memcmp(memcmp1, memcmp2, 5));
         mx_printstr("|\nmx_memcmp return the same? | "); mx_printint(mx_memcmp(memcmp1, memcmp2, 5)); mx_printstr("|\n");
         mx_printstr("memcmp \t  return   \t   | "); mx_printint(memcmp(memcmp1, memcmp3, 5));
         mx_printstr("|\nmx_memcmp return the same? | "); mx_printint(mx_memcmp(memcmp1, memcmp3, 5)); mx_printstr("|\n");

     mx_printstr("\n----------------MX_MEMCHR-------------------\n");
         unsigned char memchr1[11] = "1234567890";
         printf("memchr    return  | %s|\n", memchr(memchr1, '5', 10));
         printf("mx_memchr return  | %s|\n", mx_memchr(memchr1, '5', 10));
         unsigned char memchr2[11] = "1234567890";
         printf("memchr    return  | %s|\n", memchr(memchr2, 'x', 10));
         printf("mx_memchr return  | %s|\n", mx_memchr(memchr2, 'x', 10));
         unsigned char *memchr3 = NULL;
         printf("memchr    return  | %s|\n", memchr(memchr3, '6', 0));
         printf("mx_memchr return  | %s|\n", mx_memchr(memchr3, '6', 0));

     mx_printstr("\n----------------MX_MEMRCHR-------------------\n");
         unsigned char memrchr1[11] = "1234567890";
         printf("mx_memrchr return 567890 | %s|\n", mx_memrchr(memrchr1, '5', 10));
         unsigned char memrchr2[11] = "1234567890";
         printf("mx_memrchr return (null) | %s|\n", mx_memrchr(memrchr2, 'x', 10));
         unsigned char *memrchr3 = NULL;
         printf("mx_memrchr return (null) | %s|\n", mx_memrchr(memrchr3, '6', 0));

     mx_printstr("\n----------------MX_MEMMEM-------------------\n");
         unsigned char memmem_big1[10] = "Hello Neo";
         unsigned char memmem_little1[4] = "Neo";
         size_t big_len1 = 10;
         size_t little_len1 = 4;
         printf("memmem    return  |%s|\n", memmem(memmem_big1, big_len1, memmem_little1, little_len1));
         printf("mx_memmem return  |%s|\n", mx_memmem(memmem_big1, big_len1, memmem_little1, little_len1));
         unsigned char *memmem_big2 = NULL;
         unsigned char memmem_little2[4] = "Neo";
         size_t big_len2 = 0;
         size_t little_len2 = 4;
         printf("memmem    return  |%s|\n", memmem(memmem_big2, big_len2, memmem_little2, little_len2));
         printf("mx_memmem return  |%s|\n", mx_memmem(memmem_big2, big_len2, memmem_little2, little_len2));
         size_t big_len3 = 10;
         size_t little_len3 = 0;
         printf("memmem    return  |%s|\n", memmem(NULL, big_len3, NULL, little_len3));
         printf("mx_memmem return  |%s|\n", mx_memmem(NULL, big_len3, NULL, little_len3));
         unsigned char memmem_big4[10] = "Hello Neo";
         unsigned char memmem_little4[4] = "XAH";
         size_t big_len4 = 10;
         size_t little_len4 = 4;
         printf("memmem    return  |%s|\n", memmem(memmem_big4, big_len4, memmem_little4, little_len4));
         printf("mx_memmem return  |%s|\n", mx_memmem(memmem_big4, big_len4, memmem_little4, little_len4));

     mx_printstr("\n----------------MX_MEMMOVE-------------------\n");
         char src1[] = "******************************";
         char dest1[] = "abcdefghijklmnopqrstuvwxyz0123456789";
         memmove(dest1, src1, 26);
         printf("memmove    return |%s|\n",dest1);
         char src2[] = "******************************";
         char dest2[] = "abcdefghijklmnopqrstuvwxyz0123456789";
         mx_memmove(dest2, src2, 26);
         printf("mx_memmove return |%s|\n",dest2);

         char src3[] = "******************************";
         char *dest3 = NULL;
         memmove(dest3, src3, 0);
         printf("memmove    return |%s|\n",dest3);
         char src4[] = "******************************";
         char *dest4 = NULL;
         mx_memmove(dest4, src4, 0);
         printf("mx_memmove return |%s|\n",dest4);

         char *src5 = NULL;
         char dest5[] = "abcdefghijklmnopqrstuvwxyz0123456789";
         memmove(dest5, src5, 0);
         printf("memmove    return |%s|\n", dest5);
         char *src6 = NULL;
         char dest6[] = "abcdefghijklmnopqrstuvwxyz0123456789";
         mx_memmove(dest6, src6,0);
         printf("mx_memmove return |%s|\n", dest6);

     mx_printstr("\n----------------MX_REALLOC-------------------\n");
         char *ptr1 = NULL;
         ptr1 = (char *) malloc(17);
         strcpy(ptr1, "This is 16 chars");
         printf("Ptr1 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr1, (long int)ptr1);
         ptr1 = realloc(ptr1, 10);
         printf("Ptr1 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr1, (long int)ptr1);
         char *ptr2 = NULL;
         ptr2 = (char *) malloc(17);
         strcpy(ptr2, "This is 16 chars");
         printf("Ptr2 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr2, (long int)ptr2);
         ptr2 = mx_realloc(ptr2, 10);
         printf("Ptr2 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr2, (long int)ptr2);
         char *ptr3 = NULL;
         ptr3 = (char *) malloc(10);
         strcpy(ptr3, "123456789");
         printf("Ptr3 result after use LIBC realloc:  |%s| \t\t\t    Pointer address|%lu|\n", ptr3, (long int)ptr3);
         ptr3 = realloc(ptr3, 34);
         mx_strcat(ptr3, "+Added 25 more characters");
         printf("Ptr3 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr3, (long int)ptr3);
         char *ptr4 = NULL;
         ptr4 = (char *) malloc(10);
         strcpy(ptr4, "123456789");
         printf("Ptr4 result after use MY mx_realloc: |%s| \t\t\t    Pointer address|%lu|\n", ptr4, (long int)ptr4);
         ptr4 = mx_realloc(ptr4, 34);
         mx_strcat(ptr4, "+Added 25 more characters");
         printf("Ptr4 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr4, (long int)ptr4);
         char *ptr5 = NULL;
         ptr5 = (char *) malloc(10);
         printf("Ptr5 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr5, (long int)ptr5);
         ptr5 = realloc(ptr5, 17);
         printf("Ptr5 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr5, (long int)ptr5);
         char *ptr6 = NULL;
         ptr6 = (char *) malloc(10);
         printf("Ptr6 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr6, (long int)ptr6);
         ptr6 = realloc(ptr6, 17);
         printf("Ptr6 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr6, (long int)ptr6);
         char *ptr7 = NULL;
         ptr7 = (char *) malloc(10);
         strcpy(ptr7, "XXXXXXXXX");
         printf("Ptr7 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr7, (long int)ptr7);
         ptr7 = realloc(ptr7, 0);
         printf("Ptr7 result after use LIBC realloc:  |%s|   \t   Pointer address|%lu|\n", ptr7, (long int)ptr7);
         char *ptr8 = NULL;
         ptr8 = (char *) malloc(10);
         strcpy(ptr8, "XXXXXXXXX");
         printf("Ptr8 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr8, (long int)ptr8);
         ptr8 = mx_realloc(ptr8, 0);
         printf("Ptr8 result after use MY mx_realloc: |%s|   \t   Pointer address|%lu|\n\n", ptr8, (long int)ptr8);
         char *ptr9 = NULL;
         ptr9 = (char *) malloc(10);
         strcpy(ptr9, "123456789");
         printf("Ptr9 result after use LIBC realloc:   |%s|  Pointer address|%lu|\n", ptr9, (long int)ptr9);
         ptr9 = realloc(ptr9, -1);
         printf("Ptr9 result after use LIBC realloc:   |%s|     Pointer address|%lu|\n", ptr9, (long int)ptr9);
         char *ptr10 = NULL;
         ptr10 = (char *) malloc(10);
         strcpy(ptr10, "123456789");
         printf("Ptr10 result after use MY mx_realloc: |%s|  Pointer address|%lu|\n", ptr10, (long int)ptr10);
         ptr10 = mx_realloc(ptr10, -1);
         printf("Ptr10 result after use MY mx_realloc: |%s|     Pointer address|%lu|\n\n", ptr10, (long int)ptr10);


     mx_printstr(" *************************************\n *\t\tLIST PACK\t     *\n *************************************\n\n");
     mx_printstr("\n----------------MX_CREATE_NODE-------------------\n");
         char *create_node_str = "HEAD";
         t_list *create_node = mx_create_node(create_node_str), *head = create_node;
         for (int i = 0; create_node; i++) {
             char *buf = (char *)create_node->data;
             mx_printstr("mx_create_node return \"HEAD\"? | "); mx_printstr(buf); mx_printstr("\n");
             create_node = create_node->next;
         }
         free(create_node), free(head);

     mx_printstr("\n\n----------------MX_PUSH_FRONT-------------------\n");
         char *front_str = "HEAD", *front_str1 = "STR1", *front_str2 = "STR2", *front_str3 = "STR3";
         t_list *front_new_list = NULL;
         mx_push_front(&front_new_list, front_str3);
         mx_push_front(&front_new_list, front_str2);
         mx_push_front(&front_new_list, front_str1);
         mx_push_front(&front_new_list, front_str);
         t_list *front_head = front_new_list;
         mx_printstr("mx_push_front return \"HEAD\" \"STR1\" \"STR2\" \"STR3\"? | ");
         for (int i = 0; front_new_list; i++) {
             char *buf = (char *)front_new_list->data;
             mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
             front_new_list = front_new_list->next;
         }
         mx_printstr("\n");
         while (front_new_list)
             mx_pop_front(&front_new_list);
         while (front_head)
             mx_pop_front(&front_head);

     mx_printstr("\n\n----------------MX_PUSH_BACK-------------------\n");
         char *back_str = "HEAD", *back_str1 = "STR1", *back_str2 = "STR2", *back_str3 = "STR3";
         t_list *back_new_list = NULL;
         mx_push_back(&back_new_list, back_str);
         mx_push_back(&back_new_list, back_str1);
         mx_push_back(&back_new_list, back_str2);
         mx_push_back(&back_new_list, back_str3);
         t_list *back_head = back_new_list;
         mx_printstr("mx_push_back return \"HEAD\" \"STR1\" \"STR2\" \"STR3\"? | ");
         for (int i = 0; back_new_list; i++) {
             char *buf = (char *)back_new_list->data;
             mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
             back_new_list = back_new_list->next;
         }
         mx_printstr("\n");
         while (back_new_list)
             mx_pop_front(&back_new_list);
         while (back_head)
             mx_pop_front(&back_head);

     mx_printstr("\n\n----------------MX_POP_FRONT-------------------\n");
         char *pop_front_str = "HEAD", *pop_front_str1 = "STR1", *pop_front_str2 = "STR2", *pop_front_str3 = "STR3";
         t_list *pop_front_new_list = NULL;
         mx_push_back(&pop_front_new_list, pop_front_str), mx_push_back(&pop_front_new_list, pop_front_str1), mx_push_back(&pop_front_new_list, pop_front_str2), mx_push_back(&pop_front_new_list, pop_front_str3);
         mx_printstr("list before pop_front is | ");
         for (int i = 0; pop_front_new_list; i++) {
             char *buf = (char *)pop_front_new_list->data;
             mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
             mx_pop_front(&pop_front_new_list);
         }
         mx_printstr("\n");
         mx_push_back(&pop_front_new_list, pop_front_str), mx_push_back(&pop_front_new_list, pop_front_str1), mx_push_back(&pop_front_new_list, pop_front_str2), mx_push_back(&pop_front_new_list, pop_front_str3);
         mx_printstr("list after pop_front is without \"HEAD\" | ");
         mx_pop_front(&pop_front_new_list);
         for (int i = 0; pop_front_new_list; i++) {
             char *buf = (char *)pop_front_new_list->data;
             mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
             mx_pop_front(&pop_front_new_list);
         }
         mx_printstr("\n");

     mx_printstr("\n\n----------------MX_POP_BACK-------------------\n");
         char *pop_back_str = "HEAD", *pop_back_str1 = "STR1", *pop_back_str2 = "STR2", *pop_back_str3 = "STR3";
         t_list *pop_back_new_list = NULL;
         mx_push_back(&pop_back_new_list, pop_back_str), mx_push_back(&pop_back_new_list, pop_back_str1), mx_push_back(&pop_back_new_list, pop_back_str2), mx_push_back(&pop_back_new_list, pop_back_str3);
         mx_printstr("list before pop_front is | ");
         for (int i = 0; pop_back_new_list; i++) {
             char *buf = (char *)pop_back_new_list->data;
             mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
             mx_pop_front(&pop_back_new_list);
         }
         mx_printstr("\n");
         mx_push_back(&pop_back_new_list, pop_back_str), mx_push_back(&pop_back_new_list, pop_back_str1), mx_push_back(&pop_back_new_list, pop_back_str2), mx_push_back(&pop_back_new_list, pop_back_str3);
         mx_printstr("list after pop_front is without \"STR3\" | ");
         mx_pop_back(&pop_back_new_list);
         for (int i = 0; pop_back_new_list; i++) {
             char *buf = (char *)pop_back_new_list->data;
             mx_printstr("\""); mx_printstr(buf); mx_printstr("\""); mx_printstr(" ");
             mx_pop_front(&pop_back_new_list);
         }
         mx_printstr("\n");

     mx_printstr("\n\n----------------MX_LIST_SIZE-------------------\n");
         char *list_size_str = "HEAD", *list_size_str1 = "STR1", *list_size_str2 = "STR2", *list_size_str3 = "STR3";
         t_list *size_new_list = NULL;
         mx_push_back(&size_new_list, list_size_str), mx_push_back(&size_new_list, list_size_str1), mx_push_back(&size_new_list, list_size_str2), mx_push_back(&size_new_list, list_size_str3);
         int list_size = mx_list_size(size_new_list);
         mx_printstr("list size is 4? | "); mx_printint(list_size); mx_printstr("\n");

     mx_printstr("\n\n----------------MX_SORT_LIST-------------------\n");
         t_list *sort_new_list = NULL;
         mx_push_front(&sort_new_list, (void *) 2);
         mx_push_front(&sort_new_list, (void *) 5);
         mx_push_front(&sort_new_list, (void *) 3);
         mx_push_front(&sort_new_list, (void *) 923);
         mx_push_front(&sort_new_list, (void *) 13);
         mx_push_front(&sort_new_list, (void *) 4);
         mx_push_front(&sort_new_list, (void *) 43);
         mx_push_front(&sort_new_list, (void *) 33);
         mx_push_front(&sort_new_list, (void *) 1);
         mx_printstr("mx_sort_list return 1 2 3 4 5 13 33 43 923? | ");
         mx_sort_list(sort_new_list, cmp_sort_list);
         for (int i = 0; sort_new_list; i++) {
             int buf = (int)sort_new_list->data;
             mx_printint(buf); mx_printstr(" ");
             sort_new_list = sort_new_list->next;
         }
         mx_printstr("\n");
//
//     mx_printstr("\n\n----------------MX_ATOI-------------------\n");
//     mx_printint(atoi("-2147483648")); mx_printstr("\n");
//     mx_printint(atoi("-11")); mx_printstr("\n");
//     mx_printint(atoi("-1")); mx_printstr("\n");
//     mx_printint(atoi("0")); mx_printstr("\n");
//     mx_printint(atoi("1")); mx_printstr("\n");
//     mx_printint(atoi("11")); mx_printstr("\n");
//     mx_printint(atoi("2147483647")); mx_printstr("\n");
//     mx_printint(atoi("-9223372036854775809")); mx_printstr("\n");
//     mx_printint(atoi("-9223372036854775809")); mx_printstr("\n");
//     mx_printint(atoi("9223372036854775806")); mx_printstr("\n");
//     mx_printint(atoi("9223372036854775806")); mx_printstr("\n");
//
     system("leaks -q a.out");
}*/


//32456789087654356789087(*&^%$#@%$%^&*()_)(*&^%$#@#$%^&*()_(*&^%$#@$%^&*()(*&^%$#@#$%^&*()_)(*&^%$#^&*())(*&^%$#@#$%)(*&^%$#@#$%^&*()_)(*&^%$##$%^&*()_*^%$#

/* static int my_char_bulb(char **arr_x, int size) {
     char *bulb;
     int swap = 0;

     for (int i = 0; i < size; i++) {
         for (int j = 0; j < size - i - 1; j++) {
             if (mx_strlen(arr_x[j]) > mx_strlen(arr_x[j + 1])) {
                 bulb = arr_x[j];
                 arr_x[j] = arr_x[j + 1];
                 arr_x[j + 1] = bulb;
                 swap++;
             }
         }
     }
     return swap;
 }*/



int main (int argc, char *argv[]) {
    int x;

    if (argc) {
        if (argv)
            x = 0;
        x = 1;
    }

    mx_print_unicode_str(" 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 \n "
                " 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 \tUTILS PACK     78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 \n "
                " 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 78008 \n\n");
//
    mx_printstr("------------------------------------------Mx_Print_unicode----------------------------\n\n");
    mx_printstr("126 (~) = "); mx_print_unicode(126); mx_printstr("\n");
    mx_printstr("33 (!) = "); mx_print_unicode(33); mx_printstr("\n");
    mx_printstr("937 (OMEGA) = "); mx_print_unicode(937); mx_printstr("\n");
    mx_printstr("2538 (8) = "); mx_print_unicode(2538); mx_printstr("\n");
    mx_printstr("128579 (smile_down) = "); mx_print_unicode(128579); mx_printstr("\n");
    mx_printstr("4053 (swastik) = "); mx_print_unicode(4053); mx_printstr("\n");
    mx_printstr("1 bytes:\n"); mx_print_unicode(65); mx_printstr("\n");
    mx_printstr("2 bytes:\n"); mx_print_unicode(162); mx_printstr("\n");
    mx_printstr("3 bytes:\n"); mx_print_unicode(8364); mx_printstr("\n");
    mx_printstr("4 bytes:\n"); mx_print_unicode(128525); mx_printstr("\n");
    mx_printstr("4 bytes:\n"); mx_print_unicode(78008); mx_printstr("\n");
//
//
//    // printf("------------------------------------------PRINTSTR-------------------------------\n\n\n");
//
//
//    // printf("------------------------------------------Mx_Printchar----------------------------\n");
//    // mx_printchar('c');
//    // mx_printchar('\n');
//    // mx_printchar('f');
//    // mx_printchar('\n');
//    // mx_printchar('e');
//    // mx_printstr("\n\n\n\n");
//
//
//
//     mx_printstr("----------------------------------------Mx_Printint--------------------------------\n");
//     mx_printint(2333);
//     mx_printchar('\n');
//     mx_printint(-23);
//     mx_printchar('\n');
//     mx_printint(543);
//     mx_printchar('\n');
//     mx_printint(-2147483648);
//     mx_printchar('\n');
//     mx_printint(432);
//     mx_printstr("\n\n");
//
//
//
//     printf("------------------------------------------------Mx_sqrt--------------------------------------\n");
//     printf ("%d\t", mx_sqrt(21));   printf("21\n");
//     printf ("%d\t", mx_sqrt(121));  printf("121\n");
//     printf ("%d\t", mx_sqrt(4));  mx_atoi(&str[i])  printf("4\n");
//     printf ("%d\t", mx_sqrt(-6));    printf("-6\n");
//     printf ("%d\t", mx_sqrt(9));    printf("9\n");
//     printf ("%d\t", mx_sqrt(4832)); printf("4832\n");
//     printf ("%d\t", mx_sqrt(16));   printf("16\n");
//     printf ("%d\t", mx_sqrt(3));    printf("3\n");
//     printf ("%d\t", mx_sqrt(2));    printf("2\n");
//     printf ("%d\t", mx_sqrt(144));  printf("144\n");
//      printf("\n\n");
//
//     printf("---------------------------------------------Mx_Pow--------------------------------------------\n");
//     printf("3, 5\t");   printf("%f\n", mx_pow(-3, 4));
//     printf("2.5, 3\t"); printf("%f\n", mx_pow(2.5, 3));
//     printf("9, 3\t");   printf("%f\n", mx_pow(9, 3));
//     printf("\n\n");
//
//
//     printf("-----------------------------------------------Mx_Print_Strarr------------------------------------\n");
//     char *str_strar[] = {"eqwed", "4gfgytr", "start", "fadrwe", "sfhre", NULL};
//     char *delim_strar = " ";
//     mx_print_strarr(str_strar, delim_strar);
//     printf("\n\n\n\n");
//
//     printf("---------------------------------------------Mx_Nbr_To_Hex----------------------------------------\n");
//     printf("%s\n", mx_nbr_to_hex(1000));
//     printf("%s\n", mx_nbr_to_hex(255));
//     printf("%s\n", mx_nbr_to_hex(1023));
//     printf("%s\n", mx_nbr_to_hex(52));
//     printf("%s\n", mx_nbr_to_hex(11));
//     printf("%s\n", mx_nbr_to_hex(10));
//     printf("%s\n", mx_nbr_to_hex(0));
//
////     printf("----------------------------------------------Mx_Hex_To_Nbr----------------------------------------\n");
////     printf("%lu\n", mx_hex_to_nbr("FF"));
////     printf("%lu\n", mx_hex_to_nbr("F34"));
////     printf("%lu\n", mx_hex_to_nbr("FADE"));
////     printf("%lu\n", mx_hex_to_nbr("A"));
////     printf("%lu\n", mx_hex_to_nbr("21d"));
////     printf("%lu\n", mx_hex_to_nbr("5g"));
////     printf("%lu\n", mx_hex_to_nbr("GG"));
////    printf("%lu\n", mx_hex_to_nbr("1ff"));
//
//
//     printf ("-----------------------------------Mx_Itoa-----------------------------------------------------------\n");
//     printf ("%s\n", mx_itoa(3));
//     printf ("%s\n", mx_itoa(32));
//     printf ("%s\n", mx_itoa(56436));
//     printf ("%s\n", mx_itoa(-32));
//     printf ("%s\n", mx_itoa(-2));
//     printf ("%s\n", mx_itoa(0));
//     //system ("leaks -q a.out");
//
//     printf("--------------------------------------------------Mx_Binary_Search----------------------------------------\n");
//     char *arr_bin_ser[] = {"222", "Abcd", "aBc", "ab", "az", "z"};
//     int count_bin_ser = 0;
//     printf("%d\n", mx_binary_search(arr_bin_ser, 6, "aBc", &count_bin_ser));
//     printf("%d\n", count_bin_ser);
//
//     printf("---------------------------------------------------Mx_Bubble_Sort-------------------------------------------\n");
//     char *arr_bs[] = {"abc", "xyz", "ghi", "def"};
//     printf("%d\n", mx_bubble_sort(arr_bs, 4));
//     char *arr_bs1[] = {"abc", "acb", "a"};
//     printf("%d\n", mx_bubble_sort(arr_bs1, 3));
//
//    printf("---------------------------------------------------Mx_quick_Sort-------------------------------------------\n");
//
//    char *arr_qs1[] = {"DMC", "Clint Eastwood", "Dr BRown", "Einstein", "Jessica", "Biff Tannen"};
//    int size_qs1 = 6;
//    printf("\nswap = %d\n", mx_quicksort(arr_qs1, 0, 5));
////    printf("\nswap = %d\n", my_char_bulb(arr1, size1));
//    for (int i = 0; i < size_qs1; i++)
//        printf("%s\n", arr_qs1[i]);
//
//    char *arr_qs[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
////    int size = 4;
//
//    printf("\nswap = %d\n", mx_quicksort(arr_qs, 0, 3));
////    printf("\nswap = %d\n", my_char_bulb(arr, size));
//    for (int i = 0; i < 4; i++)
//        printf("%s\n", arr_qs[i]);
//
//     char *arr_x[] = {"sh1 2cmHHB8sLNW6",
//                      "mzzaT6euQk",
//                      " 1QPp TrHdJ",
//                      "Rp3yM9ULFo2tIx",
//                         "EXTRA_CASE",
//                      "2a I0rOnF1fPEhx8",
//                      " pPlALd2nv",
//                      "dPA4tD WNMP",
//                      "s5oVwbyY5AGfn18nk",
//                      "YtoTeo2ZsvPatqkPd 5",
//                         "Gwoj13RsP54 8O",
//                         "T8m V0jeMY1Uj7GX",
//                         "QznGCNEc4o",
//                         "d4g3ogpmCM2NWyfBUa",
//                         "U L9aitSY8SqNW",
//                         "nImrhTZ6VX2ccD2",
//                         "dS90H3wbPRZiWCDvofxf",
//                         "KUTaUPXRIfeWyKS",
//                         "D9DuyiPmhn",
//                         "N2h0fv8A3KvDuR6",
//                         "GGKBJTtWJhfJ8y0g",
//                         "Zdmy2 kqIYov7mg517",
//                         " 8MjhlX lbse",
//                         "d gd tdfK 15Oc O9z6G",
//                         "wbUj67zdEaHFwTLf",
//                         "GyeL0Dphbj9TDkulc",
//                         "t0 C26SUTGW1NF Ow7AH",
//                         " I8wXo2AH9x",
//                         "biTXR4x3MM4Jn",
//                         "BSJ2gbZ7ngWyKLPh4WG",
//                         " PAW1tm j7pPZ",
//                         "FRLx6 eG0xxF11 TZ",
//                         "zMfFYH 0 1",
//                         "iUYJZMd9AY9Rn",
//                         "JpEGFgo nw",//34
//                         "JGz 1GoR4sT8vo",
//                         "zP3YaZ2YhS70KWuAl",
//                         "dY5s5G0 IBbAJf2WtUu",
//                         "4fhwxKNI9ZUzvT",
//                         "iLKeq VRBS",
//                         "2kEkMk3trwy Ddeic G",
//                         "vF5iBXg21 mMy5r",
//                         "f k a0s33mh0 ZQ",
//                         "b 1gHsw3MUgHniKh",
//                         "yyLMylI1eqm SoOu6uxG",
//                         "nxFhzHEmUa7Blo",
//                         "WcIHu36RwQAvxb1VQ",
//                         "toIF0Lo6dil9y2XO0",
//                         "g8pRaAf4x35H9",
//                         "dc0sEDcsxJYn6",
//                         "v 3ilYe4tq9H",
//                         "t yBJnea J ",
//                         " baCr CGDC775R",
//                         "G6ZpwQ3MKWbi xW",
//                         " ",
//                         "WKkCjOYkyzAUfILsIdHg",
//                         "v41MQ9Y xrYG4Ot",
//                         "hcj OrVsE5",
//                         "AXCs9giIZ93 giC ons",
//                         " OHmyRuN6JUa2o",
//                         " J sM Ow MF z2Ht",
//                         "BCqRcwwSr3",
//                         "sJOOonVJMBAblJM ",
//                         "9nXhS72u9Ap RKX",
//                         "9PsPtfyIE XHevg",
//                         "qann6ywHfbX",
//                         "NKxbStcEwBG",
//                         "QpAUp7NzPbJcRzHexx ",
//                         "45rXr ATF2VEsn",
//                         "pEg47yOqQX O1R",
//                         "VL UOYcTiy9Rrp1nFc1",
//                         "zSZHqte1v2sfe",
//                         "pR4hjTQFJtElUoe BC",
//                         "8Da KNB1TP3mc",
//                         "iSXXMiwU IFSPcqb17oM",
//                         "PY2INvibcpF",
//                         "q9CNYOEYxvCB",
//                         "we ugIeWWP7RX8G",
//                         "Ac1f kSYkcBfj9ll",
//                         "TuweyM FWHDM0M28C",
//                         "W0qKPDH9 NanR",
//                         " 0 WPc4R9PfMU5l",
//                         " vkFwWCKMoS",
//                         "gdRTYp9Ah4I2JV",
//                         "ttjXKrYs9kYwyo",
//                         "7IoLCoABlQwS1m",
//                         "yrJ8IP7Xn W dCI ozK",
//                         "1ZdN45zdcCKBiu4",
//                         "R4pCwi8XGaGxB",
//                         "Tib1L0CX5gvKACC5",
//                         "LWMOw4BbC5Nx",
//                         "OOZx6TD cl9MbPGOAqS",
//                         "l 1wtjbE3p80",
//                         "GbwhhKxKkq",
//                         "kax4N ZB9XKG",
//                         "pFeWRk70J98UuD ",
//                         "VXdkB65e MHRKiT rI",
//                         "7b57MsawFn4mJ",
//                         "4WExjCDhAZ",
//                         "cH 4UdsS8A7yzL8ec",
//                         "4XfIyKnrwi7F",
//                         "H6zacnow0F5vP "};
//     //int size1 = 6;
//     printf("\nswap = %d\n", mx_quicksort(arr_x, 2, 101));
////     printf("\nswap = %d\n", my_char_bulb(arr_x, 101));
//     for (int i = 0; i < 102; i++)
//         printf("%s\n", arr_x[i]);

//    mx_sort_arr_char(arr, size);
//    for (int i = 0; i < size; i++)
//        printf("%s\n", arr[i]);
//    for (int i = 0; i < size; i++)
//        printf("%d\n", mx_strlen(arr[i]));
//
//
//
//
//
//    printf("---------------------------------------------------Mx_quick_Sort_int-------------------------------------------\n");
//    int arr[] = {2,567,8765,4, 687, 2352, 876, 34, 9, -4578, -67, 456, 0, 34, -123};
//    int size = 15;
//
//    printf("swaps = %d\n", mx_quicksort_int(arr, 0, size - 1));
//    for (int i = 0; i < size; i++)
//        printf("%d\n", arr[i]);
//
//    printf(" **********************\n "
//                   "*\tSTRING PACK   *\n "
//                   "**********************\n\n");
//
//      printf("---------------------------------------------Mx_Strlen------------------------------------\n");
//     //printf("%d\n", mx_strlen(NULL));
//     printf("%d\n", mx_strlen("fasfafeaf43524sdvdfx dgd sfg"));
//     printf("%d\n", mx_strlen("glfhljuiewrywrwegre"));
//     printf("%d\n", mx_strlen("SAsfdgjfhdugdifuga"));
//     printf("%d\n", mx_strlen("SAsayojiyvzsdf`dkmhs4 34 36 ts f"));
//     printf("%d\n", mx_strlen("SAsakhjgf reu9h  8437 hfj sg"));
//     printf("%d\n", mx_strlen("SAsa rdib ethhr t2"));
//     printf("\n\n\n\n");
//
//     printf("--------------------------------------------------Mx_Swap_Char--------------------------------------------------\n");
//    char str_swap[] = "Tuckint Fesg";
//   mx_swap_char(&str_swap[0], &str_swap[8]);
//   mx_swap_char(&str_swap[6], &str_swap[11]);
//   printf("%s\n", str_swap);
//
//     char str_swap1[] = "ONE";
//     mx_swap_char(&str_swap1[0], &str_swap1[1]);
//     printf("%s\n", str_swap1);
//     mx_swap_char(&str_swap1[1], &str_swap1[2]);
//     printf("%s\n", str_swap1);
//
//     mx_swap_char(NULL, NULL);
//     printf("%s\n", str_swap1);
//
//
//     printf("-----------------------------------------------------Mx_Str_Reverse-----------------------------------------------------------\n");
//     char *rev = NULL;
//     mx_str_reverse(rev);
//     printf("%s\n", rev);
//     char rev1[] = "tseT\n"
//                   " gnikcuF";
//     mx_str_reverse(rev1);
//     printf("%s\n", rev1);
//
//    printf("----------------------------------------------------------Mx_Strdel---------------------------------------------------------------\n");
//     char *str_del[] = {"23fa", "gfdj", "gdffd"};
//     *str_del = mx_strnew(4);
//     mx_strdel(str_del);
//     printf("%s\n", *str_del);
//
//        char *strdel = mx_strdup("full string");
//
//        printf("before mx_strdel string is \"full string\"? | ");
//         printf("%s", strdel);
//         printf("\n");
//         mx_strdel(&strdel);
//
//         printf("after mx_strdel string is (null)? | ");
//         printf("%s\n", strdel);
//        //system("leaks -q a.out");
//
//     printf("----------------------------------------------------Mx_Del_Strarr-------------------------------------------------------------------\n");
//         char **strarr = (char **)malloc(sizeof(char *) * 3);
//         strarr[0] = strdup("abc");
//         strarr[1] = strdup("xyz"); strarr[2] = (NULL);
//         printf("strarr before mx_del_strarr is abc  xyz  (null)? | ");
//         printf("%s  %s  %s\n", strarr[0], strarr[1], strarr[2]);
//         mx_del_strarr(&strarr);
//         printf("strarr after mx_del_strarr is (null)? | ");
//         printf("%s\n", (char *) strarr);
//
////        char **arr_strar = (char **)malloc(sizeof(char *) * 4);
////    arr_strar[0] = (char *)malloc(sizeof(char) * 5);
////    arr_strar[0] = "rfgh";
////    arr_strar[1] = (char *)malloc(sizeof(char) * 6);
////    arr_strar[1] = "3 4 5";
////    arr_strar[2] = (char *)malloc(sizeof(char) * 1);
////    arr_strar[2] = "";
////    arr_strar[3] = (char *)malloc(sizeof(char) * 5);
////    arr_strar[3] = NULL;
////
////
////    printf("|%s| |%s| |%s| |%s|\n", arr_strar[0], arr_strar[1], arr_strar[2], arr_strar[3]);
////    mx_del_strarr(&arr_strar);
////    printf("%s %s %s %s", arr_strar[0], arr_strar[1], arr_strar[2], arr_strar[3]);
//
//    char **strarr2 = (char **)malloc(sizeof(char *) * 3);
//
//    strarr2[0] = strdup("abc"); strarr2[1] = strdup("xyz"); strarr2[2] = NULL;
//    printf("strarr before mx_del_strarr is abc  xyz  (null)? | ");
//    printf("%s  %s  %s\n", strarr2[0], strarr2[1], strarr2[2]);
//    mx_del_strarr(&strarr2);
//    printf("strarr after mx_del_strarr is (null)? | "); printf("%s\n", (char *) strarr2);
//
////    printf("---------------------------------------------------------Mx_Get_Char_Index-----------------------------------------------------------\n");
////    char str_char_i[] = "TTTThe best";
////    char *nul = NULL;
////    printf("%d\n", mx_get_char_index(str_char_i, 'r'));
////    printf("%d\n", mx_get_char_index(str_char_i, 't'));
////    printf("%d\n", mx_get_char_index(str_char_i, 'T'));
////    printf("%d\n", mx_get_char_index(nul, 'T'));
//    //printf("%d", mx_get_char_index(str_char_i, NULL));
//    //system("leaks -q a.out");
//
//    printf("---------------------------------------------------------Mx_strdup-----------------------------------------------------------\n");
//    //char *strd = NULL;
//    printf("%s\n", mx_strdup("234567fgh"));
//    printf("%s\n", strdup("234567fgh"));
////    printf("%s\n", mx_strdup(""));
////    printf("%s\n", strdup(""));
////    printf("%s\n", mx_strdup(strd));
////    printf("%s\n", strdup(strd));
//   // system("leaks -q a.out");
//
//     printf("---------------------------------------------------------Mx_strndup-----------------------------------------------------------\n");
//    char *strnd = NULL;
//    printf("%s\n", mx_strndup(strnd, 0));
//    printf("%s\n", strndup(strnd, 0));
//    //printf("%s\n", mx_strndup("", 0));
//    //printf("%s\n", strndup("", 0));
////    printf("%s\n", mx_strndup(strnd));
////    printf("%s\n", strndup(strnd));
//    system("leaks -q a.out");
//
//    printf("----------------------------------------Mx_Print_STRARr--------------------------------\n");
//    char *arr_strarr[] = {"456\n78fg", "fghjkl    DFGHJ", "#$%^&*DFgf", NULL};
//    char *delim_strarr = " DELIM ";
//    mx_print_strarr(arr_strarr, delim_strarr);
//
//    printf("----------------------------------------Mx_nbr_to_hex--------------------------------\n");
//    unsigned long nbr_to = 511;
//    char *to_hex;
//
//    to_hex = mx_nbr_to_hex(nbr_to);
//    printf("%s\n", to_hex);
//    //printf("%s", );
//
//    printf("----------------------------------------Mx_strcat--------------------------------\n");
//    char s1_cat[] = "34rtghu7";
// 	char s2_cat[] = "5";
// 	printf("%s\n", mx_strcat(s1_cat, s2_cat));
//
////    char s11_cat[] = "34rtghu7";
////    char s22_cat[] = "5";
////    printf("%s\n", strcat(s11_cat, s22_cat));
//
// 	//printf("%s", s3);
//    printf("----------------------------------------Mx_strstr--------------------------------\n");
//    char s1_str[] = "qwertyui45678 $%^& tyhjm";
//     char s2_str[] = "tyui";
//     printf("origin: %s\n", strstr(s1_str, s2_str));
//     printf("my    : %s\n", mx_strstr(s1_str, s2_str));
//
//    printf("----------------------------------------mx_get_substr_index--------------------------------\n");
//    char str_get_str_i[] = "McDonalds";
//    char sub_get_str_i[] = "Don";
//
//   printf("%d\n", mx_get_substr_index(str_get_str_i, sub_get_str_i)); //returns 2
//    printf("%d\n", mx_get_substr_index("McDonalds", "Don")); //returns 2
//    printf("%d\n", mx_get_substr_index("McDonalds Donuts", "on")); //returns 3
//    printf("%d\n", mx_get_substr_index("McDonalds", "Donatello")); //returns -1
//    printf("%d\n", mx_get_substr_index("McDonalds", NULL)); //returns -2
//    printf("%d\n", mx_get_substr_index(NULL, "Don")); //returns -2
//
//    printf("----------------------------------------Mx_strtrim--------------------------------\n");
//    char *name_trim = "\n     u    \no\np\r";
//    char *clear_trim;
//
//    clear_trim = mx_strtrim(name_trim);
//    printf("%s\n", clear_trim);
////    system("leaks -q a.out");
//
//    printf("----------------------------------------mx_del_extra_spaces--------------------------------\n");
//    char *name_space = "\f My name... is \r Neo \t\n \nda";
//    //char *name = " a  \na ";
//    char *clear_space;
//
//    clear_space = mx_del_extra_spaces(name_space);
//    printf("%s\n", clear_space);
////    system("leaks -q a.out");
//
//    mx_printstr("\n\n----------------MX_STRSPLIT-------------------\n");
//    char strsplit[] = "**Good bye,**Mr.*Anderson.****";
//    char **splited = mx_strsplit(strsplit, '*');
//    char strsplit2[] = "       Knock, knock,         Neo.         ";
//    char **splited2 = mx_strsplit(strsplit2, ' ');
//    char **splited3 = mx_strsplit(NULL, ' ');
//    printf("mx_strsolit return is \"Good bye,\" \"Mr.\" \"Anderson.\" (null)? | "); printf("\"%s\"  \"%s\"  \"%s\" \"%s\"\n", splited[0], splited[1], splited[2], splited[3]);
//    printf("mx_strsolit return is \"Knock,\" \"knock,\" \"Neo.\" (null)? | "); printf("\"%s\"  \"%s\"  \"%s\" \"%s\"\n", splited2[0], splited2[1], splited2[2], splited2[3]);
//    printf("mx_strsolit return (null)? | "); printf("%s\n", (char *)splited3);
//
//    char *s = "**Good bye,**Mr.*Anderson.****";
//    char **res_spl;
//    char delimetr_spl = '*';
//
//    res_spl = mx_strsplit(s, delimetr_spl);
//    for(int i = 0; i < mx_count_words(s, delimetr_spl); i++) {
//        printf("%s\n", res_spl[i]);
//    }
//
//    printf("----------------------------------------mx_file_to_str--------------------------------\n");
//    //char *s;
//
//    argc = argc * 1;
//    argc = argc * 1;
//    s = mx_file_to_str(argv[1]);
//    printf("%s\n", s);
////    system("leaks -q a.out");
//
//    printf("----------------------------------------mx_get_replace_substr--------------------------------\n");
//
//    printf("%s\n", mx_replace_substr("McDonalds", "alds", "uts"));//returns "McDonuts"
//    printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ta")); //returns "Utata tuta"
//    printf("%s\n", mx_replace_substr("Ururu turu", "ru", "i")); //returns "Uii tui"
//    printf("%s\n", mx_replace_substr("Ururu turu", "ru", "ata")); //returns "Uataata tuata"
//    printf("%s\n", mx_replace_substr("Ururu turu", "r", "t"));//returns "Ututu tutu"
//    //system("leaks -q a.out");
//
//    printf("----------------------------------------mx_read_line--------------------------------\n");
//    int fd = open("./4gvl1", O_RDONLY);
//    char *linptr[] = {"qwertyuikjhgfd", "dfghj5678", ")(*&^%$XCVBN"};
//    //char *linptr[] = {NULL};
//    for (int i = 0; i < 5; i++) {
//        mx_read_line(linptr, 4, 't', fd);
//        mx_printchar('\n');
//        mx_printstr(*linptr);
//    }
//
//    mx_printstr(" **********************\n "
//                   "*\tMEMORY PACK   *\n "
//                   "**********************\n\n");
//
//     printf("----------------------------------------mx_memset--------------------------------\n");
//    //char c[] = "456789fghj";
//    //int arr[] = {0};
//    int arr_memset[] = {2,4,6,7,7,8,7,6,5,4,3,5,6,7};
//    int *dst_memset = mx_memset(arr_memset,'1',1);
//    for (int i = 0; i < 1; i++)
//        printf("%d", dst_memset[i]);
//
//    printf("\n----------------------------------------mx_memcpy--------------------------------\n");
//     //char c[] = "456789fghj";
//     //int arr[] = {0};
//     char *arr_memcpy = "NertyULL";
//     char dst_memcpy[10];
//
//     mx_memcpy(dst_memcpy, arr_memcpy, 10);
//     for (int i = 0; i < 10; i++)
//         printf("%c ", dst_memcpy[i]);
//
//      printf("\n----------------------------------------mx_memccpy--------------------------------\n");
//      char *arr_ccpy = "N456ghbertyU456LL";
//      char dst_ccpy[17];
//
//      //memccpy(dst, arr, 'U', 17);
//      memccpy(dst_ccpy, arr_ccpy, 'z', 17);
//      //for (int i = 0; i < 10; i++)
//          printf("%s \n", dst_ccpy);
////    system("leaks -q a.out");
//
//    printf("\n----------------------------------------mx_memcmp--------------------------------\n");
//    char *arr_memcmp = "qwerT";
//    char *dst_memcmp = "qwer";
//
//    //memccpy(dst, arr, 'U', 17);
//    int a = mx_memcmp(dst_memcmp, arr_memcmp, 2);
//        printf("%d\n", a);
//
//   printf("----------------------------------------mx_memchr--------------------------------\n");
//    char *arr_chr = "qrrrrrwyyyyet ";
//    char chr_chr = 'z';
//    char *sym_chr;
//
//    sym_chr = memchr(arr_chr, chr_chr, 7);
//    printf("%s\n", sym_chr);
//
//   printf("----------------------------------------mx_memrchr--------------------------------\n");
//    char *sym_rchr = mx_memrchr("Trinity", 'i', 7); //returns "ity"
//    printf("%s\n", sym_rchr);
//    char *sym2_rchr = mx_memrchr("Trinity", 'M', 7); //returns NULL
//    printf("%s\n", sym2_rchr);
//    //system("leaks -q a.out");
//
//    printf("----------------------------------------mx_memmem--------------------------------\n");
//    char *c = "Helo my little Neo";
//    char *my = "my";
//
//    printf("%s\n", mx_memmem(c, 18, my, 2));
//
//    printf("----------------------------------------mx_memmove--------------------------------\n");
//    //char c[] = "456789fghj";
//    //int arr[] = {0};
//    char *arr_move = "NertyULL";
//    char dst_move[10];
//
//    mx_memmove(dst_move, arr_move, 10);
//    //for (int i = 0; i < 10; i++)
//        printf("%s ", dst_move);
//
//     mx_printstr("\n----------------MX_REALLOC-------------------\n");
//         char *ptr1 = NULL;
//         ptr1 = (char *) malloc(17);
//         strcpy(ptr1, "This is 16 chars");
//         printf("Ptr1 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr1, (long int)ptr1);
//         ptr1 = realloc(ptr1, 10);
//         printf("Ptr1 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr1, (long int)ptr1);
//
//         char *ptr2 = NULL;
//         ptr2 = (char *) malloc(17);
//         strcpy(ptr2, "This is 16 chars");
//         printf("Ptr2 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr2, (long int)ptr2);
//         ptr2 = mx_realloc(ptr2, 10);
//         printf("Ptr2 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr2, (long int)ptr2);
//
//         char *ptr3 = NULL;
//         ptr3 = (char *) malloc(10);
//         strcpy(ptr3, "123456789");
//         printf("Ptr3 result after use LIBC realloc:  |%s| \t\t\t    Pointer address|%lu|\n", ptr3, (long int)ptr3);
//         ptr3 = realloc(ptr3, 34);
//         mx_strcat(ptr3, "+Added 25 more characters");
//         printf("Ptr3 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr3, (long int)ptr3);
//
//         char *ptr4 = NULL;
//         ptr4 = (char *) malloc(10);
//         strcpy(ptr4, "123456789");
//         printf("Ptr4 result after use MY mx_realloc: |%s| \t\t\t    Pointer address|%lu|\n", ptr4, (long int)ptr4);
//         ptr4 = mx_realloc(ptr4, 34);
//         mx_strcat(ptr4, "+Added 25 more characters");
//         printf("Ptr4 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr4, (long int)ptr4);
//
//         char *ptr5 = NULL;
//         ptr5 = (char *) malloc(10);
//         printf("Ptr5 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr5, (long int)ptr5);
//         ptr5 = realloc(ptr5, 17);
//         printf("Ptr5 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr5, (long int)ptr5);
//
//         char *ptr6 = NULL;
//         ptr6 = (char *) malloc(10);
//         printf("Ptr6 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr6, (long int)ptr6);
//         ptr6 = realloc(ptr6, 17);
//         printf("Ptr6 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n\n", ptr6, (long int)ptr6);
//
//         char *ptr7 = NULL;
//         ptr7 = (char *) malloc(10);
//         strcpy(ptr7, "XXXXXXXXX");
//         printf("Ptr7 result after use LIBC realloc:  |%s|   Pointer address|%lu|\n", ptr7, (long int)ptr7);
//         ptr7 = realloc(ptr7, 0);
//         printf("Ptr7 result after use LIBC realloc:  |%s|   \t   Pointer address|%lu|\n", ptr7, (long int)ptr7);
//
//         char *ptr8 = NULL;
//         ptr8 = (char *) malloc(10);
//         strcpy(ptr8, "XXXXXXXXX");
//         printf("Ptr8 result after use MY mx_realloc: |%s|   Pointer address|%lu|\n", ptr8, (long int)ptr8);
//         ptr8 = mx_realloc(ptr8, 0);
//         printf("Ptr8 result after use MY mx_realloc: |%s|   \t   Pointer address|%lu|\n\n", ptr8, (long int)ptr8);
//
//         char *ptr9 = NULL;
//         ptr9 = (char *) malloc(10);
//         strcpy(ptr9, "123456789");
//         printf("Ptr9 result after use LIBC realloc:   |%s|  Pointer address|%lu|\n", ptr9, (long int)ptr9);
//         ptr9 = realloc(ptr9, -1);
//         printf("Ptr9 result after use LIBC realloc:   |%s|     Pointer address|%lu|\n", ptr9, (long int)ptr9);
//
//         char *ptr10 = NULL;
//         ptr10 = (char *) malloc(10);
//         strcpy(ptr10, "123456789");
//         printf("Ptr10 result after use MY mx_realloc: |%s|  Pointer address|%lu|\n", ptr10, (long int)ptr10);
//         ptr10 = mx_realloc(ptr10, -1);
//         printf("Ptr10 result after use MY mx_realloc: |%s|     Pointer address|%lu|\n\n", ptr10, (long int)ptr10);
//         system("leaks -q a.out");
         //
//    printf(" **********************\n "
//                   "*\tLIST PACK     "
//                   "*\n **********************\n\n");
//
//    printf("----------------------------------------mx_mcreate_node--------------------------------\n");
//
//    char *str0_list = "\n0 in node\n\n";
//    t_list *list1 = mx_create_node(str0_list);
//
////    for (;list1 != NULL; list1 = list1->next)
////        printf("%s", list1->data);
//
//    printf("----------------------------------------mx_push_font--------------------------------\n");
//
//    char *str1_list = "-1 in front\n";
//
//    mx_push_front(&list1, str1_list);
//    mx_push_front(&list1, "-2 in front\n");
//    mx_push_front(&list1, "-3 (after first) in front\n");
//    mx_push_front(&list1, "-4 in front\n");
//
////    for (;list1 != NULL; list1 = list1->next)
////        printf("%s", list1->data);
//
//    printf("----------------------------------------mx_push_back--------------------------------\n");
//
//    char *str2_list = "1 in back\n";
//
//    mx_push_back(&list1, str2_list);
//    mx_push_back(&list1, "2 in back\n");
//    mx_push_back(&list1, "3 (before last) in back\n");
//    mx_push_back(&list1, "4 in back\n");
//
////    for (;list1; list1 = list1->next)
////        printf("%s", list1->data);
//
//    printf("----------------------------------------mx_pop_front--------------------------------\n");
//
//    for (int i = 0; i < 1; i++)
//        mx_pop_front(&list1);
//
////    for (;list1; list1 = list1->next)
////        printf("%s", list1->data);
//
//    printf("----------------------------------------mx_pop_front--------------------------------\n");
//
//    for (int i = 0; i < 1; i++)
//        mx_pop_back(&list1);
//
////    for (;list1; list1 = list1->next)
////        printf("%s", list1->data);
//
//    printf("----------------------------------------mx_list_size--------------------------------\n");
//
//    int list_size = mx_list_size(list1);
//
//    printf("list size = %d\n\n", list_size);
//    for (;list1; list1 = list1->next)
//        printf("%s", list1->data);
//    printf("\n");
//
//    printf("----------------------------------------mx_sort_list--------------------------------\n");
//
////    int srt_lst[] = {33};
//    t_list *sort_list = NULL;
//    t_list *buf = NULL;
//
//    mx_push_back(&sort_list, (void *) 5);
//    mx_push_back(&sort_list, (void *) -5);
//    mx_push_back(&sort_list, (void *) 50);
//    mx_push_back(&sort_list, (void *) INT_MAX);
//    mx_push_back(&sort_list, (void *) -55);
//    mx_push_back(&sort_list, (void *) 0);
//    mx_push_back(&sort_list, (void *) INT_MIN);
//    mx_push_back(&sort_list, (void *) 17);
//
//    buf = sort_list;
////    for (;buf; buf = buf->next)
////        //if(sort_list)
////            printf("%d\n", (int )buf->data);
//    buf = sort_list;
//    mx_sort_list(buf, cmp_sort_list);
//
//    for (;buf; buf = buf->next)
//        printf("%d\n", (int )buf->data);
//
}
