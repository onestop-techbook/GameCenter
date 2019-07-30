= ゲームセンターのゲームを自宅で楽しむ技術

//flushright{
nosuke@電脳のツボ
//}

== はじめに

こんにちは、nosuke (@konosuke) といいます。十数年ほど前から基板を趣味にしています。突然ですが、本コラムでは、ゲームセンターのビデオゲームそのものを自宅で好きなだけ遊ぶという、本誌の趣旨と完全に逆行するような話をしたいと思います。


ゲームセンターで動作しているビデオゲームは、画面やスピーカー、コントロールパネル(レバーやボタン、ハンドルなどの操作系)、コイン投入口などがついた装置である筐体と、筐体の内部に置かれ、ゲームそのものを提供する電子機器である基板の2 要素で構成されます。ゲーム内容によっては、筐体と中の基板が切り離せないものもありますが、多くの場合、筐体は汎用品であり、中で動かす基板を入れ替え、必要に応じて操作系を変更することで、別のゲームを動かせたりします。今回のテーマは、筐体を家庭に置くという話ではなく、筐体の中の基板を自宅で動かして楽しむというお話になります。

== 基板の特徴

いきなり基板と言われても、イメージが湧かない方が大半でしょう。基板は、絶縁体でできた板の上に、回路を配線し、その上にCPU やRAM などを始めとする様々な電子部品を実装した電子機器です。パソコンに詳しい方は、パソコンのマザーボードをイメージすればよいかもしれません。多くの場合、これがそのまま剥き出しの状態で販売され、そのまま筐体の中にネジ止めされて置かれます(基板の中には、一部もしくは全体がケースで保護されているものもあります)。

一方、機能的な面では、一般的な家庭用ゲーム機と共通する部分が多いことは想像つくかと思いますが、細かい点で家庭用ゲーム機と色々と異なります。このあたりの違いを理解することで、基板の特徴を掴めることでしょう。たとえば、基板には家庭用ゲーム機にない、以下のような特徴があります。


=== 本体からソフトが切り離せない？ 

家庭用ゲーム機では、まず本体があり、そこにカートリッジや光学メディアの形で供給されるゲームソフトを装着することでゲームが動作し、別のゲームソフトに交換することで、また別のゲームを動かせるのが一般的です。ゲーム機本体は高価ですが、一度買えば、その後は、その本体上で動作するソフトを買うだけで、新しいゲームを遊ぶことができます。

基板においても、このようにゲームソフト部分を入れ替えることで動くゲームを切り替えることができるタイプのものが多数存在しますが、一方で、ゲーム機本体とゲームソフトが一体化しており、切り離せない、すなわち特定のゲームしか遊ぶことのできない基板というのも多数存在します。すなわち、あるゲームの基板の人気が衰え、ゲームセンターでの役割を終えた際、その基板の本体機能のみを残し、ゲームソフト部分を入れ替えることで別のゲームに切り替えて資源を有効活用するということができないものが割と普通に存在するのです。あるいは、物理的にはゲームソフト部分を入れ替えられるような構造となっている場合であっても、メーカーからゲームソフト単独との形で販売されないと、実質本体機能とゲームソフト部分は分離されない状態となり、結局同じゲーム機本体部分を備えた別のゲーム基板を購入する必要が生じます。このような基板も多数存在します。これは、知らない人からするとちょっと驚きかもしれません。


=== 同世代の家庭用ゲーム機と比べて高性能(だった) 

基板は、同世代の家庭用ゲーム機に比べると、高度な画像処理が可能なハードウェアや贅沢な音源チップを搭載していたり、CPU の動作周波数や高かったり、RAM やROM の容量が大きかったりと、表現力や処理速度、ユーザエクスペリエンスの面で、同時代のゲーム機に比べて圧倒的に優れていました。しかしながら、家庭用ゲーム機やPC の高性能化が進むにつれ、次第にその差は縮まり、2000 年代後半あたりには、ほとんど性能差はなくなったものと考えられます。

=== 筐体で動けば良いという前提で作られている

基板は、筐体の中で動かすことのみを前提として作られています。そのため、一般的な筐体の電源が供給可能な電圧で動作し、筐体に据え付けられているレバーやボタンの操作やコインの投入を検出でき、筐体のブラウン管で調整込みで期待通りに映る映像信号と、筐体についているスピーカーで十分な音を鳴らせる音声信号が出力できればOK となります。当たり前ですが、一般家庭で動かすことはあらゆる点で想定されていません。



この他にも、ライセンス的に営利目的で稼働させることができるとか、新作の価格が数万円から数十万円と高価であるとか、基板そのものの機器としての特徴を理解する上ではあまり関係ないものの、家庭用ゲーム機とは明らかに異なる位置づけの製品であることがわかる差異もあります。


