import java.util.Scanner
 
fun main() {
    val scanner = Scanner(System.`in`)
    if (!scanner.hasNextInt()) return
    
    val t = scanner.nextInt()
    for (tc in 0 until t) {
        val n = scanner.nextInt()
        val arr = IntArray(n)
        for (i in 0 until n) {
            arr[i] = scanner.nextInt()
        }
 
        val ans = mutableListOf<Int>()
        var minVal = arr[0]
 
        for (i in 1 until n) {
            if (arr[i] >= minVal) {
                ans.add(i + 1)
            } else {
                minVal = arr[i]
            }
        }
 
        println(ans.size)
        println(ans.joinToString(" "))
    }
}