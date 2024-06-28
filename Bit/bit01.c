#include<stdio.h>
//符号無し整数をUINTで再定義
typedef unsigned int UINT;

//列挙型BitStateの宣言
enum BitState
{
	//通常状態
	Base = 0,	          //0000 0000 0000 0000
	//(1からいくつ左にシフトするか)
	Poison = 1 << 0,    //0000 0000 0000 0001(どく)
	Sleep = 1 << 1,	    //0000 0000 0000 0010(ねむり)
	Paralysis = 1 << 2, //0000 0000 0000 0100(まひ)
	Burn = 1 << 3,	    //0000 0000 0000 1000(やけど)
	AtkUp = 1 << 4,	    //0000 0000 0001 0000(攻撃力Up)
	AtkDown = 1 << 5	  //0000 0000 0010 0000(攻撃力Down)
};
//状態を変更する関数
void ChangeFlag(UINT* s);
//状態を回復する関数
void ClearFlag(UINT* s);
//状態を表示する関数
void DisplayStatus(UINT s);

main()
{
	//状態を管理する変数Statusを宣言して初期状態にする
	UINT MyState = Base;		//0000 0000
	//フラグ変更関数の呼び出し（アドレス渡し）
	ChangeFlag(&MyState);
	//フラグを確認して表示する関数の呼び出し（値渡し）
	DisplayStatus(MyState);
	//フラグ変更関数の呼び出し（アドレス渡し）
	ClearFlag(&MyState);
	//フラグを確認して表示する関数の呼び出し（値渡し）
	DisplayStatus(MyState);
}
/*void DisplayStatus(UINT s)
* 状態フラグからどの状態にあるかを表示する
* 第1引数：UINT型の状態ビット */
void DisplayStatus(UINT s) {
	//フラグが立っているビットの確認
	printf("****現在の状態****\n");
	//MyStateと各状態のbit列とをAND演算した結果が0にならなければ
	if (s & Poison)
	{
		printf("毒\n");
	}
	if (s & Sleep)
	{
		printf("睡眠\n");
	}
	if (s & Paralysis)
	{
		printf("麻痺\n");
	}
	if (s & Burn)
	{
		printf("火傷\n");
	}
	if (s & AtkUp)
	{
		printf("攻撃力アップ\n");
	}
	if (s & AtkDown)
	{
		printf("攻撃力ダウン\n");
	}
	if (s == Base)	//どのフラグも立っていないとき
	{
		printf("初期状態\n");
	}
	printf("******************\n");
}
/*void ChangeFlag(UINT* s)
* 各状態のフラグを立てる
* 第1引数：UINT型の状態ビットのアドレス */
void ChangeFlag(UINT* s) {
	int a;	//入力した選択値を格納するための変数
	while (1) {
		printf("どの状態にしますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 0:入力終了＞");
		scanf("%d", &a);
		//0が入力されたら無限ループを抜ける
		if (a == 0) {
			break;
		}
		switch (a) {
			//aが1のとき、状態ビットに毒のbit列をOR演算する
		case 1:
			//sはポインタ変数なので実値は*sで求められる
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Paralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:	//1~6までの選択肢でなかったとき
			break;
		}
	}
}
/*void ClearFlag(UINT* s)
* 各状態のフラグを落とす
* 第1引数：UINT型の状態ビットのアドレス */
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("どの状態を回復しますか？\n");
		printf("1:毒 2:睡眠 3:麻痺 4:火傷 5:攻撃↑ 6:攻撃↓ 7:全回復  0:入力終了＞");
		scanf("%d", &a);
		if (a == 0) {
			break;
		}
		switch (a) {
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Paralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:		//全状態を解除
			*s = Base;
			break;
		default:	//1~7以外の選択肢のとき
			break;
		}
	}
}