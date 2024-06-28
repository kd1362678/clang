#include<stdio.h>
//��������������UINT�ōĒ�`
typedef unsigned int UINT;

//�񋓌^BitState�̐錾
enum BitState
{
	//�ʏ���
	Base = 0,	          //0000 0000 0000 0000
	//(1���炢�����ɃV�t�g���邩)
	Poison = 1 << 0,    //0000 0000 0000 0001(�ǂ�)
	Sleep = 1 << 1,	    //0000 0000 0000 0010(�˂ނ�)
	Paralysis = 1 << 2, //0000 0000 0000 0100(�܂�)
	Burn = 1 << 3,	    //0000 0000 0000 1000(�₯��)
	AtkUp = 1 << 4,	    //0000 0000 0001 0000(�U����Up)
	AtkDown = 1 << 5	  //0000 0000 0010 0000(�U����Down)
};
//��Ԃ�ύX����֐�
void ChangeFlag(UINT* s);
//��Ԃ��񕜂���֐�
void ClearFlag(UINT* s);
//��Ԃ�\������֐�
void DisplayStatus(UINT s);

main()
{
	//��Ԃ��Ǘ�����ϐ�Status��錾���ď�����Ԃɂ���
	UINT MyState = Base;		//0000 0000
	//�t���O�ύX�֐��̌Ăяo���i�A�h���X�n���j
	ChangeFlag(&MyState);
	//�t���O���m�F���ĕ\������֐��̌Ăяo���i�l�n���j
	DisplayStatus(MyState);
	//�t���O�ύX�֐��̌Ăяo���i�A�h���X�n���j
	ClearFlag(&MyState);
	//�t���O���m�F���ĕ\������֐��̌Ăяo���i�l�n���j
	DisplayStatus(MyState);
}
/*void DisplayStatus(UINT s)
* ��ԃt���O����ǂ̏�Ԃɂ��邩��\������
* ��1�����FUINT�^�̏�ԃr�b�g */
void DisplayStatus(UINT s) {
	//�t���O�������Ă���r�b�g�̊m�F
	printf("****���݂̏��****\n");
	//MyState�Ɗe��Ԃ�bit��Ƃ�AND���Z�������ʂ�0�ɂȂ�Ȃ����
	if (s & Poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Paralysis)
	{
		printf("���\n");
	}
	if (s & Burn)
	{
		printf("�Ώ�\n");
	}
	if (s & AtkUp)
	{
		printf("�U���̓A�b�v\n");
	}
	if (s & AtkDown)
	{
		printf("�U���̓_�E��\n");
	}
	if (s == Base)	//�ǂ̃t���O�������Ă��Ȃ��Ƃ�
	{
		printf("�������\n");
	}
	printf("******************\n");
}
/*void ChangeFlag(UINT* s)
* �e��Ԃ̃t���O�𗧂Ă�
* ��1�����FUINT�^�̏�ԃr�b�g�̃A�h���X */
void ChangeFlag(UINT* s) {
	int a;	//���͂����I��l���i�[���邽�߂̕ϐ�
	while (1) {
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:���͏I����");
		scanf("%d", &a);
		//0�����͂��ꂽ�疳�����[�v�𔲂���
		if (a == 0) {
			break;
		}
		switch (a) {
			//a��1�̂Ƃ��A��ԃr�b�g�ɓł�bit���OR���Z����
		case 1:
			//s�̓|�C���^�ϐ��Ȃ̂Ŏ��l��*s�ŋ��߂���
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
		default:	//1~6�܂ł̑I�����łȂ������Ƃ�
			break;
		}
	}
}
/*void ClearFlag(UINT* s)
* �e��Ԃ̃t���O�𗎂Ƃ�
* ��1�����FUINT�^�̏�ԃr�b�g�̃A�h���X */
void ClearFlag(UINT* s) {
	int a;
	while (1) {
		printf("�ǂ̏�Ԃ��񕜂��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 7:�S��  0:���͏I����");
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
		case 7:		//�S��Ԃ�����
			*s = Base;
			break;
		default:	//1~7�ȊO�̑I�����̂Ƃ�
			break;
		}
	}
}