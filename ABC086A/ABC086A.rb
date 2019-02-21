input = gets.chomp
a, b = input.split()

product = a.to_i * b.to_i

if product % 2 == 0
  puts 'Even'
else
  puts 'Odd'
end
