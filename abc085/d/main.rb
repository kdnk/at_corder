n, h = gets.chomp.split.map(&:to_i)
a_swords = []
b_swords = []
n.times.each do
  input = gets.chomp.split.map(&:to_i)
  a_swords.push input[0]
  b_swords.push input[1]
end
b_swords = b_swords.sort.reverse
a_max = a_swords.max

min = Float::INFINITY

(0..n).each do |k|
  break if h < 0

  h -= b_swords[k - 1] if k > 0
  count = ((h % a_max).zero? ? h / a_max : h / a_max + 1)
  min = [k + (h > 0 ? count : 0), min].min
end

puts min
