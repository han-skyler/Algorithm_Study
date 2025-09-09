# 🧠 알고리즘 스터디 (C++)

> **Goal**: 매주 C++로 알고리즘/자료구조를 풀고, 성능과 가독성을 모두 챙기는 실전 코딩 역량을 만든다.

---

## 🚀 시작하기 (Getting Started)

### 필수 환경

* **Language**: C++17 이상 (권장: C++20)
* **Build**: CMake ≥ 3.20, Ninja(옵션)
* **Compiler**: MSVC / Clang / GCC 중 택1

### 설치 & 빌드

```bash
# 1) 의존성 설치 (예: Ubuntu)
sudo apt-get update && sudo apt-get install -y build-essential cmake ninja-build

# 2) 빌드 (out-of-source)
cmake -S . -B build -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build

# 3) 실행 예시
./build/bin/sample
```

> Windows (MSVC): `cmake -S . -B build -G "Ninja" -DCMAKE_BUILD_TYPE=Release && cmake --build build`

---

## 📦 폴더 구조 (Folder Structure)

```
📁 algorithms-study-cpp
├─ 📁 solutions/            # 문제별 풀이 코드 (폴더명: 플랫폼/주차/문제번호)
│  ├─ boj/
│  │  └─ week01/
│  │     └─ 1000_A+B/
│  │        ├─ main.cpp
│  │        └─ README.md   # 해당 문제 접근/복잡도/포인트
│  ├─ programmers/
│  └─ leetcode/
│
├─ 📁 include/              # 공용 헤더(유틸, 자료구조 템플릿 등)
├─ 📁 lib/                  # 공용 라이브러리(예: FastIO, DSU, SegmentTree)
├─ 📁 tests/                # 단위 테스트 (GoogleTest 권장)
├─ 📁 benchmark/            # 간단한 성능 측정 코드 (구현 선택)
├─ 📁 docs/                 # 학습 정리, 회고, 팁
├─ CMakeLists.txt
└─ README.md
```

---

## 🧩 문제 풀이 가이드 (Solution Guide)

### 파일 규칙

* **경로 규칙**: `solutions/<platform>/weekXX/<problem-id>_<slug>/main.cpp`
* **헤더 금지/허용**: `<bits/stdc++.h>` **지양**, 필요한 표준 헤더만 사용
* **입출력**: `ios::sync_with_stdio(false); cin.tie(nullptr);` 기본 세팅

### 템플릿 (복붙용)

```cpp
// Problem: <플랫폼/번호/제목>
// Author: <이름 또는 GitHub ID>
// Date: YYYY-MM-DD
// Key idea: <핵심 아이디어 요약>
// Time: O(...), Space: O(...)

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    // TODO: 구현

    return 0;
}
```

> 스타일 정책상 `<bits/stdc++.h>` 대신 명시적 헤더 사용을 권장합니다. 실전 편의를 위해 템플릿엔 유지했지만, PR 시 **명시적 헤더로 교체**해주세요.

### 풀이 문서 템플릿 (`solutions/.../README.md`)

```md
# 문제명 (ID)

## 접근 (Approach)
- 핵심 아이디어:
- 자료구조/알고리즘:
- 그리디/DP/그래프/수학 등 분류:

## 복잡도
- 시간: O(...)
- 공간: O(...)

## 구현 포인트
- 엣지 케이스:
- 자주 나는 실수:

## 대안/개선
- 다른 접근:
- 메모리/시간 최적화:
```

---

## 🧱 코딩 스타일 (Coding Guidelines)

* **네이밍**: `lower_snake_case` (함수/변수), `UpperCamelCase` (클래스/타입)
* **상수**: `constexpr` / `const` 우선 사용
* **컨테이너**: 크기 고정 시 `array<T,N>` 선호, 그렇지 않으면 `vector<T>`
* **반복자**: 범위 기반 for, `auto`는 **과도 사용 금지** (타입이 명확할 때만)
* **함수**: 하나의 함수는 하나의 역할만 (SRP)
* **헤더**: 헤더에서 구현 최소화, 필요한 경우 `inline`/`constexpr` 고려
* **정밀도**: double 오차는 `abs(a-b) <= 1e-9` 형태로 비교

---

## 🧪 테스트 (with GoogleTest) — *선택*

> 단순 입출력 문제는 스킵 가능. 로직 분리 가능한 문제는 테스트 권장.

### 설치 & 실행

