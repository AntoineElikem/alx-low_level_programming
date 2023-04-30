/**
* _strspn - function to get length of prefix substring
* @s: string to search
* @accept: bytes to accept
* Return: initial segment bytes from accept in s
*/

unsigned int _strspn(char *s, char *accept)
{
unsigned int count = 0;
int match = 1;
char *a;

while (*s != '\0' && match)
{
match = 0;

for (a = accept; *a != '\0'; a++)
{
if (*s == *a)
{
count++;
match = 1;
break;
}
}

s++;
}
return (count);
}
