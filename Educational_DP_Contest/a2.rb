n = gets.chomp.to_i
h = gets.chomp.split.map(&:to_i)

dp = Array.new(n, Float::INFINITY)

dp[0] = 0

for i in 0..n-2
  dp[i+1] = [dp[i+1], dp[i] + (h[i+1] - h[i]).abs].min
  dp[i+2] = [dp[i+2], dp[i] + (h[i+2] - h[i]).abs].min if i < n - 2
end

puts dp.last