== 売ってるの？ 一般人が買えるの？ 

基板はお金を取って遊ばせることのできる業務用のゲームですが、基板を買うにあたり免許など特別なものは必要ありません。お金さえあれば誰でも買うことができます。

個人で基板を買う場合、主に2 種類の購入方法があります。

1つは、秋葉原などに店舗を構える専門店から買うという方法です。現在、基板を商品として恒常的に扱っていて、なおかつ個人に販売している専門店は、筆者の知る限り、国内で9 店あります。これら店舗で扱っているものの多くは中古品ですが、新作発売時などは、お店を通じて新品を取り寄せて買うことも可能です。もちろん、新作かつ新品なので、ものすごいお値段になりますが(筆者も一度だけ、新品の新作基板をお店を通じて買ったことがあります)。

もう1 つは、ヤフオクやeBay などの個人売買の仕組みを利用するという方法です。個人売買といっても、個人だけでなく、リサイクル業者やゲームセンター自身が出品していることも多々あります。また、前述の専門店も、店頭では売りにくいものをオークションで販売していたりします。

いずれのチャネルを利用する場合でも、ゲームセンターに無理にお願いしたりすることなく、普通に入手できるものであるということがおわかり頂けるでしょう。ただ、基板は家庭用ゲーム機に比べて絶対的な流通量が少なく、特に人気タイトルはなかなか中古市場に出て来ません。そのため、「お金があるのに物がなくて買えない」といった、違った意味での「買えない」問題は常時伴います。

== 買ったとして、家庭で動かせるの？ 

基板は、最近のネットワーク認証が必要な特殊なものや、特殊な操作系を必要とするものを除けば、大概は筐体がなくても家庭で動かして遊ぶことができます。

基板を家庭用ゲーム機のように家庭で動かすには、筐体の持つ電源、モニタ、スピーカー、コントロールパネル(操作系) 、コインシューターなどに相当する役割を提供する装置が必要になります。これらのうち、モニタ以外の機能をまとめて提供するのが、コントロールボックスと呼ばれる装置です。

コントロールボックスは、内部に筐体相当の電源を持ち、基板から出てくるアナログRGB の映像信号を家庭用のテレビやパソコン用のモニタに出力可能な信号に変換する機能や、スピーカーを直接駆動することが前提の音声信号をラインレベルに変換する機能を提供し、さらにプレーに必要なレバーやボタン、クレジット投入スイッチなどを備えています。前述の基板を扱っている専門店などで購入することができます。

また、コントロールボックスは、構造的にそれほど複雑なものではないので、個人で部品を寄せ集め、市販のジョイスティックを改造するなどすることで、自作することも可能です。筆者は基板に全振りしたくて、基板を触るようになった当初から市販のコントロールボックスは利用せず、自作のコントロールボックス相当の環境で基板を稼働させています。

コントロールボックスをコンセントに繋ぎ、テレビやスピーカーに配線して、さらに基板と間をハーネスと呼ばれる配線の束で接続することで、家庭の環境で極体を必要とせずに遊べるようになります。

== とはいえ結構大変

コントロールボックスがあれば、筐体がなくても家庭で基板を動かせることはおわかり頂けたかと思いますが、そうは言ってもやはり基板は筐体の中で動かすことを前提とした装置です。家庭用ゲーム機のように手軽に取っ替え引っ替え遊べるようになるかというと、まったくそんなことはありません。

ここでは、筆者の感じる基板の大変なところを、ぱっと思いつく範囲でご紹介します。

=== 保管が大変


基板環境を構築し、アーケードゲームが自宅で動く様を目の当たりにすると、すぐにあれもこれもと次のものが欲しくなります。が、ここで問題が1 つ生じます。たくさんの基板を、どのように保管するかという問題です。

現物を見るとわかりますが、基板はとにかく大きいものが多いです。剥き出しのタイプの基板でも、幅や奥行きは20cm ～40cm 程度の大きさのものが一般的で、表面に大きなヒートシンク(大概はアンプ用) が搭載されていたり、基板自体が複数階建ての構造になっていたりすると、厚みも5cm くらいになったりします。当然、基板の一部もしくは全体が樹脂製のケースで保護されていたりすると、その分さらに大きくなります。特に、パソコンベースの基板や、何かしらの理由で電磁波を遮断したい基板などは、巨大な金属製のケースに入っているものもあり、大きさ・重さともに大変なことになります。たとえば、MODEL2 と呼ばれるセガの基板は、コネクタがついている背面を除いた5 面が金属製のケースで覆われており、大きさは幅40cm ×奥行き50cm ×高さ12cm ほど重さは7kg ほどになります。これだけで、おそろしく場所を占有することがおわかり頂けるでしょう。

