const fs = require("fs");

const data = [...Array(100000)].map((_, i) => i + 1);

fs.writeFileSync("sample.txt", JSON.stringify(data));
