fun gcd(a: Long, b: Long): Long {
    if (a == 0L) {
        return b
    }

    return gcd(b % a, a)
}

fun main() {
    val t = readln().toInt()

    for (i in 0 until t) {
        val (n, a, b) = readln().split(' ').map { it.toLong() }

        if (a == 0L || b == 0L) {
            println(2)
        } else if (n == a + b) {
            println(3)
        } else {
            println(n/gcd(n, gcd(a, b)))
        }
    }
}
