read -p "Enter the beginning number" beg
read -p "Enter ending number" end

for ((i=beg;i<=end;i++));do
        check=0
	for ((j=2;j<=i/2;j++));do
		if [ $((i%j)) -eq 0 ];then
			check=1
			break
		fi
	done
	if [ $check -eq 0 ];then
		echo "$i is prime number"
	fi
done


