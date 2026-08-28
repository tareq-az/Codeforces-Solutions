<h2><a href="https://codeforces.com/contest/2141/problem/A" target="_blank" rel="noopener noreferrer">2141A — Furniture Store</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | Kotlin 1.7 |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 2141A](https://codeforces.com/contest/2141/problem/A) |

## Topics
`*special` `implementation`

---

## Problem Statement

<div class="header"><div class="title">A. Furniture Store</div><div class="time-limit"><div class="property-title">time limit per test</div>2 seconds</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>On the website of a company that manufactures and sells furniture, customers can order $$$n$$$ different models of sofas, numbered from $$$1$$$ to $$$n$$$. Each sofa has a <span class="tex-font-style-bf">unique</span> price; the price of the $$$i$$$-th sofa is denoted by $$$a_i$$$.</p><p>Every customer who visits the website has their own budget $$$m$$$, which they are willing to spend on a sofa. When they look through the list of sofa models, they search for the first sofa that costs <span class="tex-font-style-bf">no more than $$$m$$$</span> and orders it. If there are no such sofas, then the client leaves the website without ordering anything.</p><p>The company aims to identify which sofas will never be ordered. Your task is to determine the models such that there is no such budget $$$m$$$ that a customer will order this particular model.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line contains a single integer $$$t$$$ ($$$1 \le t \le 1000$$$) — the number of test cases.</p><p>The first line of each test case contains a single integer $$$n$$$ ($$$1 \le n \le 100$$$).</p><p>The second line contains $$$n$$$ distinct integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 100$$$).</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each test case, provide the answer in this format: on the first line, print a single integer $$$k$$$ — the number of models that cannot be ordered. On the second line, print exactly $$$k$$$ integers in ascending order, representing the indices of the models that cannot be ordered.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006214400936210901" id="id007870401864037254" class="input-output-copier">Copy</div></div><pre id="id006214400936210901"><div class="test-example-line test-example-line-even test-example-line-0">4</div><div class="test-example-line test-example-line-odd test-example-line-1">3</div><div class="test-example-line test-example-line-odd test-example-line-1">1 2 3</div><div class="test-example-line test-example-line-even test-example-line-2">4</div><div class="test-example-line test-example-line-even test-example-line-2">4 6 2 1</div><div class="test-example-line test-example-line-odd test-example-line-3">1</div><div class="test-example-line test-example-line-odd test-example-line-3">100</div><div class="test-example-line test-example-line-even test-example-line-4">6</div><div class="test-example-line test-example-line-even test-example-line-4">7 5 8 4 6 2</div></pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007468202541740442" id="id008548282352219077" class="input-output-copier">Copy</div></div><pre id="id007468202541740442">2
2 3
1
2
0

2
3 5
</pre></div></div></div>