#!/bin/bash

counter=0

while [ $counter -le 1000000 ]
do
	./mul $counter $counter
	((counter++))
done

echo "All Done"
