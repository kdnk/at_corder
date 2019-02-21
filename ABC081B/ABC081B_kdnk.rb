n = gets.chomp
input = gets.chomp

arr = input.split()

count = 0
loop do
  if arr.any? { |a| a.to_i.odd? }
    break
  end
  arr = arr.map {|a| a.to_i / 2}
  count += 1
end

puts count
