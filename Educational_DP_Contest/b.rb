n, k = gets.chomp.split.map(&:to_i)
h = gets.chomp.split.map(&:to_i)

dp = Array.new(n, Float::INFINITY)
dp[0] = 0

for i in 1..n-1
  for j in 1..k
    p "i, #{i}"
    p "i+j, #{i+j}"
    dp[i] = [dp[i+j], dp[i] + (h[i+j] - h[i]).abs].min
  end
end

puts dp.last
