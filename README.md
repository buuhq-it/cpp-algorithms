# cpp-algorithms

```shell
git init
git add .
git commit -m "first commit"
git branch -M main
git remote add origin https://github.com/buuhq-it/cpp-algorithms.git
git push -u origin main

```

## Cấu hình vscode lập trình C++ on Windows

## install compiler

```text
Download và install msys2
https://www.msys2.org/

mở terminal MSYS2 MSYS hoặc MSYS2 UCRT64 
```

```shell
pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain
```

## ADD biến môi trường PATH: C:\msys64\ucrt64\bin

## open vscode

## add file .vscode/tasks.json

```json
{
  "tasks": [
    {
      "type": "cppbuild",
      "label": "C/C++: g++.exe build active file",
      "command": "C:\\msys64\\ucrt64\\bin\\g++.exe",
      "args": [
        "-fdiagnostics-color=always",
        "-g",
        "${file}",
        "-o",
        "${fileDirname}\\${fileBasenameNoExtension}.exe"
      ],
      "options": {
        "cwd": "${fileDirname}"
      },
      "problemMatcher": ["$gcc"],
      "group": {
        "kind": "build",
        "isDefault": true
      },
      "detail": "Task generated by Debugger."
    }
  ],
  "version": "2.0.0"
}
```

### add file .vscode/c_cpp_properties.json

```json
{
  "configurations": [
    {
      "name": "GCC",
      "includePath": ["${workspaceFolder}/**"],
      "defines": ["_DEBUG", "UNICODE", "_UNICODE"],
      "windowsSdkVersion": "10.0.22000.0",
      "compilerPath": "C:/msys64/ucrt64/bin/g++.exe",
      "cStandard": "c17",
      "cppStandard": "c++17",
      "intelliSenseMode": "windows-gcc-x64"
    }
  ],
  "version": 4
}
```

## Nút Run và Debug nằm ở góc phải trên
