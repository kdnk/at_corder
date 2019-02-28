n = gets.chomp.to_i
a = [[0, 0, 0], [0, 0, 0]]
n.times do
  a << gets.chomp.split.map(&:to_i)
end

dp = Array.new(n + 2).map{Array.new(3, 0)}

for i in 1..n
  for j in 0..2
    for k in 0..2
      dp[i+1][k] = [dp[i+1][k], dp[i][j] + a[i+1][k]].max if j != k
    end
  end
end

puts dp.last.max
