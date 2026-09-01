<h2><a href="https://codeforces.com/contest/2139/problem/A" target="_blank" rel="noopener noreferrer">2139A — Maple and Multiplication</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2139A](https://codeforces.com/contest/2139/problem/A) |

## Topics
`greedy` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Maple and Multiplication</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Maple has two positive integers $$$a$$$ and $$$b$$$. She may perform the following operation any number of times (possibly zero) to make $$$a$$$ equal to $$$b$$$:</p><ul> <li> Choose any positive integer $$$x$$$, and multiply either $$$a$$$ or $$$b$$$ by $$$x$$$. </li></ul><p>Your task is to determine the minimum number of operations required to make $$$a$$$ equal to $$$b$$$. It can be proven that this is always possible.</p></div><div class="input-specification"><div class="section-title">Input</div><p>Each test contains multiple test cases. The first line contains the number of test cases $$$t$$$ ($$$1 \le t \le 100$$$). The description of the test cases follows. </p><p>The first and only line of each test case contains two positive integers $$$a$$$ and $$$b$$$ ($$$1 \le a, b \le 1000$$$) — the numbers Maple currently has.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, output a single integer representing the minimum number of operations Maple needs to make $$$a$$$ equal to $$$b$$$.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0023835299516859254" id="id008857232373694819" class="input-output-copier">Copy</div></div><pre id="id0023835299516859254"><div class="test-example-line test-example-line-even test-example-line-0">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2</div><div class="test-example-line test-example-line-even test-example-line-2">10 3</div><div class="test-example-line test-example-line-odd test-example-line-3">1000 1000</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0005527817322266315" id="id0013453094492441953" class="input-output-copier">Copy</div></div><pre id="id0005527817322266315">1
2
0
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first test case, you can multiply $$$a=1$$$ by $$$2$$$ to obtain $$$a=b=2$$$. This requires one operation.</p><p>In the second test case, you can multiply $$$a=10$$$ by $$$300$$$ to get $$$a = 3000$$$, then multiply $$$b=3$$$ by $$$1000$$$ to get $$$b=3000$$$. This requires two operations. Note that the numbers may exceed $$$1000$$$ after the operations.</p><p>In the third test case, $$$a$$$ and $$$b$$$ are already equal, so no operations are required.</p></div>