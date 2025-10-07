#!/bin/bash

for i in $(cat entradas.txt)
do
    echo "$i" | ./ex4 2>> tabela.csv
done