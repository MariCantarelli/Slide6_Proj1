fscanf(arquivo, "formatação", variáveis);

Arquivo: numeros.txt
1
2
3
4
5

FILE *arquivo;
int n;
arquivo = fopen("numeros.txt", "r");
while (fscanf(arquivo, "%d", &n) != EOF)
printf("%d\n", n);
fclose(arquivo);