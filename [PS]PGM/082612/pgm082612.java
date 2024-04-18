class Solution {
    public long solution(long price, long money, long count) {
        long payment = count * (price + count * price) / 2;
        return payment > money ?  payment - money : 0;
    }
}