また、回路や電子部品が剥き出しの基板については、物理的な破損を避けるために、稼働させていない間は積み重ねたりせず、個別に静電防止タイプのエアキャップで丁寧に巻いて本のように立てて並べることが望ましいとされています。

ちなみに、基板は大きさに規格がないため、メーカーやゲームによって大きさがまちまちです。そのため、適当に基板を並べて保管しようものなら、無駄なスペースが大量に発生してしまいます。

筆者は、限られたスペースに1 枚でも多くの基板を収納できるよう、極力サイズ(幅) が近い基板を揃えて並べるようにし、さらにスチールシェルフの棚板を基板の幅に合わせて棚を1 段分多く捻出するといった工夫を行っています。


=== 遊び始めるまでの準備が大変

基板によっては専用のハーネスを用意する必要があったり、基板の他にも外付けの光学ドライブなどの色々な装置を設置して配線する必要があったり、パドルやトラックボールなどの特殊な操作系のついたコントロールパネルを別途用意する必要があったりと、簡単ではないことが何かと多いです。

また、縦画面のゲームを動かす場合、画面を物理的に縦にする必要があります。元々画面の回転が可能な液晶モニタや、回転可能な液晶アームを取り付けたモニタであれば簡単ですが、そうでないと非常に苦労します。

他にも、基板によっては映像信号のクセが強すぎて、いざ電源を入れてもテレビなどに映像が正常に表示されないとか、ソフトを交換した後は特別な初期化処理を行わないとゲームが起動しないとか、知らないとどうにもならないようなトラブルが頻繁に起こります。そのたびに何が問題なのかを冷静に調査し、ネットなどで情報を漁り、機材を入れ替えるなどして解決する必要があります。まさにゲームセンターの店員さんと同じようなノウハウが蓄積されていくことになるでしょう。

セッティングが楽しいならまったく問題ないのですが、ただ遊びたいだけの場合、とんでもなく大変な作業に感じられることと思います。

もちろん、一度設置してしまえば、その後は気軽に遊べるようにはなりますが、ゲームを入れ替える際などは、かなりの気合が必要と言えるでしょう。

=== とにかくよく壊れる

基板は本当によく壊れます。よくパソコン関係の笑い話で「何もしていないのに壊れた」というのがありますが、本当に、丁寧に保護した状態で棚に並べて保管しておいただけなのに、壊れたりすることがあります。その最たる例は、1 ヶ月放置しただけで起動しなくなる基板でしょう。

これら基板では、ゲームの違法コピー対策の一環として、基板の起動に必要なセキュリティ情報が揮発性のRAM に書き込まれているのですが、そのRAM をバッテリーバックアップしているのが、リチウム電池などの数年～数十年持つような電池ではなく、充電式の電池なのです。電池は、基板に通電されている間に充電されますが、電源を切って1 ヶ月も放置すれば空になってしまいます。その結果、RAM に記録されていたセキュリティ情報も消失していしまい、再度充電しても復活しません。かつては、こうなるとメーカー修理行きとなり、数千円～数万円もの修理代がかかりました(現在ではメーカーは修理すら受け付けていませんが、個人レベルで修理する方法が確立されており、復活が可能となっています)。家庭用ゲーム機の世界からすると考えられないような話ですが、おそらくは「ゲームセンターだから入荷したら毎日動かすのが当たり前＆売上が落ちたら即撤去なので問題ない」という考え方に基づいて、このような仕様となったのでしょう。筆者の知る範囲では、1990 年前後の、Kabuki と呼ばれるカスタムZ80 を搭載したカプコンのクイズゲームなどの基板と、ケイブの怒首領蜂大往生BL のみがこのような方式を採用しています。

また、「1 ヶ月放置するだけで故障」よりはインパクトに欠けますが、製造段階での品質管理に問題があったためか、粗悪な電池やコンデンサが液漏れを起こして回路やパーツが腐食により断線を起こす基板や、プログラムに不備があり、書き換え回数に上限のあるEEPROM (ハイスコアなどを保存するのに使われる) を、デモ画面が1 周するたびに書き換えてしまい、ある日突然書き換えられなくなって自然死を迎える基板など、元々ハードやソフトが時限爆弾を抱えているようなものも存在します。

いずれにしても、欠陥品として回収されても仕方がないレベルのクオリティだと思いますが、、発売してから数ヶ月程度の間に一気に稼がせ、その後は廃棄(もしくはメーカーが回収して部品を再利用) といったケースの多いアーケードゲームだからこそ許されたのかもしれません。

また、元々頑丈な筐体の中で動かすものであることから、動いている間は外界からの物理的な衝撃から保護する必要はなく、基板単体の防御力を高める必要がなかったとか、設置を行うのは一般人ではなく機材の扱いに長けたプロ(のはず) であることから、デザイン的に不親切な部分が多く、故障に繋がるミスを誘発しやすいといった点も、基板自体で見ると壊れやすいという側面に繋がっているものと考えられます。

