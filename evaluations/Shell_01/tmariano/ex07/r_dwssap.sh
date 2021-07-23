cat /etc/passwd |
sed --expression 's/:.*//g' |
grep -n . |
grep ^[0-9]*[02468]: |
sed --expression 's/^[0-9]*[02468]://g' |
rev |
sort -r  |
head -n $FT_LINE2 |
tail -n +$FT_LINE1 |
tr '\n' ',' |
sed --expression 's/,/, /g' |
sed --expression 's/, $/./g' 