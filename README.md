<p align="center">
    <a href="https://unitfactory.net/en/" target="_blank">
        <img src="https://github.com/slava-pleshkov/unit-factory-ucode/blob/master/.git_images/unit_logo.png?raw=true" height="100px">
    </a>
    <a href="https://ucode.world/en/" target="_blank">
        <img src="https://github.com/slava-pleshkov/unit-factory-ucode/blob/master/.git_images/ucode_logo.png?raw=true" height="100px">
    </a>
    <h1 align="center">Libmx</h1>
    <br>
</p>
<p align="center">📁 Create your own C library</p>

## Got skills

Critical Thinking, Problem Solving, Analysis, Reasoning & Argumentation, Creativity, Innovation Thinking, Agility & Adaptability, Responsibility, Self-Management, Communication, UNIX, Git, Procedural Programming, Algorithms, C

<hr>

## Utils pack
Function name|Description|Grade|
|-------------|----------------------------------------------------|---|
|```mx_printchar```|Prints single character on the standard output.|100|
|```mx_print_unicode```|Prints ASCII and multibyte characters on standard output.|100|
|```mx_printstr```|Prints string of characters on the standard output.|100|
|```mx_printstr```|Prints string of characters on the standard output.|100|
|```mx_print_strarr```|Print array of strings.|100|
|```mx_printint```|Function that prints integer values on the standard output.|100|
|```mx_pow```|Function that computes ```n``` raised to the power of zero or positive integer ```pow``` .|100|
|```mx_sqrt```|Function that computes the non-negative square root of ```x``` . Function must compute square root in less than 2 seconds.|100|
|```mx_nbr_to_hex```|Function that converts an unsigned long number into a hexadecimal.|100|
|```mx_hex_to_nbr```|Function that converts a hexadecimal string into an unsigned long number.|100|
|```mx_itoa```|Function that takes an integer and converts it to a string.|100|
|```mx_atoi```|Function which will convert ASCII string to integer.|100|
|```mx_foreach```|Function applies the function ```f``` for each element of the array ```arr``` of the given size.|100|
|```mx_binary_search```|Function that searches string ```s``` in array ```arr``` with the given size. Uses the binary search algorithm assuming that input array has already been sorted in lexicographical order.|100|
|```mx_bubble_sort```|Function that sorts an array of strings in place in exicographical order using bubble sort algorithm.|100|
|```mx_quicksort```|Function that sorts an array of strings by their length in ascending order using algorithm of quick sort. Pick middle element of the array as pivot. You must not check if ```left``` and ```right``` are correct.|0|

## String pack
Function name|Description|Grade|
|-------------|----------------------------------------------------|---|
|```mx_strlen```|Function that has the same behaviour as standard libc function ```strlen``` .|100|
|```mx_arrlen```|Function that has the same behaviour as standard libc function ```mx_arrlen``` .|100|
|```mx_swap_char```|Function which will swap the characters of the string using pointers. Do nothing if ```s1``` or ```s2``` does not exist.|100|
|```mx_str_reverse```|Function which reverses string using pointers. Do nothing if string does not exist.|100|
|```mx_strdel```|Function that takes a pointer to string, then frees the string memory with ```free``` and sets string to ```NULL``` .|100|
|```mx_del_strarr```|Function that takes pointer to a NULL-terminated array of strings, deletes content of array, frees array memory with ```free``` and sets pointer to ```NULL``` .|100|
|```mx_get_char_index```|Function that finds index of the first occurrence of character ```c``` in a string str. String is a sequence of characters excluding the trailing ``` \0 ``` character.|100|
|```mx_strdup```|Function that has the same behaviour as standard libc function ```strdup``` .|100|
|```mx_strndup```|Function that has the same behaviour as standard libc function ```strdup``` .|100|
|```mx_strcpy```|Function that has the same behaviour as standard libc function ```strcpy``` .|100|
|```mx_strncpy```|Function that has the same behaviour as standard libc function ```strncpy``` .|100|
|```mx_strcmp```|Function that has the same behaviour as standard libc function ```strcmp``` .|100|
|```mx_strcat```|Function that has the same behaviour as standard libc function ```strcat``` .|100|
|```mx_strstr```|Function which has the same behaviour as standard libc function ```strstr``` .|100|
|```mx_get_substr_index```|Function that finds a index of substring.|100|
|```mx_count_substr```|Function that counts number of occurrences of substring in a string.|100|
|```mx_count_words```|Function which count words in the string. Word is a sequence of characters separated by delimiter.|100|
|```mx_strnew```|Function that: • allocates memory for a string of a specific ```size``` and one additional byte for terminating ``` '\0' ```  • initializes each character with ``` '\0' ``` • string of a specific size and terminated by ``` '\0' ```  • ```NULL``` if the creation fails..|100|
|```mx_is_space ```|Function which has the same behaviour as standard libc function ```isspace``` .|100|
|```mx_strtrim ```|Function which creates new string without whitespace characters at the beginning and the end of the string and frees all unused memory with ```free ```.|100|
|```mx_del_extra_spaces ```|Function that creates new string without whitespace characters in the beginning and at the end of a string. It puts in the new string exactly one space character between words and frees all unused memory. Word is a sequence of characters separated by whitespaces.|100|
|```mx_strsplit ```|Function that converts a string ```s``` to the NULL-terminated array of words and frees all unused memory.|100|
|```mx_strjoin ```|Create a function concatenates strings s1 and s2 into new string and terminates new string with ``` '\0' ``` .|100|
|```mx_file_to_str ```|Function takes a filename as a parameter and then reads the data from file into the string.|100|
|```mx_read_line ```||0|
|```mx_replace_substr ```|Function that replaces all occurrences of ``` sub``` in ```str``` with ```eplace``` .|100|

