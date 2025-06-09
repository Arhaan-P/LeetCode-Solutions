class Solution(object):
    def mostCommonWord(self, paragraph, banned):
        bans = set(banned)
        word_list = []
        word = []

        for char in paragraph:
            if char.isalpha():
                word.append(char.lower())
            else:
                if word:
                    word_list.append(''.join(word))
                    word = []
        if word:
            word_list.append(''.join(word))

        counter = Counter(word_list)
        for word, _ in counter.most_common():
            if word not in bans:
                return word
