#!/usr/bin/env bash
#chmod a+x tests.sh
#mude a pasta para rodar os arquivos de
cmake .. && make &&
##
FOLDER="../samples/tests/Engine"

if [ -d "../compaired" ]; then rm -Rf ../compaired; fi
mkdir ../compaired

for file in $FOLDER/*; do
  filename=$(basename $file .class)
  cmppath=../compaired
  printf "\nArquivo $filename:\n"
#  ./jvm "$file" -d &>> $cmppath/leitor-exibidor.txt
  ./jvm "$file" -r &>> $cmppath/$filename.txt
  echo "Versus\n" &>> $cmppath/$filename.txt
  java -cp $FOLDER $filename &>> $cmppath/$filename.txt
done
