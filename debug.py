b = [4606, 4618, 4619, 4630, 4639, 4672, 4693, 4732, 4740, 4751, 4789, 4820, 4854, 4864, 4914, 4928, 4944, 5013, 5020, 5023, 5161, 5164, 5187, 5209, 5222, 5265, 5289, 5305, 5310, 5393, 5397, 5410, 5454, 5457, 5466, 5686, 5745, 5832, 5859, 5882, 5903, 5919, 5974, 5974, 5982, 4606, 5996, 6018, 6060, 6097, 6122, 6126, 6141, 6147, 6175, 6249, 6270, 6296, 6411, 6455, 6555, 6566, 6575, 6808, 6846, 6854, 6925, 6936, 6981, 6983, 6988, 7046, 7064, 7074, 7106, 7132, 7175, 7185, 7286, 7290, 7369, 7463, 7480, 7500, 7522, 7527, 7568, 7616, 7632, 7639, 7659, 7687, 7786, 7787, 7831, 7839, 7852, 7872, 7888, 7913, 7940, 7949, 7949, 8019, 8022, 8058, 8084, 8206, 8274, 8398, 8416, 8422, 8466, 8471]

a = [4606, 4618, 4619, 4630, 4639, 4672, 4693, 4732, 4740, 4751, 4789, 4820, 4854, 4864, 4914, 4928, 4944, 5013, 5020, 5023, 5161, 5164, 5187, 5209, 5222, 5265, 5289, 5305, 5310, 5393, 5397, 5410, 5454, 5457, 5466, 5686, 5745, 5832, 5859, 5882, 5903, 5919, 5974, 5974, 5982, 5995, 5996, 6018, 6060, 6097, 6122, 6126, 6141, 6147, 6175, 6249, 6270, 6296, 6411, 6455, 6555, 6566, 6575, 6808, 6846, 6854, 6925, 6936, 6981, 6983, 6988, 7046, 7064, 7074, 7106, 7132, 7175, 7185, 7286, 7290, 7369, 7463, 7480, 7500, 7522, 7527, 7568, 7616, 7632, 7639, 7659, 7687, 7786, 7787, 7831, 7839, 7852, 7872, 7888, 7913, 7940, 7949, 7949, 8019, 8022, 8058, 8084, 8206, 8274, 8398, 8416, 8422, 8466, 8471]

for i in range(len(a)):
    if(a[i] != b[i]):
        print(a[i],b[i],i)