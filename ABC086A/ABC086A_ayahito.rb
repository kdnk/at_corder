a, b = gets.chomp.split()
a, b = a.to_i, b.to_i

if a * b % 2 == 0
    puts 'Even'
else
    puts 'Odd'
end
