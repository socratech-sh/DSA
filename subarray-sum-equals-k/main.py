def subarraySum(nums: list[int], k: int) -> int:
    count = {
        0: 1
    }
    ans = 0
    curr = 0

    for num in nums:
        curr += num
        if (curr - k) in count:
            ans += count[curr - k]

        if curr in count:
            count[curr] += 1
        else:
            count[curr] = 1

    return ans
