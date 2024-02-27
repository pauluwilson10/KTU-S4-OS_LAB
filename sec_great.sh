a=()
read -p "Enter the limit" lim
echo "enter the elements"
for ((i=0;i<lim;i++));do
	read a[$i]
done
sec=$(printf '%s\n' "${a[@]}" | sort -nu | tail -2 | head -1 )
echo "second largest is $sec"
