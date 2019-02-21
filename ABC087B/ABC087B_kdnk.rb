count_of_500 = gets.chomp.to_i
count_of_100 = gets.chomp.to_i
count_of_50 = gets.chomp.to_i
object = gets.chomp.to_i

arr = []

(count_of_500 + 1).times do |i|
  (count_of_100 + 1).times do |j|
    (count_of_50 + 1).times do |k|
      arr << 500 * i + 100 * j + 50 * k
    end
  end
end

puts arr.count(object)
