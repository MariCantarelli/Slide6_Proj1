char c = fgetc(arquivo);

FILE *arquivo;
char c;
arquivo = fopen("nomeDoArquivo.txt", "r");
while((c = fgetc(arquivo)) != EOF) {
printf("%d", c)
}
fclose(arquivo);