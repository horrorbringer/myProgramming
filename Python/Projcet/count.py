from pathlib import Path


filename = 'code.txt'
word_to_count = input('Enter word to count: ')

path=Path(filename)

try:
    contents = path.read_text()
except FileExistsError:
    print(f"File '{filename}' not found.")
else:
    word_count = contents.count(word_to_count)
    print(f"The word'{word_to_count}' appears {word_count} times in the '{filename}'")