他にも、基板の故障の話と、それに対する文句は山のようにあるのですが、誌面の都合上、これくらいに留めたいと思います。



基板には、これらの他にもダメなところや面倒なところがたくさんあります。製品の性格上、中古であっても内容の割に値段が高いものが多く、正直なところ、単に面白いビデオゲームで遊びたいなら、家庭用ゲーム機やPC 向けの最新作品で遊んだ方がずっと良いでしょう。また、過去の名作に触れたいような場合でも、最近ではメーカーの技術やこだわりによって、本物とほぼ変わらないクオリティで、さらにプラス要素が加わった移植作品が多数家庭用ゲーム機やPC で遊べるようになり、わざわざ基板で遊ぶことのメリットは減っていると考えられます。


== じゃあ何が面白くて基板なんかやってるの？ 

前章を読めば、当然出てくる疑問ですよね。わざわざ場所を食う基板を所有して、故障と戦いながら、面倒な思いをして家庭で動かすのはなぜなのでしょうか。

これは完全に人それぞれで、ここで何かしら1 つの結論を出すのは不可能だと考えられます。たとえば、大好きなゲームだから移植の有無に関係なくオリジナルを手元に置いておきたいという人もいれば、いつまでも遊び続けたいのに移植(やエミュレーション) のクオリティに納得がいかないため基板を所持し続けざるを得ない人もいるでしょうし、あるいは子供の頃の憧憬を追い続けている人もいることでしょう。

ちなみに、筆者の場合、元々基板を始めたのはまさに3 番目のパターンなのですが、現在では「基板に触れること自体が楽しくて仕方がない」という理由で基板を所有し、故障と戦いながら、動かすことを続けています。環境を整えて初めて動いたときのワクワクする思い、集めて比べることの面白さ、故障の原因を突き止め、修理して復活させることの達成感。メーカー各社が工夫を凝らし、様々な思いを込めて作ったハードウェアそのものがもたらす体験が、十数年もの間、筆者を突き動かし続けています。

== おわりに

というわけで、最後は筆者の個人的な話になってしまいましたが、ここではゲームセンターのゲームを自宅で動かすという、基板にまつわるお話を超駆け足でご紹介させて頂きました。
最後に、筆者が感じている心配事について、少しだけお話しておきましょう。これまでご紹介してきた基板ですが、最近では海外への流出が一段と進んでいると聞きます。アーケードゲームもまた、アニメや家庭用ゲームなどと同様に、日本で作られた世界に誇るコンテンツの1 つです。海外で価値が見出され、海外で大切に保守・保存され続けることは、日本国内でただの産廃として処分されてしまうよりも遥かに良いことでしょう(海外勢によって、別のゲームにコンバートする目的で国内のマイナータイトルが狩り尽くされるのは許し難いですが)。しかしながら、後世になって、日本人が(海外から指摘されて) その価値に気がついたときには日本国内にはモノも技術もない、あるのは間違いだらけの変なデータベースだけ、なんていう状況はちょっと虚しいです。日本で作られた形あるものなんだから、それくらい日本できちんと保守・保存できてもよいのではないかと思うわけです。

筆者は、以前から、基板の解析や保守など、保存に繋がる技術や知見は海外ユーザの方が圧倒的に進んでおり、国内のユーザとはレベルに大きな開きがあると感じています。日本国内には保存する場所がないから仕方がないとか、法的な面での懸念から表立って活動しにくいとか、専門の修理業者が充実しているからユーザは情報が必要ないとか、色々な理由が考えられますが、とにかく保存につながる新しいことは海外から入ってくることがほとんどです。

国内メーカーが何かに目覚めて急に全面協力してくるようなことでもない限り、今さら海外との差を縮めることは難しいでしょうし、今後、国内の大学などの研究機関がどの程度アテになるのかも未知数です。2019 年の3 月末には、カプコンが、これまで続けてきた古い基板のサポートをついに終了させました。それ以外のメーカーはとうの昔にサポートを終わらせており、基板の修理を受け付けている業者も数を減らしていると噂される中、今後はより末端での保守・保全活動が重要となって来ることでしょう。

浮世絵のような事態にはならぬよう、筆者を含めた国内の各ユーザー(オーナー) の頑張りに期待するとともに、少しでもそれを支援できるよう、筆者としても培った知見や技術を展開していきたいと考えています。

最後は何だか変な話になってしまいましたが、本誌のテーマである「ゲームセンターで遊ぶ」ことに付随して、最先端のゲームが稼働しているゲームセンターに居場所がなくなってしまった古いゲームにも、第二の活躍の場があることと、国内におけるその文化が、意外と危うい状況に進みつつあるということを知っていただけたら幸いです。

