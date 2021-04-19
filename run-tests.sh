#!/usr/bin/env bash
#chmod a+x tests.sh
#mude a pasta para rodar os arquivos de
cmake .. && make &&
for file in ../samples/tests/Engine/*; do
  printf "\nArquivo $file:\n" 
  printf "\nArquivo $file:\n" &>> ../tests-result.txt
  #./jvm "$file" -d &>> ../tests-result.txt
  ./jvm "$file" -r -v &>> ../tests-result.txt
done
