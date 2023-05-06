cat /etc/passwd | cut -d ":" -f 1 | grep -v '^#' | sed -n '2~2p' | rev | sort -r | awk -v line1="$FT_LINE1" -v line2="$FT_LINE2" 'NR>= line1 && NR<=line2 || NR>=line2 && NR<=line1' | tr "\n" "," | sed 's/,/, /g' | sed 's/, $/./'
# show only the first field of the file(delimited by : ) ignoring commented lines
#skipping 2 lines starting from the second reversing the lines and sorting by
#reverse alphabetic order and showing only lines between the 2 variables
#replacing new lines with (commas and space) then making the last line end in .
