s = gets.chomp

answers = [(0..s.size - 1).map { |i| i % 2 }, (0..s.size - 1).map { |i| (i + 1) % 2 }]

min = Float::INFINITY
answers.each do |ans|
  count = 0
  s.chars.to_a.map(&:to_i).each_with_index do |char, index|
    count += 1 if ans[index] == char
  end
  min = [count, min].min
end

puts min
