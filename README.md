# 🧠 알고리즘 스터디 (C++)

> **Goal**: 매주 C++로 알고리즘/자료구조 문제를 해결하며  
> 성능과 가독성을 모두 고려한 실전 코딩 역량을 구축한다.

---

## 🚀 시작하기 (Getting Started)

### 필수 환경

* **Language**: C++17 이상 (권장: C++20)
* **Build**: CMake ≥ 3.20, Ninja (옵션)
* **Compiler**: MSVC / Clang / GCC

---

## 🏆 BOJ Tier

[![Solved.ac Profile](http://mazassumnida.wtf/api/v2/generate_badge?boj=j990420)](https://solved.ac/j990420/)

---

## 📚 Study Wiki

알고리즘 개념 정리, 강의 기반 학습 기록 및 진행 상황은 [Wiki](https://github.com/han-skyler/Algorithm_Study/wiki)에서 관리합니다.

> 일부 학습 과정에서 외부 알고리즘 강의 및 자료를 참고하여 학습을 진행합니다.

---

## 🧱 코딩 스타일 (Coding Guidelines)

* **네이밍**: `lower_snake_case` (함수/변수), `UpperCamelCase` (클래스/타입)
* **상수**: `constexpr` / `const` 우선 사용
* **컨테이너**: 크기 고정 시 `array<T,N>` 선호, 그렇지 않으면 `vector<T>`
* **반복자**: 범위 기반 for, `auto`는 과도 사용 금지
* **함수**: 하나의 함수는 하나의 역할만 (SRP)
* **헤더**: 헤더에서 구현 최소화, 필요한 경우 `inline` / `constexpr` 고려
* **정밀도**: double 비교는 `abs(a-b) <= 1e-9`

---

## 📚 학습 트랙 (Study Tracks)

* **자료구조**  
  배열, 스택/큐/덱, 연결리스트, 해시, 힙, 트리, 그래프, 유니온파인드, 세그트리, 펜윅트리

* **알고리즘**  
  정렬, 이분탐색, 투포인터, 슬라이딩윈도우, 누적합, 그리디, DP,  
  최단경로(Dijkstra/Floyd), MST(Kruskal/Prim), 위상정렬,  
  문자열(KMP/Z/Trie), 기하, 수학(정수론/확률/조합)

* **테크닉**  
  좌표압축, 비트마스크, 모듈러, 분할정복, Meet-in-the-middle

> 각 주차별로 1~2개 트랙을 선정해 집중 학습합니다.
