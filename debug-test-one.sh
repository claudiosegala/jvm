#!/usr/bin/env bash
#chmod a+x tests.sh
#mude a pasta para rodar os arquivos de
cmake .. && make &&
file="/home/santosdanilo/workspace-unb/sb/jvm/samples/tests/Engine/Demo.class"

printf "\nArquivo $file:\n" 
printf "\nArquivo $file:\n" &>> ../tests-result-one.txt
#./jvm "$file" -d &>> ../tests-result.txt
gdb --args ./jvm "$file" -r
