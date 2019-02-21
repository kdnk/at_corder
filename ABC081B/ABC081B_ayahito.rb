n = gets.chomp.to_i
a_array = gets.chomp.split()

a_array = a_array.map {|a| a.to_i}

ans=0
# while true
loop do
  # for i in 0..n-1
  n.times do |i|
    # if a_array[i] % 2 == 0
    if a_array[i].even?
      a_array[i] /= 2
    else
      puts ans
      exit
    end
  end
  ans += 1
end
