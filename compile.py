import os
import subprocess
import shutil


def run():
    cwd = os.getcwd()
    cwd = os.path.join(cwd, "source_files")
    outputFolder = os.path.join(cwd, "output")
    toCompile = findAllItems(cwd)
    if os.path.isdir(outputFolder):
        shutil.rmtree(outputFolder)
        os.mkdir(outputFolder)
    else:
        os.mkdir(outputFolder)

    for item in toCompile:
        target = item.replace("source_files", "output")
        target = target[:-2]
        path, file = os.path.split(target)
        print(path, file)
        if not os.path.isdir(path):
            os.mkdir(path)
        subprocess.run(["clang", item, "-o", target])


def findAllItems(cwd):
    files = os.listdir(cwd)
    # print(files)
    toCompile = []
    for item in files:
        newItem = os.path.join(cwd, item)
        # print(item.split("."))
        # print(newItem)
        if os.path.isfile(newItem) and item.split(".")[-1] == "c":
            # print(item)
            toCompile.append(newItem)
        if os.path.isdir(newItem):
            toCompile.extend(findAllItems(newItem))
    return toCompile


if __name__ == "__main__":
    run()