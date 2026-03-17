/*descobrindo como lidar com arquivos em c
fopen("nome_do_arquivo","modo") sendo o modo r = leitura; w= escrita;r+=leitura e escrita
FILE *arquivo (ponteiro pois eh gerenciado pelo sistema) - declara variavel
fclose(arquivo)
fscanf(arquivo,"formato",&variavel); (eh possivel ler varias coisas no fscanf)
fprintf(arquivo,"texto",variaveis);  
fgets(string,tamanho,arquivo); - le uma linha inteira no arquivo
EOF = end of file
normalmente se usa scanf pois nao sabe o final do arquivo
*/