def encrypt(text,s):
	result = ""

	# Duyệt từng ký tự
	for i in range(len(text)):
		char = text[i]

		# mã hóa ký tự in hoa: sử dụng ord() để lấy đối số chuỗi của 1 ký tự unicode, chr() đổi về dạng ký tự
		if (char.isupper()):
			result += chr((ord(char) + s-65) % 26 + 65)

		# mã hóa ký tự thường
		elif(char.islower()):
			result += chr((ord(char) + s - 97) % 26 + 97)
		else:
			result += char
	return result

#kiểm tra kết quả
text = "ATTACKATONCEWWWA441"
s = 4
print ("Text : " + text)
print ("Shift : " , s)
res = encrypt(text,s)
print ("Cipher: " + res)
print ("Decrypt: " + encrypt(res,-s))