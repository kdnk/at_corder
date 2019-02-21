input = gets.chomp
n, a, b = input.split.map(&:to_i)

ans = 0
n.times do |number|
  sum = (number + 1).to_s.split('').map(&:to_i).inject(0){|sum, i| sum + i}
  if a <= sum && sum <= b
    ans += number + 1
  end
end

puts ans
