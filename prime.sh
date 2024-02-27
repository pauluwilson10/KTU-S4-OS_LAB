read -p "Enter the number" num
check=0
for ((i=2;i<=num/2;i++));do
	if [ $((num%i)) -eq 0 ];then
		check=1
		break
	fi
done
if [ $check -eq 1 ];then
	echo "Not prime number"
else 
	echo "prime number"           
fi
