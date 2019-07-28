# https://qiita.com/drken/items/fd4e5e3630d0f5859067#5-%E9%81%8E%E5%8E%BB%E5%95%8F%E7%B2%BE%E9%81%B8-10-%E5%95%8
# 第5問
n, a, b = gets.chomp("\n").split(" ").map(&:to_i)

result = 0
(1..n).each do |num|
  # a以上b以下
  if num >= a && num <= b
    # 2桁以上だったら1桁ずつ取得して加算
    if num.to_s.length >= 2
      tmp = 0
      num.to_s.chars.each do |c|
        tmp += c.to_i
      end
      if tmp >= a && tmp <= b
        result += num
      end
      next
    else
      result += num
      next
    end
  end
  # bより大きくかつ2桁以上の値
  if num > b && num.to_s.length >= 2
    # 文字列に変換して1桁ずつ取得して加算
    tmp = 0
    num.to_s.chars.each do |c|
      tmp += c.to_i
    end
    if tmp >= a && tmp <= b
      result += num
    end
  end
end
puts result


# 第6問
n = gets.chomp("\n").to_i
cards = gets.split(" ").map(&:to_i)

alice = 0
bob = 0
target_flag = true

while n > 0
  max = cards.max
  index = cards.index(max)
  cards.delete_at(index)
  target_flag ? alice += max : bob += max
  # 後処理
  target_flag = !target_flag
  n -= 1
end

puts alice - bob


# 第7問
n = gets.chomp("\n").to_i
mochis = []
n.times do
  mochis << gets.chomp("\n").to_i
end

count = 0
if mochis.uniq.length == 1
  # 全て同じ直径なら1
  count = 1
else
  # 前処理
  new_mochis = mochis.uniq.compact.reject { |m| m.zero? }
  # 鏡餅枚数
  count = new_mochis.length unless new_mochis.length.zero?
end
puts count


# 第8問
n, y = gets.split(" ").map(&:to_i)
results = [-1, -1, -1]
# 大域脱出
catch(:break_loop) do
  # 1000円に札数乗じた金額が合計額を超えていたら組み合わせつくれない
  break if 1000 * n > y
  # 10000円に札数乗じた金額が合計額に達していなければ組み合わせつくれない
  break if 10000 * n < y
  (0..n).each do |t10|
    # 5000円に残札数乗じた金額を足しても合計額超えなければ後続ループは無意味なので飛ばす
    next if 5000 * (n - t10) + 10000 * t10 < y
    (0..(n - t10)).each do |t5|
      # 残額を算出して1000円で除して商と余りから1000円の札数を判定
      sabun = y - (10000 * t10 + 5000 * t5)
      t1, r = sabun.divmod(1000)
      next unless r.zero?
      if t10 + t5 + t1 == n
        results = [t10, t5, t1]
        throw :break_loop
      end
    end
  end
end
print results.join(' ')


# 第9問
s = 'erasererasedreamererasedreameraser'
s = gets.chomp("\n")
s.scan(/(!erase|eraser)/)
str = s.gsub(/(!erase|eraser)/,'').gsub(/erase/,'').gsub(/(!dream|dreamer)/,'').gsub(/dream/,'')
puts result = str.length == 0 ? 'YES' : 'NO'

