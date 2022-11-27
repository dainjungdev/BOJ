const axios = require('axios');
const cheerio = require('cheerio');


var problemId = 1000;


async function webScraping(problemId) {
    const map = {
        '!': '！',
        '%': '％',
        '&': '＆',
        '(': '（',
        ')': '）',
        '*': '＊',
        '+': '＋',
        ',': '，',
        '-': '－',
        '.': '．',
        '/': '／',
        ':': '：',
        ';': '；',
        '<': '＜',
        '=': '＝',
        '>': '＞',
        '?': '？',
        '@': '＠',
        '[': '［',
        '\\': '＼',
        ']': '］',
        '^': '＾',
        _: '＿',
        '`': '｀',
        '{': '｛',
        '|': '｜',
        '}': '｝',
        '~': '～',
        ' ': ' ', 
    };

    try {
        const url = `https://www.acmicpc.net/problem/${problemId}`;
        const response = await axios.get(url);
        const $ = cheerio.load(response.data);

        const title = $('title').text().split(':')[1].replace(/[^0-9]/, '');

        const problemDescription = $('#problem_description').find('p').text();

        const problemInput = $('#problem_input').find('p').text();

        const problemOutput = $('#problem_output').find('p').text();

        // const sampleData = [];
        // const samples = $('.sampledata');
        // for (let v of $(samples)) {
        //     sampleData.push($(v).text());
        // }

        const readme = `# ${problemId}. ${title} \n\n`
            + `[문제 링크](https://www.acmicpc.net/problem/${problemId}) \n\n`
            + `---\n`
            + `### 문제 설명\n\n ${problemDescription}\n\n`
            + `### 입력 \n\n ${problemInput}\n\n`
            + `### 출력 \n\n ${problemOutput}\n\n`
            + `---\n`;
        // + `### 예제 입력 1 \n\n
        // + '```'
        // + `${sampleData[0]}`
        // + '```'

        var replacedtitle = (title.replace(/[!%&()*+,\-./:;<=>?@\[\\\]^_`{|}~ ]/g, function (m) { return map[m]; }));
        var dir = `./${("000" + problemId).slice(-5)}.${replacedtitle}`;

        if (!fs.existsSync(dir)) {
            fs.mkdirSync(dir);
        }

        fs.writeFile(dir + '/README.md', readme, function (err) {
            if (err === null) {
                console.log('success', problemId);
            } else {
                console.log('fail');
            }
        });

        // var oldPath = `./cpp/${problemId}.cpp`
        // var newPath = `./${dir}/${problemId}.cpp`
        // fs.rename(oldPath, newPath, function (err) {
        //     if (err) throw err
        //     console.log('Successfully renamed - AKA moved!')
        // })

    } catch (error) {
        console.error(error);
    }
}

var fs = require('fs');
webScraping(problemId);