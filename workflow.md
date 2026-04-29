# AI Algorithm Learning Agent Workflow

## 核心流程

输入算法代码 / 学习问题  
↓  
算法解释 Agent：解释核心思想和代码逻辑  
↓  
代码审查 Agent：检查语法错误、边界问题和复杂度  
↓  
模板整理 Agent：生成可复用 C++ 算法模板  
↓  
学习规划 Agent：生成复习任务和下一步计划  
↓  
沉淀到 GitHub 仓库

## 多 Agent 分工

### 1. Algorithm Explainer Agent

负责解释算法的核心思想、适用场景、变量含义和执行流程。

### 2. Code Review Agent

负责检查代码中的常见问题，例如：

- 数组越界
- 死循环
- 递归边界错误
- 二分模板选择错误

### 3. Template Organizer Agent

负责把题目代码整理成标准模板，包括：

- 算法名称
- 适用场景
- 核心思路
- 时间复杂度
- 易错点
- C++ 模板代码

### 4. Study Planner Agent

负责根据学习进度生成复习计划，例如：

- 今天复写快速排序模板
- 完成一道二分题
- 复习昨天整理的易错点
