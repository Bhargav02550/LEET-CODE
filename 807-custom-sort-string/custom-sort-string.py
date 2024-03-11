class Solution:
    def customSortString(self, order: str, s: str) -> str:
        sa = ""
        remaining_chars = ""
        char_freq = {}
        for char in s:
            char_freq[char] = char_freq.get(char, 0) + 1
        for char in order:
            if char in char_freq:
                sa += char * char_freq[char]
                del char_freq[char]
        for char in char_freq:
            remaining_chars += char * char_freq[char]

        return sa + remaining_chars
