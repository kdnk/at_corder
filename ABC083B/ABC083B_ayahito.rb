n, a, b = gets.split.map(&:to_i)
ans = 0
for i in 1..n
    num = i.to_s.split('').map(&:to_i).inject(:+)
    if a <= num && num <= b
        ans += i
    end
end

puts ans
