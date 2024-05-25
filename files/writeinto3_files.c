#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    FILE *fp1;
    FILE *fp2;
    FILE *fp3;
    fp = fopen("f.txt", "w+");
    fp1 = fopen("f1.txt", "w");
    fp2 = fopen("f2.txt", "w");
    fp3 = fopen("f3.txt", "w");

    if (fp == NULL || fp1 == NULL || fp2 == NULL || fp3 == NULL) {
        printf("Error opening one or more files.\n");
        return 1;
    }

    int l;
    char ch;
    int i = 0, j = 0, k = 0;
    char s[100];
    char s1[100] = {0};
    char s2[100] = {0};
    char s3[100] = {0};

    printf("Enter the data: ");
    fgets(s, 100, stdin);
    fputs(s, fp);
    l = strlen(s) - 1;
    fseek(fp, 0, SEEK_SET);

    while ((ch = fgetc(fp)) != EOF && i <= l) {
        if (i < l / 3) {
            s1[i] = ch;
        } else if (i < 2 * l / 3) {
            s2[j] = ch;
            j++;
        } else if (i >= 2 * l / 3 && i <= l) {
            s3[k] = ch;
            k++;
        }
        i++;
    }

    fprintf(fp1, "%s", s1);
    fprintf(fp2, "%s", s2);
    fprintf(fp3, "%s", s3);

    fclose(fp);
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);

    return 0;
}