```bash
# gtest 가져오기 (FetchContent)
cmake -S . -B build -DENABLE_TESTS=ON
cmake --build build
ctest --test-dir build -V
```

### 예시 CMake 스니펫

```cmake
option(ENABLE_TESTS "Enable unit tests" ON)
if(ENABLE_TESTS)
  include(FetchContent)
  FetchContent_Declare(
    googletest
    URL https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
  )
  FetchContent_MakeAvailable(googletest)
  enable_testing()
  add_executable(sample_test tests/sample_test.cpp)
  target_link_libraries(sample_test GTest::gtest_main)
  add_test(NAME sample_test COMMAND sample_test)
endif()
```

---

## ⏱️ 벤치마크 (간단) — *선택*

```cpp
#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false); cin.tie(nullptr);
    auto t0 = chrono::steady_clock::now();

    // target code

    auto t1 = chrono::steady_clock::now();
    cout << chrono::duration<double, milli>(t1 - t0).count() << " ms\n";
}
```

---

## 📚 학습 트랙 (Study Tracks)

* **자료구조**: 배열, 스택/큐/덱, 연결리스트, 해시, 힙, 트리, 그래프, 유니온파인드, 세그트리, 펜윅트리
* **알고리즘**: 정렬, 이분탐색, 투포인터, 슬라이딩윈도우, 누적합, 그리디, DP, 최단경로(Dijkstra/Floyd), MST(Kruskal/Prim), 위상정렬, 문자열(KMP/Z/Trie), 기하, 수학(정수론/확률/조합)
* **테크닉**: 좌표압축, 비트마스크, 모듈러, 분할정복, Meet-in-the-middle

> 각 주차별로 1\~2개 트랙을 선정해 집중 학습합니다.

---

## 🗓️ 운영 방식 (Operation)

* **진행**: 매주 N문제(권장 3\~5) — 난이도 Mix
* **PR 마감**: 매주 **일요일 23:59 KST**
* **리뷰**: 월/화에 코드리뷰(라인 코멘트 + 대안 제안)
* **회고**: 주 1회, 10분 회고 기록 `docs/retrospective-weekXX.md`

---

## 🤝 컨트리뷰션 규칙 (Contribution Rules)

1. **브랜치**: `feat/<platform>/<weekXX>/<id>-<slug>`
2. **커밋 메시지**: `type(scope): subject`

   * 예) `solve(boj-1000): A+B 구현 및 엣지케이스 추가`
   * type: `solve`, `refactor`, `fix`, `docs`, `test`, `perf`
3. **PR 규칙**

   * 제목: `[weekXX] <platform>/<id>-<slug> by <name>`
   * 본문: 접근/복잡도/실패케이스/개선점 요약 (체크리스트 포함)
4. **리뷰 원칙**: 코멘트는 **사실+대안** 중심, 성능 수치/근거 첨부

---

## ✅ 체크리스트 (PR Template)

* [ ] 입출력 예제 모두 통과
* [ ] 시간/공간 복잡도 표기
* [ ] 엣지 케이스 테스트
* [ ] 명시적 헤더 사용
* [ ] O2/Ofast 차이 확인(필요 시)
* [ ] 주석: 핵심 아이디어만 (불필요한 주석 제거)

---

## 🏷️ 배지 (Badges)

![C++](https://img.shields.io/badge/C%2B%2B-17%2F20-blue)
![Build](https://img.shields.io/badge/build-CMake-informational)
![License](https://img.shields.io/badge/license-MIT-green)

> CI는 필요 시 GitHub Actions로 추가: 빌드/테스트 자동화, 포매팅 체크(clang-format) 등.

---

## 🔧 포매팅 & 정적분석 (선택)

* **clang-format**: Google 혹은 LLVM 스타일 기반 `.clang-format` 공유
* **clang-tidy**: 성능/안전 Rule 일부 적용

---

## 📝 라이선스

* MIT (또는 팀 규칙에 맞게 변경)

---

## 🙌 크레딧

* Contributors: @your-id, @teammate
* 참고 자료: 알고리즘 문제해결 전략, CP-Algorithms, emaxx, GeeksForGeeks, KACTL (필요 시 링크)

---

## 📌 빠른 복사 (Quick Copy)

```
solutions/<platform>/week01/1000_A+B/
  ├─ main.cpp
  └─ README.md
```

> 첫 PR은 `week01` 디렉토리와 위 구조 그대로 생성해서 올리면 됩니다.
