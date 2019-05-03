n = gets.chomp.to_i
heights = gets.chomp.split.map(&:to_i)


max = 0
count = 0
heights.each do |h|
  if h >= max
    count += 1
    max = h
  end
end

puts  count
