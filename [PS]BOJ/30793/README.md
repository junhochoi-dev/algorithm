# [Bronze V] gahui and sousenkyo 3 - 30793 

[문제 링크](https://www.acmicpc.net/problem/30793) 

### 성능 요약

메모리: 14244 KB, 시간: 120 ms

### 분류

사칙연산, 구현, 수학

### 제출 일자

2023년 12월 3일 22:57:20

### 문제 설명

<p>Gahui is watching the annual character election. After the election, <strong>The top 16 characters</strong> receive enormous benefits for one year. For that reason, fans vote passionately to get their favorite characters into the top 16. Remarkably, at least one Cinderella appears in every election, achieving an outstanding outcome.</p>

<p>Election results are announced twice: preliminary and final results. The vote count information for character x is as follows:</p>

<ul>
	<li>Character <em>x</em> obtained $p_x$ votes when announcing the preliminary result.</li>
	<li>Character <em>x</em> obtained $r_x$ votes when announcing the final result.</li>
</ul>

<p>$v_x$ is defined as $p_x$ divided by $r_x$. The type of character <code>x</code> is <strong>determined by the value $v_x$.</strong></p>

<ul>
	<li>If $v_x \lt 0.2$, the type of character <code>x</code> is <span style="color:#e74c3c;"><code>weak</code></span>.</li>
	<li>If $0.2 \le v_x \lt 0.4$, the type of character <code>x</code> is <span style="color:#e74c3c;"><code>normal</code></span>.</li>
	<li>If $0.4 \le v_x \lt 0.6$, the type of character <code>x</code> is <span style="color:#e74c3c;"><code>strong</code></span>.</li>
	<li>If $0.6 \le v_x$, the type of character <code>x</code> is <span style="color:#e74c3c;"><code>very strong</code></span>.</li>
</ul>

<p>Preliminary and final results of character <code>x</code> are given. Print <strong>the type of character <code>x</code>.</strong></p>

### 입력 

 <p>$p_x$ (preliminary result) and $r_x$ (final result) are given, separated by space.</p>

### 출력 

 <p>Print the answer to the question.</p>

