const axios = require('axios');
const cheerio = require('cheerio');


var problemId = 18258;
var language = 'cpp';


const config = { 
	headers: { 
	'User-Agent': 'Mozilla/5.0 (Macintosh; Intel Mac OS X 10_15_7) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/104.0.0.0 Safari/537.36', 
	}, 
}; 

async function webScraping(problemId, language) {
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
        const response = await axios.get(url, config);
        const $ = cheerio.load(response.data);

        const title = $('title').text().split(':')[1].replace(/[^0-9]/, '');

        const problemDescription = $("#problem_description").text().replace('\t\t\t\t', '');

        const problemInput = $("#problem_input").text().replace(/[\t\t]/g, '');

        const problemOutput = $('#problem_output').text().replace(/[\t\t]/g, '');

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

        const cpp_template = '#include <iostream>\n\n' +
            'using namespace std;\n\n' +
            'int main() {\n' +
            '    return 0;\n' +
            '}';

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

        if (language == 'cpp') {
            fs.writeFile(dir + `/${problemId}.cpp`, cpp_template, function (err) {
                if (err === null) {
                    console.log('cpp_success', problemId);
                } else {
                    console.log('cpp_fail');
                }
            });
        }

        if (language == 'python') {
            fs.writeFile(dir + `/${problemId}.py`, 'write code here', function (err) {
                if (err === null) {
                    console.log('python_success', problemId);
                } else {
                    console.log('python_fail');
                }
            });
        }


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
webScraping(problemId, language);