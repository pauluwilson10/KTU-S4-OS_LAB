fib(){
	read -p "Enter the number" num
	n1=0
	n2=1
	
	for ((i=1;i<num+1;i++));do
		echo "$n1"
		n3=$((n1+n2))
		n1=$n2
		n2=$n3
		
	done
}
fib

