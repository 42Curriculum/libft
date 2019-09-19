#include <stdio.h>
#include "libft.h"
#include <ctype.h>

int main()
{
	// MemSet
	printf("-----------------------------------\n");
	printf("           MemSet Test     DONE, NORM \n");
	//vars
	char memsetv[5] = "Hello";

	//test
	printf("My test : \n");
	printf("%s\n", ft_memset(memsetv,'0',sizeof(memsetv[0]) * 3));
	printf("Lib result : \n");
	printf("%s\n", memset(memsetv,'0',sizeof(memsetv[0]) * 3));
	
	//Memcpy
	printf("-----------------------------------\n");
	printf("           Memcpy Test   DONE, NORM \n");
	
	//vars
	char memcpyv[7] = "memcpy";
	char memcpyv1[8] = "memcpy1";

	//test
	printf("My test : \n");
	printf("%s\n", ft_memcpy(memcpyv,memcpyv1,5));
	printf("Lib result : \n");
	printf("%s\n", memcpy(memcpyv,memcpyv1,5));
	
	//Memccpy
	printf("-----------------------------------\n");
	printf("		   Memccpy Test	DONE, NORM   \n");
	
	//vars
	char memccpyv[8] ="memccpy";
	char memccpyv1[9] = "memccpy1";

	//test
	printf("My test : \n");
	printf("%s\t %s \n", ft_memccpy(memccpyv,memccpyv1, 114, 5),memccpyv);
	printf("Lib result : \n");
	printf("%s\t %s \n", memccpy(memccpyv,memccpyv1,114,5),memccpyv);
	
	//Memmove
	printf("-------------------------------------\n");
	printf("		  Memmove test - NOT DONE			  	 \n");

		char	*mem;
	char	*memd;
	char	*mem1;
	char	*mem2;
	mem = strdup("memory");
	memd = strdup("memory");
	mem1 = strdup("memory1");
	mem2 = strdup("memory2");
	printf("My test : \n");
	printf("%s\n", ft_memmove(mem, mem1 , 2));
	printf("%s\n", ft_memmove(mem + 5, mem1, 1));
	printf("Lib result : \n");
	printf("%s\n", memmove(memd, mem2 , 2));
	printf("%s\n", memmove(memd + 5, mem2, 1));

	//Memchr
	printf("---------------------------------------\n");
	printf("			Memchr Test				   \n");

	//vars
	char memsrch[6] = "search";;
		
	printf("My test : \n");
	printf("%s\n", ft_memchr(memsrch, 'r', 5));
	printf("%s\n", ft_memchr(memsrch, 'w',4));
	printf("%s\n", ft_memchr(memsrch, 'r',2));

	printf("Lib result : \n");
	printf("%s\n", memchr(memsrch, 'r',5));
	printf("%s\n", memchr(memsrch, 'w',4));
	printf("%s\n", memchr(memsrch, 'r',2));

	//Strdup
	printf("---------------------------------------\n");
	printf("		Strdup test					    \n");

	//vars
	char dupsrc[6] = "Source";
	char dupdst[12] = "Destination";

	printf("My test : \n");
	printf("%s\n", ft_strdup(dupsrc));
	printf("%s\n", ft_strdup(dupdst));
	printf("Lib result : \n");
	printf("%s\n", strdup(dupsrc));
	printf("%s\n", strdup(dupdst));

	printf("---------------------------------------\n");
	printf("		Strcpy test					    \n");
	
	char strcpyt[7] = "hello";
	char strcpyt1[7] = "      ";
	char strcpyt2[7] = "delete";

	printf("My test : \n");
	printf("%s\n", ft_strcpy(strcpyt,strcpyt1));
	printf("%s\n", ft_strcpy(strcpyt1,strcpyt2));
	printf("Lib result : \n");
	printf("%s\n", strcpy(strcpyt,strcpyt1));
	printf("%s\n", strcpy(strcpyt1,strcpyt2));

	printf("---------------------------------------\n");
	printf("		Strncpy test					    \n");
	
	char strnsrc[7] = "hello";
	//char strndst[6] = "Empty";
	char strndst2[9] = "deletedis";

	printf("My test : \n");
	printf("%s\n", ft_strncpy(strndst2,strnsrc, 4));
	printf("%s\n", ft_strncpy(strndst2,strnsrc,5));
	char strnex[7] = "hello";
//	char strnex1[6] = "Empty";
	char strnex2[9] = "deletedis";

	printf("Lib result : \n");
	printf("%s\n", strncpy(strnex2,strnex,4));
	printf("%s\n", strncpy(strnex2,strnex,5));

	printf("---------------------------------------\n");
	printf("		Strcat test					    \n");
	
	char strcat[7] = "hello";
	//char strndst[6] = "Empty";
	char strcatdst2[50] = "deletedis";

	printf("My test : \n");
	printf("%s\n", ft_strcat(strcatdst2,strcat));
	//printf("%s\n", ft_strcat(strcatdst2,strcat));
	char strcatnex[7] = "hello";
//	char strnex1[6] = "Empty";
	char strcatnex2[50] = "deletedis";

	printf("Lib result : \n");
	printf("%s\n", strcat(strcatnex2,strcatnex));
	//printf("%s\n", strcat(strcatnex2,strcatnex));

	printf("---------------------------------------\n");
	printf("		Strncat test					    \n");
	
	char strncatv[7] = "hello";
	char strncatdst[50] = "Empty";
	char strncatdst2[50] = "deletedis";

	printf("My test : \n");
	printf("%s\n", ft_strncat(strncatdst,strncatv,6));
	printf("%s\n", ft_strncat(strncatdst2,strncatv,12));
	char strncatnex[7] = "hello";
	char strnnex1[50] = "Empty";
	char strncatnex2[50] = "deletedis";

	printf("Lib result : \n");
	printf("%s\n", strncat(strnnex1,strncatnex,6));
	printf("%s\n", strncat(strncatnex2,strncatnex,12));

	printf("---------------------------------------\n");
	printf("		Strlcat test				   \n");
	
	/* char strlcatv[7] = "hello";
	char strlcatdst[50] = "Empty";
	char strlcatdst2[50] = "deletedis";

	printf("My test : \n");
	printf("%d\n", ft_strlcat(strlcatdst,strlcatv,6));
	printf("%d\n", ft_strlcat(strlcatdst2,strlcatv,20)); */
	char strlcatnex[7] = "hello";
	char strlnex1[50] = "Empty";
	char strlcatnex2[50] = "deletedis";

	printf("Lib result : \n");
	printf("%lu\n", strlcat(strlnex1,strlcatnex,6));
	printf("%lu\n", strlcat(strlcatnex2,strlcatnex,20));

	printf("---------------------------------------\n");
	printf("		Strchr test					    \n");
	
	char strchr1[7] = "hello";
	char strchr2[50] = "Empty";

	printf("My test : \n");
	printf("%s\n", ft_strchr(strchr1,'l'));
	printf("%s\n", ft_strchr(strchr2,'\0'));
	char strchex[7] = "hello";
	char strchex1[50] = "Empty";

	printf("Lib result : \n");
	printf("%s\n", strchr(strchex,'l'));
	printf("%s\n", strchr(strchex1,'\0'));

	printf("---------------------------------------\n");
	printf("		Strrchr test					    \n");
	
	char strrchr1[7] = "hello";
	char strrchr2[50] = "Empty";

	printf("My test : \n");
	printf("%s\n", ft_strrchr(strrchr1,'l'));
	printf("%s\n", ft_strrchr(strrchr2,'\0'));
	char strrchex[7] = "hello";
	char strrchex1[50] = "Empty";

	printf("Lib result : \n");
	printf("%s\n", strrchr(strrchex,'l'));
	printf("%s\n", strrchr(strrchex1,'\0'));

	printf("---------------------------------------\n");
	printf("		Strstr test					    \n");


	printf("My test : \n");
	printf("%s\n", ft_strstr(strrchr1, "el"));
	printf("%s\n", ft_strstr(strrchr1, " "));

	printf("Lib result : \n");
	printf("%s\n", strstr(strrchex,"el"));
	printf("%s\n", strstr(strrchex," "));

	printf("---------------------------------------\n");
	printf("		Strstr test					    \n");


	printf("My test : \n");
	printf("%s\n", ft_strnstr(strrchr1, "el", 6));
	printf("%s\n", ft_strnstr(strrchr1, " ",1));

	printf("Lib result : \n");
	printf("%s\n", strnstr(strrchex,"el",6));
	printf("%s\n", strnstr(strrchex," ",1));

	printf("---------------------------------------\n");
	printf("		Strcmp test					    \n");


	printf("My test : \n");
	printf("%d\n", ft_strcmp("Hello", "Hello"));
	printf("%d\n", ft_strcmp("Hey", "hea"));
	printf("%d\n", ft_strcmp("Hey", "aks"));

	printf("%d\n", strcmp("Hello", "Hello"));
	printf("%d\n", strcmp("Hey", "hea"));
	printf("%d\n", strcmp("Hey", "aks"));

	printf("---------------------------------------\n");
	printf("		Strncmp test					    \n");


	printf("My test : \n");
	printf("%d\n", ft_strncmp("Hello", "Hello",3));
	printf("%d\n", ft_strncmp("Hey", "hea",2));
	printf("%d\n", ft_strncmp("Hey", "aks",1));

	printf("%d\n", strncmp("Hello", "Hello",3));
	printf("%d\n", strncmp("Hey", "hea",2));
	printf("%d\n", strncmp("Hey", "aks",1));

	printf("---------------------------------------\n");
	printf("		Atoi test					\n");


	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
	printf("atoi: %d\n", atoi("2147483647"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42 BLAH!"));
	printf("atoi: %d\n", atoi("+42 BLAH!"));
	printf("ft_atoi: %d\n", ft_atoi("-21474836481"));
	printf("atoi: %d\n", atoi("-21474836481"));
	printf("ft_atoi: %d\n", ft_atoi("     +42"));
	printf("atoi: %d\n", atoi("     +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));

	printf("---------------------------------------\n");
	printf("		Isalpha test					\n");

	printf("My test : \n");
	printf("%d\n", ft_isalpha('2'));
	printf("%d\n", ft_isalpha('a'));

	printf("Lib result : \n");
	printf("%d\n", isalpha('2'));
	printf("%d\n", isalpha('a'));

	printf("---------------------------------------\n");
	printf("		Isdigit test					\n");

	printf("My test : \n");
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", ft_isdigit('a'));

	printf("Lib result : \n");
	printf("%d\n", ft_isdigit('2'));
	printf("%d\n", ft_isdigit('a'));

	printf("---------------------------------------\n");
	printf("		Isdigit test					\n");

	printf("My test : \n");
	printf("%d\n", ft_isalnum('2'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum(' '));

	printf("Lib result : \n");
	printf("%d\n", isalnum('2'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum(' '));

	printf("---------------------------------------\n");
	printf("		Isdigit test					\n");

	printf("My test : \n");
	printf("%d\n", ft_isalnum('2'));
	printf("%d\n", ft_isalnum('a'));
	printf("%d\n", ft_isalnum(' '));

	printf("Lib result : \n");
	printf("%d\n", isalnum('2'));
	printf("%d\n", isalnum('a'));
	printf("%d\n", isalnum(' '));

	printf("---------------------------------------\n");
	printf("		Isdigit test					\n");

	printf("My test : \n");
	printf("%d\n", ft_isprint('2'));
	printf("%d\n", ft_isprint('a'));
	printf("%d\n", ft_isprint(0));

	printf("Lib result : \n");
	printf("%d\n", isprint('2'));
	printf("%d\n", isprint('a'));
	printf("%d\n", isprint(0));

	printf("---------------------------------------\n");
	printf("		Isascii test					\n");

	printf("My test : \n");
	printf("%d\n", ft_isascii('2'));
	printf("%d\n", ft_isascii('a'));
	printf("%d\n", ft_isascii(134));

	printf("Lib result : \n");
	printf("%d\n", isascii('2'));
	printf("%d\n", isascii('a'));
	printf("%d\n", isascii(134));
	printf("---------------------------------------\n");
	printf("		tolower test					\n");

	printf("My test : \n");
	printf("%d\n", ft_tolower('2'));
	printf("%d\n", ft_tolower('a'));
	printf("%d\n", ft_tolower('R'));

	printf("Lib result : \n");
	printf("%d\n", tolower('2'));
	printf("%d\n", tolower('a'));
	printf("%d\n", tolower('R'));

	printf("---------------------------------------\n");
	printf("		tolupper test					\n");

	printf("My test : \n");
	printf("%d\n", ft_toupper('2'));
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_toupper('R'));

	printf("Lib result : \n");
	printf("%d\n", toupper('2'));
	printf("%d\n", toupper('a'));
	printf("%d\n", toupper('R'));


	return(0);
}
