import re
from pathlib import Path

# identify target-independent builtin functions
NAME_TO_EXTENSION_MAP = dict(abs="alu")

with open("corev-builtin-spec.md", "rt") as file:
    spec = file.read()
exts = dict()

# rely on "####" as an indication of a builtin
for f in re.finditer(r"#### `(.+)`", spec):
    r = re.match(
        r"\w+ __builtin_((?:riscv_cv_([^_]+))?\w+)\s*\(.+\)",
        f[1],
    )
    if r is None:
        print("Failed to parse:", f[1])
        continue
    name = r[1]
    ext = NAME_TO_EXTENSION_MAP.get(name, r[2])
    # print(name, ext)
    exts.setdefault(ext, []).append(f[1])

include = Path("include")
include.mkdir(exist_ok=True)

for e, funcs in exts.items():
    ext_header = include / f"riscv_corev_{e}.h"
    with ext_header.open("wt") as file:
        file.write("#include <stdint.h>\n")
        for func in funcs:
            file.write(func)
            file.write(";\n")
