class Solution:
    def findLongestWord(self, s: str, dictionary: List[str]) -> str:
        dictionary.sort(key = lambda x : (-len(x), x))
        for word in dictionary:
            i = 0
            for c in s:
                if word[i] == c:
                    i += 1
                    if i == len(word):
                        return word
        return ""