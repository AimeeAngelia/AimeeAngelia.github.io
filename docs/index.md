# 随机密码哎😘~

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>随机密码哎😘~</title>
    <style>
        body {
            font-family: Arial, sans-serif;
            display: flex;
            flex-direction: column;
            align-items: center;
            justify-content: center;
            height: 100vh;
            margin: 0;
            background-image: url('https://aimeeangelia.github.io/Pictures/kawaii.jpg');
            background-size: cover;
            background-position: center;
            color: white;
            text-shadow: 1px 1px 2px black;
        }
        #password {
            font-size: 1.5em;
            margin: 20px 0;
        }
        button {
            padding: 10px 20px;
            font-size: 1em;
            background-color: rgba(255, 255, 255, 0.8);
            border: none;
            border-radius: 5px;
            cursor: pointer;
        }
        input[type="number"] {
            padding: 10px;
            font-size: 1em;
            margin: 10px 0;
            text-align: center;
            width: 200px;
        }
        .options {
            display: flex;
            justify-content: center;
            gap: 20px;
            margin-bottom: 20px;
        }
        .options label {
            background-color: rgba(255, 255, 255, 0.8);
            padding: 10px;
            border-radius: 5px;
        }
    </style>
</head>
<body>
    <h1>随机密码生成器</h1>
    <input type="number" id="length" placeholder="输入密码长度 (默认16)" min="1" max="128" value="16">
    <div class="options">
        <label><input type="checkbox" id="uppercase" checked> 大写字母</label>
        <label><input type="checkbox" id="lowercase" checked> 小写字母</label>
        <label><input type="checkbox" id="numbers" checked> 数字</label>
        <label><input type="checkbox" id="special" checked> 特殊字符</label>
    </div>
    <div id="password">点击按钮生成密码</div>
    <button onclick="generatePassword()">生成密码</button>
    <div class="footer">
        v0.0.1 作者: @Kitte
    </div>
    <script>
        function generatePassword() {
            const length = parseInt(document.getElementById("length").value) || 16;
            const useUppercase = document.getElementById("uppercase").checked;
            const useLowercase = document.getElementById("lowercase").checked;
            const useNumbers = document.getElementById("numbers").checked;
            const useSpecial = document.getElementById("special").checked;

            let charset = "";
            if (useUppercase) charset += "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
            if (useLowercase) charset += "abcdefghijklmnopqrstuvwxyz";
            if (useNumbers) charset += "0123456789";
            if (useSpecial) charset += "!@#$%^&*()_+[]{}|;:',.<>?";

            if (charset === "") {
                document.getElementById("password").innerText = "请选择至少一个字符类型";
                return;
            }

            let password = "";
            for (let i = 0; i < length; i++) {
                const randomIndex = Math.floor(Math.random() * charset.length);
                password += charset[randomIndex];
            }
            document.getElementById("password").innerText = password;
        }
    </script>
</body>
</html>
