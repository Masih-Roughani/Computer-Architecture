import sys

argc = len(sys.argv[1])
argv = sys.argv
print(argv[1])
text = argv[1].lower()
for i in range(len(text) // 2):
    if text[i] != text[len(text) - 1 - i]:
        print("String is not palindrome")
        sys.exit()
print("String is palindrome")