## Memory pack
Function name|Description|Grade|
|-------------|----------------------------------------------------|---|
|```mx_memset```|Function that has the same behaviour as standard libc function ```memset``` .|100|
|```mx_memcpy```|Function that has the same behaviour as standard libc function ```memcpy``` .|100|
|```mx_memccpy```|Function that has the same behaviour as standard stdlib function ```memccpy``` .|100|
|```mx_memcmp```|Function that has the same behaviour as standard stdlib function ```memcmp``` .|100|
|```mx_memchr```|Function that has the same behaviour as standard stdlib function ```memchr``` .|100|
|```mx_memrchr```|The ```mx_memrchr``` function is like the ```mx_memchr``` function, except that it searches backwardfrom the end of the ```n``` bytes pointed to by ```s``` instead of forward from the beginning.|100|
|```mx_memmem```|Function that has the same behaviour as standard libc function memmem .|100|
|```mx_memmove```|Function that has the same behaviour as standard libc function ```memmove``` .|100|
|```mx_realloc```|Function that has the same behaviour as standard stdlib function ```realloc``` .|100|
## Alphabet pack
Function name|Description|Grade|
|-------------|----------------------------------------------------|---|
|```mx_is_positive```|Function which will output ```positive``` , ```negative``` or ```zero``` followed by the newline on the standard output whether number is positive, negative or equals to 0.|100|
|```mx_is_odd```|Function which checks whether a number is even or odd.|100|
|```mx_isalpha```|Function which has the same behaviour as standard libc function ```isalpha``` .|100|
|```mx_isdigit```|Function which has the same behaviour as standard libc function ```isdigit``` .|100|
|```mx_islower```|Function which has the same behaviour as standard libc function ```islower``` .|100|
|```mx_tolower```|Function which has the same behaviour as standard libc function ```tolower``` .|100|
|```mx_toupper```|Function which has the same behaviour as standard libc function   ```toupper``` .|100|
|```mx_multiple_number```|Function which will check whether natural number ```mult``` is a multiple of a number ```n``` .|100|
|```mx_max```|Function which will find a maximum number.|100|
|```mx_mid```|Function which will find middle number.|100|
## List pack
Function name|Description|Grade|
|-------------|----------------------------------------------------|---|
|```mx_create_node```|Function which creates a new node of linked list. Function must assign parameter ```data ```to the list variable ```data``` .|100|
|```mx_push_front```|Function that inserts a new node of ```t_list``` type with the given parameter ```data``` at the beginning of the linked list.|100|
|```mx_push_back```|Function that inserts a new node of ```t_list``` type with the given parameter ```data``` at the end of the linked list.|100|
|```mx_pop_front```|Function that removes the first node of the linked list and frees allocated for the node memory.|100|
|```mx_pop_back```|Function that removes the last node of the linked list and frees allocated for the node memory.|100|
|```mx_list_size```|Function that calculates the number of nodes in the linked list.|100|
|```mx_del_list```|Function removes the all node.|100|
|```mx_sort_list```|Function that sorts the list’s contents in ascending order. Function ``` cmp ``` returns true if ```a ``` > ``` b``` and false in other cases.|100|
<hr>
