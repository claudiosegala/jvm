#!/usr/bin/env bash
#chmod a+x tests.sh
#mude a pasta para rodar os arquivos de
cmake .. && make &&
##
FOLDER="../samples/tests/Engine"

if [ -d "../compair" ]; then rm -Rf ../compair; fi
mkdir ../compair

for file in $FOLDER/*; do
  filename=$(basename $file .class)
  cmppath=../compair/$filename
  printf "\nArquivo $filename:\n"
  mkdir $cmppath
  ./jvm "$file" -d &>> $cmppath/leitor-exibidor.txt
  ./jvm "$file" -r -v &>> $cmppath/sb.txt
  java -cp $FOLDER $filename &>> $cmppath/oracle.txt
done
