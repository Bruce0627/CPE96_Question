# CPE 一顆星 96 題｜C++17 逐題解法

題單依 UVa 題號排序，包含兩張截圖中可辨識的 83 題，並用同一份 96 題清單補齊其餘 13 題。 [96 題清單來源](https://a7069810.pixnet.net/blog/posts/11395457259)

每題都有可獨立編譯的程式。開啟工作區後，點進任何一題的 `.cpp`，按 `Ctrl+Shift+B` 編譯，或在命令選擇區選 **Tasks: Run Task** → **CPE56: 編譯並執行目前題目**。

| UVa | 題名 | 解法 | 程式碼 |
|---|---|---|---|
| 100 | The 3n + 1 Problem | 枚舉端點間的起始值，依奇偶算 Collatz 循環長度。輸出保留原端點順序，中間運算使用 64 位元。 | [C++](one-star/uva100.cpp) |
| 118 | Mutant Flatworld Explorers | 模擬左右轉與前進。機器人首度從某格走出邊界時記氣味，後續在該格忽略會走出邊界的前進指令。O(指令總數)。 | [C++](one-star/uva118.cpp) |
| 264 | Count on Cantor | 用三角數找第 n 項所在斜線及線內偏移，依斜線奇偶交換分子和分母。O(1)。 | [C++](one-star/uva264.cpp) |
| 272 | TeX Quotes | 逐字掃描，直引號交替換成兩個反引號或兩個單引號，狀態跨行保留。O(n)。 | [C++](one-star/uva272.cpp) |
| 299 | Train Swapping | 使用相鄰交換排序時，最少交換次數恰為逆序對數。枚舉所有車廂對計算。O(n²)。 | [C++](one-star/uva299.cpp) |
| 401 | Palindromes | 用字元鏡射表同時檢查一般迴文及鏡射迴文，按兩個布林值決定四種輸出。O(n)。 | [C++](one-star/uva401.cpp) |
| 406 | Prime Cuts | 篩出上界內的質數，依題意把 1 加入列表。從中央取 2c 或 2c−1 個，需求超過長度時印全部。 | [C++](one-star/uva406.cpp) |
| 490 | Rotating Sentences | 依原欄序逐欄輸出，每欄把原列由下往上讀；缺少的字元以空格補齊。O(列數×最長列長)。 | [C++](one-star/uva490.cpp) |
| 948 | Fibonaccimal Base | 由大到小貪婪選取不超過剩值的費波那契數，選取寫 1，略過寫 0。O(log n)。 | [C++](one-star/uva948.cpp) |
| 10008 | What's Cryptanalysis? | 將字母轉大寫後計數，依出現次數降序，次數相同按字母升序。O(n)。 | [C++](one-star/uva10008.cpp) |
| 10019 | Funny Encryption Method | 分別把輸入解讀為十進位和十六進位，再數兩個值的二進位 1。O(位數)。 | [C++](one-star/uva10019.cpp) |
| 10035 | Primary Arithmetic | 逐位相加並傳遞進位，統計進位操作。注意 0、1、多次的句型。O(位數)。 | [C++](one-star/uva10035.cpp) |
| 10038 | Jolly Jumpers | 每個相鄰差的絕對值必須落在 1 到 n−1 且互異。O(n)。 | [C++](one-star/uva10038.cpp) |
| 10041 | Vito's Family | 排序選中位數，使絕對距離總和最小。O(n log n)。 | [C++](one-star/uva10041.cpp) |
| 10050 | Hartals | 對每個政黨標記週期倍數，排除星期五與星期六，最後只計一次。O(各週期倍數數量總和)。 | [C++](one-star/uva10050.cpp) |
| 10055 | Hashmat the Brave Warrior | 用較大兵力減較小兵力，使用 64 位元整數。O(1)。 | [C++](one-star/uva10055.cpp) |
| 10056 | What Is the Probability!! | 目標玩家首輪勝率為 p(1−p)^(i−1)，之後各輪乘上 (1−p)^n。用等比級數加總，p=0 時直接給 0。 | [C++](one-star/uva10056.cpp) |
| 10057 | A Mid-Summer Night's Dream | 排序取左右中位數，兩者間皆為最佳整數。輸出左中位數、輸入中落在區間的個數、區間整數個數。O(n log n)。 | [C++](one-star/uva10057.cpp) |
| 10062 | Tell Me the Frequencies! | 統計一行內的字元。按頻率升序，頻率相同按 ASCII 降序。O(n+Σ log Σ)。 | [C++](one-star/uva10062.cpp) |
| 10071 | Back to High School Physics | 加速度固定，所以在 2t 時的位移為 2vt。O(1)。 | [C++](one-star/uva10071.cpp) |
| 10082 | WERTYU | 把每個鍵換成同排左邊的鍵，空格與換行原樣保留。O(n)。 | [C++](one-star/uva10082.cpp) |
| 10093 | An Easy Problem! | 利用 b≡1 (mod b−1)，只須檢查位數值的總和。從能容納最大位數的最小基底起試到 62，略過符號。O(n)。 | [C++](one-star/uva10093.cpp) |
| 10101 | Bangla Numbers | 以 10⁷ 為 kuti 遞迴切割。每層剩值依 lakh、hajar、shata 分解，整個數為零時另外輸出 0。O(位數)。 | [C++](one-star/uva10101.cpp) |
| 10162 | Last Digit | 逐項取模 10。i^i 的末位以 20 為週期，只需要長整數輸入的末兩位，再用預算前綴求總和末位。O(輸入位數)。 | [C++](one-star/uva10162.cpp) |
| 10170 | The Hotel with Infinite Rooms | 找最小團體大小 x，使 S 到 x 的整數和至少為 D。用加倍找上界再二分。O(log D)。 | [C++](one-star/uva10170.cpp) |
| 10189 | Minesweeper | 保留地雷，其餘格子計算八個相鄰位置的地雷數。O(RC)。 | [C++](one-star/uva10189.cpp) |
| 10190 | Divide, But Not Quite Conquer! | 反覆除以 m，整除才繼續，最後必須到 1。m≤1 或 n≤1 印 Boring!。O(log n)。 | [C++](one-star/uva10190.cpp) |
| 10193 | All You Need Is Love! | 將兩個二進位字串轉成整數。如果最大公因數大於 1，兩數就有題目要求的共同因數。O(位數+log min(a,b))。 | [C++](one-star/uva10193.cpp) |
| 10209 | Is This Integration? | 利用四分之一圓扇形和等邊三角形推得三種面積係數，再各乘 a²。O(1)。 | [C++](one-star/uva10209.cpp) |
| 10215 | The Largest/Smallest Box | 體積 x(L−2x)(W−2x) 微分，較小的根是極大值。體積在 x=0 和 x=min(L,W)/2 都是零。O(1)。 | [C++](one-star/uva10215.cpp) |
| 10221 | Satellites | 半徑是高度加 6440。把角度轉為較小的圓心角後，用 rθ 求弧長、2r sin(θ/2) 求弦長。O(1)。 | [C++](one-star/uva10221.cpp) |
| 10222 | Decode the Mad Man | 把鍵盤按各列列出，每個合法輸入鍵往左移兩格，保留空白和換行。O(n)。 | [C++](one-star/uva10222.cpp) |
| 10226 | Hardwood Species | 每個非空行是樹名，可包含空格。對每組依名字計頻率，百分比印四位小數。O(n log n)。 | [C++](one-star/uva10226.cpp) |
| 10229 | Modular Fibonacci | 用倍增公式遞迴算 F(n) 及 F(n+1)，每步對 2^m 取模。O(log n)。 | [C++](one-star/uva10229.cpp) |
| 10235 | Simply Emirp | 先判斷原數是否質數。反轉後須與原數不同且仍為質數才是 emirp。O(√n+√反轉值)。 | [C++](one-star/uva10235.cpp) |
| 10242 | Fourth Point!! | 找出兩線段重複的端點 P。剩下端點 A、B 相加再減 P，就是平行四邊形的第四點。O(1)。 | [C++](one-star/uva10242.cpp) |
| 10252 | Common Permutation | 對兩行分別計數，按 a 到 z 各輸出兩邊頻率的較小值。O(n+m)。 | [C++](one-star/uva10252.cpp) |
| 10258 | Contest Scoreboard | 累計每隊首次答對前的錯誤次數和罰時，再依題數降序、時間和隊號升序排列。O(s+t log t)。 | [C++](one-star/uva10258.cpp) |
| 10260 | Soundex | 依題目表轉數字，相鄰同碼只輸出一次。母音等未編碼字元將前碼重設。O(n)。 | [C++](one-star/uva10260.cpp) |
| 10268 | 498’ | 對係數逐一乘上原次方得到導數係數，再用 Horner 法代入 x。O(n)。 | [C++](one-star/uva10268.cpp) |
| 10279 | Mine Sweeper | 只替被點開的安全格計算八鄰域地雷。踩到任一地雷時顯示全部雷。O(n²)。 | [C++](one-star/uva10279.cpp) |
| 10281 | Average Speed | 每筆先用舊速度乘經過秒數更新里程。時間後有速度就更新，否則顯示目前里程。O(行數)。 | [C++](one-star/uva10281.cpp) |
| 10282 | Babelfish | 空行前建外語到英語的字典，空行後依鍵查詢。找不到印 eh。O((n+q) log n)。 | [C++](one-star/uva10282.cpp) |
| 10300 | Ecological Premium | 每一農場將面積乘環保係數再加總。牲畜數在原式中消去。O(n)。 | [C++](one-star/uva10300.cpp) |
| 10310 | Dog and Gopher | 依輸入順序找第一個洞，使狗距離平方至少為地鼠的四倍。O(n)。 | [C++](one-star/uva10310.cpp) |
| 10324 | Zeros and Ones | 建 1 的前綴和。區間的 1 數為 0 或等於長度時，所有位元相同。O(n+q)。 | [C++](one-star/uva10324.cpp) |
| 10346 | Peter's Smokes | 每換一支煙，淨少 k−1 個煙蒂，最後須留至少一個。n>0 時共 n+(n−1)/(k−1) 支。O(1)。 | [C++](one-star/uva10346.cpp) |
| 10370 | Above Average | 用總分與人數求平均，透過分數乘人數比較是否嚴格高於平均。O(n)。 | [C++](one-star/uva10370.cpp) |
| 10409 | Die Game | 用上、北、西三面表示骰子，對面點數合為 7。依方向更新兩個受影響的面。O(指令數)。 | [C++](one-star/uva10409.cpp) |
| 10415 | Eb Alto Saxophone Player | 用指法表把音符轉成十指按鍵狀態。只累加從放開轉為按下的手指，空行的十個答案皆為零。O(n)。 | [C++](one-star/uva10415.cpp) |
| 10420 | List of Conquests | 每筆只取該行第一個詞作國名。用有序 map 計數後按字典序輸出。O(n log n)。 | [C++](one-star/uva10420.cpp) |
| 10424 | Love Calculator | 把字母換成 1 到 26 並加總，再取數根。小值除大值換成百分比。O(n)。 | [C++](one-star/uva10424.cpp) |
| 10469 | To Carry or not to Carry | 無進位二進位加法是 XOR。O(1)。 | [C++](one-star/uva10469.cpp) |
| 10473 | Simple Base Conversion | 觀察是否含 0x 來選輸入進位。十進位轉十六進位時使用大寫，遇負數結束。O(n)。 | [C++](one-star/uva10473.cpp) |
| 10474 | Where is the Marble? | 先排序，再用 lower_bound 找第一次出現的 1 起算位置。O(n log n+q log n)。 | [C++](one-star/uva10474.cpp) |
| 10550 | Combination Lock | 固定先轉 3 圈共 1080 度。三段分別依順時針、逆時針、順時針算模 40 距離，每格 9 度。O(1)。 | [C++](one-star/uva10550.cpp) |
| 10573 | Geometry Paradox | 兩小圓半徑已知時，灰色面積為 2πr₁r₂。只給切線長 t 時，利用 t²=16r₁r₂ 得 πt²/8。O(1)。 | [C++](one-star/uva10573.cpp) |
| 10642 | Can You Solve It? | 在 x+y 相同的斜線上編號。點 (x,y) 之前有 (x+y)(x+y+1)/2+x 步，終點減起點。O(1)。 | [C++](one-star/uva10642.cpp) |
| 10678 | The Grazing Cow | 橢圓長半軸為繩長的一半，短半軸由焦距與長半軸求出。面積是 πab。O(1)。 | [C++](one-star/uva10678.cpp) |
| 10696 | f91 | 遞迴式在 n≤100 時總是回傳 91，n≥101 時回傳 n−10。O(1)。 | [C++](one-star/uva10696.cpp) |
| 10699 | Count the Factors | 試除到剩值平方根。遇到因數先計一次並除乾淨，剩值大於 1 再計一次。O(√n)。 | [C++](one-star/uva10699.cpp) |
| 10714 | Ants | 反向碰撞等同互相穿越。最早為各螞蟻到較近端點距離的最大值，最晚為到較遠端點的最大值。O(n)。 | [C++](one-star/uva10714.cpp) |
| 10783 | Odd Sum | 把兩端調整成奇數，用等差級數求和。區間沒有奇數時輸出 0。O(1)。 | [C++](one-star/uva10783.cpp) |
| 10812 | Beat the Spread! | 由總和 s、差 d 求大分 (s+d)/2 與小分 (s−d)/2，排除 d>s 或奇偶不同。O(1)。 | [C++](one-star/uva10812.cpp) |
| 10908 | Largest Square | 以查詢點為中心逐圈擴張，只檢查新一圈的外框。碰到不同字元或邊界即停止。每次查詢 O(k²)。 | [C++](one-star/uva10908.cpp) |
| 10922 | 2 the 9s | 先判斷各位數字總和是否為 9 的倍數。若是，反覆加總到 9，計算 9-degree。O(位數)。 | [C++](one-star/uva10922.cpp) |
| 10925 | Krakovia | 以十進位數字逐位相加，最後逐位長除法分帳。O(nD)，D 是總價位數。 | [C++](one-star/uva10925.cpp) |
| 10929 | You Can Say 11 | 逐位對 11 算餘數，因此即使輸入很長也不會溢位。O(位數)。 | [C++](one-star/uva10929.cpp) |
| 10931 | Parity | 重複除以 2 取出二進位位元，反轉後輸出並統計 1。O(log n)。 | [C++](one-star/uva10931.cpp) |
| 10935 | Throwing Cards Away I | 用佇列逐輪丟隊首，再把新的隊首移至隊尾。O(n)。 | [C++](one-star/uva10935.cpp) |
| 10994 | Simple Addition | 以前綴差求區間和。每組連續十個數的非零末位合計 45，尾數是零的貢獻移到除以 10 的子問題。O(log q)。 | [C++](one-star/uva10994.cpp) |
| 11000 | Bee | 每年新雄蜂數等於上一年總蜂數。新雌蜂數為上一年雄蜂數加 1。逐年代入。O(n)。 | [C++](one-star/uva11000.cpp) |
| 11001 | Necklace | 最大化長度平方所對應的 k(V−kV₀)。枚舉能製成的圓片數，最大值若並列則印 0。O(V/V₀)。 | [C++](one-star/uva11001.cpp) |
| 11005 | Cheapest Base | 對 2 到 36 進位反覆除基底並按餘數累計字元成本。輸出所有同為最低成本的基底。O(35 log n)。 | [C++](one-star/uva11005.cpp) |
| 11044 | Searching for Nessy | 去掉一圈邊界後，每個聲納覆蓋三列三欄。兩方向各向上取整等價於原邊長除以 3 取整。O(1)。 | [C++](one-star/uva11044.cpp) |
| 11059 | Maximum Product | 枚舉所有連續區間，固定左端逐個乘入右端。以 0 起始處理無正乘積的情況。O(n²)。 | [C++](one-star/uva11059.cpp) |
| 11063 | B2-Sequence | 先檢查正數與嚴格遞增，再把所有 i≤j 的和插入集合，重複即失敗。O(n² log n)。 | [C++](one-star/uva11063.cpp) |
| 11150 | Cola | 每喝一瓶就多一個空瓶，三空瓶換一瓶淨少兩空瓶。可借一瓶並在最後歸還，額外可喝 floor(n/2) 瓶。O(1)。 | [C++](one-star/uva11150.cpp) |
| 11172 | Relational Operators | 比較兩整數並輸出 <、> 或 =。O(1)。 | [C++](one-star/uva11172.cpp) |
| 11309 | Counting Chaos | 從下一分鐘循環搜尋，去掉 HHMM 前導零後判斷迴文。最多試 1440 次。 | [C++](one-star/uva11309.cpp) |
| 11313 | Gourmet Games | 每場淘汰 m−1 人。只有 n−1 可被 m−1 整除時可辦完，比賽場數就是商。O(1)。 | [C++](one-star/uva11313.cpp) |
| 11332 | Summing Digits | 用數根公式 1+(n−1)%9 得到反覆加總後的一位數。O(1)。 | [C++](one-star/uva11332.cpp) |
| 11342 | Three-Square | 按 a≤b≤c 的字典序預算平方和，對每個和保留第一次命中。查詢 O(1)。 | [C++](one-star/uva11342.cpp) |
| 11344 | The Huge One | 對每個除數逐位算餘數。所有餘數都是 0 才輸出 Wonderful。O(位數×除數個數)。 | [C++](one-star/uva11344.cpp) |
| 11349 | Symmetric Matrix | 所有元素都須非負，且與旋轉 180° 後的對應位置相等。用一維陣列前後比對。O(n²)。 | [C++](one-star/uva11349.cpp) |
| 11417 | GCD | 預算每個上界下的 GCD 總和。從 n−1 到 n 只需加上 gcd(i,n) 的新配對。預算 O(M² log M)，查詢 O(1)。 | [C++](one-star/uva11417.cpp) |
| 11428 | Cubes | 由小到大枚舉 y，對 n+y³ 取整數立方根並驗證 x³。當 (y+1)³−y³ 已超過 n 就停止。O(√n)。 | [C++](one-star/uva11428.cpp) |
| 11461 | Square Numbers | 平方數的根落在 ceil(sqrt(a)) 到 floor(sqrt(b))，計算整數根個數。O(1)。 | [C++](one-star/uva11461.cpp) |
| 11470 | Square Sums | 每格到最近邊界的距離決定所在圈。用四個距離的最小值加入該圈，從外到內輸出。O(n²)。 | [C++](one-star/uva11470.cpp) |
| 11483 | Code Creator | 依固定模板輸出 C 程式。逐字掃描輸入，在雙引號和反斜線前加跳脫符號，每行輸出一個 printf。O(總字元數)。 | [C++](one-star/uva11483.cpp) |
| 11689 | Soda Surpler | 把兩種空瓶相加。每輪用整除算可換瓶數，再把喝完的空瓶與剩餘空瓶帶到下一輪。O(log n)。 | [C++](one-star/uva11689.cpp) |
| 11728 | Alternate Task | 用倍數掃描預算 1 到 1000 每個數的因數和，反查時保留最大的原數。查詢 O(1)。 | [C++](one-star/uva11728.cpp) |
| 11764 | Jumping Mario | 逐一比較相鄰牆高，嚴格上升算高跳，嚴格下降算低跳，相同不計。O(n)。 | [C++](one-star/uva11764.cpp) |
| 11917 | Do Your Own Homework! | 用科目名稱查所需天數，分別比較原截止日與寬限五天的期限。未列出科目視為無法完成。O(n log n)。 | [C++](one-star/uva11917.cpp) |
| 12019 | Doom's Day Algorithm | 2011/1/1 是星期六。累加前面月份天數與當月偏移，對 7 取餘數。O(1)。 | [C++](one-star/uva12019.cpp) |
| 12503 | Robot Instructions | 把每條指令存成 −1 或 +1，SAME AS 直接查先前已解析的位移。O(n)。 | [C++](one-star/uva12503.cpp) |
