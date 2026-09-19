<h2><a href="https://codeforces.com/contest/2114/problem/A" target="_blank" rel="noopener noreferrer">2114A — Square Year</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++20 (GCC 13-64) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2114A](https://codeforces.com/contest/2114/problem/A) |

## Topics
`binary search` `brute force` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Square Year</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p><span class="tex-font-style-it">One can notice the following remarkable mathematical fact: the number $$$2025$$$ can be represented as $$$(20+25)^2$$$.</span></p><p>You are given a year represented by a string $$$s$$$, consisting of exactly $$$4$$$ characters. Thus, leading zeros are allowed in the year representation. For example, "0001", "0185", "1375" are valid year representations. You need to express it in the form $$$(a + b)^2$$$, where $$$a$$$ and $$$b$$$ are <span class="tex-font-style-bf">non-negative integers</span>, or determine that it is impossible.</p><p>For example, if $$$s$$$ = "0001", you can choose $$$a = 0$$$, $$$b = 1$$$, and write the year as $$$(0 + 1)^2 = 1$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains a single integer $$$t$$$ ($$$1 \le t \le 10^4$$$) — the number of test cases.</p><p>The following lines describe the test cases.</p><p>The only line of each test case contains a string $$$s$$$, consisting of exactly $$$4$$$ characters. Each character is a digit from $$$0$$$ to $$$9$$$.</p></div><div class="output-specification"><div class="section-title">Output</div><p>On a separate line for each test case, output: </p><ul> <li> Two numbers $$$a$$$ and $$$b$$$ ($$$a, b \ge 0$$$) such that $$$(a + b)^2 = s$$$, if they exist. If there are multiple suitable pairs, you may output any of them. </li><li> The number $$$-1$$$ otherwise. </li></ul></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id009987516698246679" id="id00888461424412053" class="input-output-copier">Copy</div></div><pre id="id009987516698246679"><div class="test-example-line test-example-line-even test-example-line-0">5</div><div class="test-example-line test-example-line-odd test-example-line-1">0001</div><div class="test-example-line test-example-line-even test-example-line-2">1001</div><div class="test-example-line test-example-line-odd test-example-line-3">1000</div><div class="test-example-line test-example-line-even test-example-line-4">4900</div><div class="test-example-line test-example-line-odd test-example-line-5">2025</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0013494789227384807" id="id00888181306754089" class="input-output-copier">Copy</div></div><pre id="id0013494789227384807">0 1
-1
-1
34 36
20 25
</pre></div></div></div>