ch=1
while [ $ch -eq 1 ];do
	read -p "Enter first number" a
	read -p "Enter second number" b
	echo "MENU"
	echo "1.Addition"
	echo "2.subtraction"
	echo "3.Division"
	echo "4.Multiplication"
	echo "5.exit"
	read -p "Enter operation number" c
	case $c in
		1)echo "The sum is $((a + b))";;
		2)echo "The difference is $((a - b))";;
		3)if [ $b -eq 0 ];then
			echo "Division with 0 NOT possible"
		  else
		  	echo "the quotient is $((a / b))"
		  fi;;
		4)echo "The multiplied number is$((a * b))";;
		5)exit;;
	esac
	read -p "Do you want to continue(1/0)" ch
done
