a, b , c, x = 4.times.map{gets.to_i}
all_money = []

for i in 0..a
  for j in 0..b
    for k in 0..c
      if x % 50 != 0
        break
      end
      all = i * 500 + j * 100 + k * 50
      all_money << all
    end
  end
end
puts all_money.count(x)
