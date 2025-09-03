class Solution(object):
    def isAnagram(self, s, t):
        if len(s) != len(t):
            return False

        d1 = {}

        for char_s, char_t in zip(s, t):
            d1[char_s] = d1.get(char_s, 0) + 1
            d1[char_t] = d1.get(char_t, 0) - 1

        for value in d1.values():
            if value != 0:
                return False

        return True
