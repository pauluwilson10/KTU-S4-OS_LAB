fact=1
read -p "Enter the number" num
temp=$num
while [ $num -gt 0 ];do
	fact=$((fact * num))
	num=$((num - 1))
done
echo "Factorial of number $temp = $fact"

