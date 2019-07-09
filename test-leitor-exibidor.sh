#!/usr/bin/env bash
#chmod a+x tests.sh
#mude a pasta para rodar os arquivos de
cmake .. && make &&
for file in ../samples/tests/Leitor-Exibidor/*; do
  printf "\nArquivo $file:\n" 
  printf "\nArquivo $file:\n" &>> ../result-leitor-exibidor.txt
  ./jvm "$file" -d -v &>> ../result-leitor-exibidor.txt
done
