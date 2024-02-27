read -p "Enter limit" num
sum=0
for((i=0;i<num;i++));do
        read -p "Enter the number" inp
	sum=$((sum+inp))
done
echo "The sum is $sum"
