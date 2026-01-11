# atcoder

AtCoderの解答管理リポジトリ

## 色変記録

| 色 | Rating | 達成日 |
|----|--------|--------|
| 茶 | 400+ | - |
| 緑 | 800+ | - |
| 水 | 1200+ | - |

## 使い方

### 1. コンテストを設定

```sh
make sc
```

コンテスト名（例: `abc439`）を入力すると `contest` ファイルに保存される。

### 2. 問題を解く

`main.go` を編集して問題を解く。

```sh
make run  # 実行確認
```

### 3. 解答を保存

```sh
make sv
```

問題番号（例: `a`）を入力すると：
- `_result/{contest}/{problem}/main.go` に保存
- 自動でgitコミット
- `main.go` がテンプレートにリセット

## ディレクトリ構成

```
.
├── main.go          # 作業用ファイル
├── contest          # 現在のコンテスト名
├── Makefile         
├── shell/
│   ├── setc.sh      # コンテスト設定スクリプト
│   └── solve.sh     # 解答保存スクリプト
├── _template/       # テンプレート
└── _result/         # 解答保存先
    └── {contest}/
        └── {problem}/
            └── main.go
```
