#include <stdio.h>
#include <string.h>

int count = 0;
int i = 0;
int j = 0;
int count1 = 0;
char ch;


int main(void)
{
    FILE *fp;
    char str[999][999] = {0};
    char ip[999][100] = {0};
    char temp[100];
    char protocol[20];
    int ipCount[999] = {0};
    int version[999] = {0};

    int k, v, last, best, rank;
    int pingLine[999] = {0};

    fp = fopen("fast.log", "r");

    if (fp == NULL)
    {
        printf("입력 파일을 열지 못했습니다.\n");
        return 1;
    }

    
    while (i < 999 && fscanf(fp, "%c", &ch) == 1)
    {
        if (ch == '\n')
        {
            i++;
            j = 0;
        }
        else if (j < 998)
        {
            str[i][j] = ch;
            j++;
        }
    }

    count = i;

    if (i < 999 && j > 0)
    {
        count++;
    }

    fclose(fp);

    
    for (i = 0; i < count; i++)
    {
        for (j = 0; str[i][j] != '\0'; j++)
        {
            if (str[i][j] == 'P' &&
                str[i][j + 1] == 'i' &&
                str[i][j + 2] == 'n' &&
                str[i][j + 3] == 'g')
            {
                count1++;
                pingLine[i] = 1;
            }
        }
    }

    
    for (i = 0; i < count; i++)
    {
        if (pingLine[i] == 0)
            continue;

        for (j = 0; str[i][j] != '\0'; j++)
        {
            
            if (str[i][j] == '{')
            {
                j++;

                for (k = 0; k < 19 &&
                     str[i][j] != '\0' &&
                     str[i][j] != '}'; j++)
                {
                    protocol[k] = str[i][j];
                    k++;
                }
                protocol[k] = '\0';

                if (str[i][j] != '}')
                    break;

                if (strcmp(protocol, "ICMP") == 0)
                    v = 4;
                else if (strcmp(protocol, "IPv6-ICMP") == 0)
                    v = 6;
                else
                    continue;

                j++;

                while (str[i][j] == ' ' || str[i][j] == '\t')
                    j++;

                
                k = 0;
                last = -1;

                for (j = j; k < 99 &&
                     str[i][j] != '\0' &&
                     str[i][j] != ' ' &&
                     str[i][j] != '\t'; j++)
                {
                    temp[k] = str[i][j];

                    if (temp[k] == ':')
                        last = k;

                    k++;
                }
                temp[k] = '\0';

                if (last == -1)
                    break;

                
                temp[last] = '\0';

                
                for (k = 0; k < count2; k++)
                {
                    if (version[k] == v &&
                        strcmp(ip[k], temp) == 0)
                    {
                        break;
                    }
                }

               
                if (k == count2)
                {
                    for (j = 0; temp[j] != '\0'; j++)
                        ip[k][j] = temp[j];

                    ip[k][j] = '\0';
                    version[k] = v;
                    count2++;
                }

                ipCount[k]++;
                break; 
            }
        }
    }

    printf("핑 수 : %d\n", count1);

    for (rank = 1; rank <= 3 && rank <= count2; rank++)
    {
        best = 0;

        for (i = 1; i < count2; i++)
        {
            if (ipCount[i] > ipCount[best])
                best = i;
        }

        printf("%d위 IPv%d | %s | %d건\n",
               rank, version[best], ip[best], ipCount[best]);

        ipCount[best] = -1;  
    }

    return 0;
}