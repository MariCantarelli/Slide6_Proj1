FILE *arquivo;
arquivo = fopen("nomeDoArquivo.txt", "w");

// manipule o arquivo
fprintf(arquivo, "Programar é bacana!");
fprintf(arquivo, "Escrevendo números: %d", 1234);
fclose(arquivo);