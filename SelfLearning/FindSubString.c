#include <stdio.h>
#include <string.h>
int findSubString(char *, char *);

int main(void)
{
    char mainStr[50];
    char subStr[50];
    printf("Please enter the main string: ");
    gets(mainStr);
    // printf("%s\n", &mainStr);
    printf("Please enter the sub string: ");
    gets(subStr);
    if (findSubString(mainStr, subStr))
    {
        printf("Found\n");
    }
    else
    {
        printf("Not Found\n");
    }

    return 0;
}

int findSubString(char *mainStr, char *subStr)
{
    int mainStrLen = strlen(mainStr);
    int subStrLen = strlen(subStr);

    int flag = 0;
    if (!(mainStrLen == 0 || mainStrLen < subStrLen))
    {
        for (int i = 0, j = 0; i < mainStrLen; i++)
        {
            if (mainStr[i] == subStr[j] || subStr[j] == mainStr[i - 1])
            {
                flag = 1;
                j++;
            }
            else if (j == subStrLen)
            {
                break;
            }
            else
            {
                flag = 0;
                j = 0;
            }
        }
    }
    return flag;
}