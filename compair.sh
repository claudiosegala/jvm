#!/usr/bin/env bash
#chmod a+x tests.sh
#mude a pasta para rodar os arquivos de
cmake .. && make &&
##
FOLDER="../samples/tests/Engine/"
if [ -d "../compair" ]; then rm -Rf ../compair; fi
mkdir ../compair
for file in ../samples/tests/Engine/*; do
  filename=$(basename $file .class)
  printf "\nArquivo $file:\n"
  mkdir ../compair/$filename
  ./jvm "$file" -d &>> ../compair/$filename/tests-result.txt
  ./jvm "$file" -r -v &>> ../compair/$filename/$filename.txt
  java -cp $FOLDER $filename &>> ../compair/$filename/oracle.txt
done
