#!/usr/bin/env bash
#chmod a+x tests.sh
#mude a pasta para rodar os arquivos de
cmake .. && make &&
for file in ../samples/examples/*
do
   ./jvm "$file" -d >> result.out
done
