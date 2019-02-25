BTC_TO_YEN = 380000.0

n = gets.chomp.to_i

amounts = []
units = []

n.times do
  amount, unit = gets.chomp.split
  amounts << amount.to_f
  units << unit
end

sum = 0
n.times do |i|
  if units[i] == 'JPY'
    sum += amounts[i]
  else
    sum += amounts[i] * BTC_TO_YEN
  end
end

puts sum
