#!/usr/bin/env bash
#chmod a+x tests.sh
#mude a pasta para rodar os arquivos de
cmake .. && make &&
file="/home/santosdanilo/workspace-unb/sb/jvm/samples/tests/Engine/Instruction/BALoad.class"

printf "\nArquivo $file:\n" 
#./jvm "$file" -d &>> ../tests-result.txt
./jvm "$file" -r -v &>> ../test/one-test.txt
