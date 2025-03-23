fputc(caracter, arquivo); 

FILE *arquivo;
char texto[80] = "Isto é um teste!";
int tamanho = strlen(texto);
arquivo = fopen("nomeDoArquivo.txt", "w");
for (int i = 0; i < tamanho; i++){
fputc(texto[i], arquivo);
}

fclose(arquivo);
