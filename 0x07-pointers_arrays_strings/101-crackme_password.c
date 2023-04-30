#include <stdio.h>
#include <openssl/md5.h>

/**
* main - entry point of program
* Return: return 0 for success
*/

int main(void)
{
unsigned char hash[MD5_DIGEST_LENGTH];
char *password = "A-CHANGED-PASSWORD";
int i;

MD5((unsigned char *)password, strlen(password), hash);

for (i = 0; i < MD5_DIGEST_LENGTH; i++)
{
printf("%02x", hash[i]);
}
printf("\n");
return (0);
}
