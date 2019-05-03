count = gets.chomp.to_i
inputs = count.times.map{ |_| gets.chomp.to_i }
p inputs.uniq.size
